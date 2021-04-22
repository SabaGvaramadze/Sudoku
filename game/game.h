#include "drawMap.h"
#include "makeMove.h"
#include "wincheck.h"
#include "randomGeneration.h"
#include <conio.h>
#include <iostream>
namespace sudoku{
	void game(){
		setupMap();
		startup();
		generateMap();
		while(true){
			system("cls");
			drawMap();
			char choice;
			char x,y;
			std::cout << ":Press 'e' To Use Eraser::: Press 'f' To Make a Move\n";
			choice = getch();
			if(choice == 'f'){
				do{
					system("cls");
					drawMap();
					std::cout << "Pillar: ";
					std::cin >> x;
				}while(x<'1' || x>'9');
				
				do{
					system("cls");
					drawMap();
					std::cout << "Pillar: " << x << "\n";
					std::cout << "Collumn: ";
					std::cin >> y;
				}while(y<'a' || y>'i');
				
				do{
					system("cls");
					drawMap();
					std::cout << "Choice: ";
					std::cin >> choice;
				}while(choice<'1' || choice>'9');
				y-='a';
				move(y,x-'1',choice);
				
				checkStart();
				for(int i=0;i<9;i++){
					checkPillar(i);
					checkCollumn(i);
				}
				for(int i=0;i<3;i++){
					for(int j=0;j<3;j++){
						checkBox(i,j);
					}
				}
				if(checkWin()){
					break;
				}
			}
			if(choice == 'e'){
				do{
					system("cls");
					drawMap();
					std::cout << "Pillar: ";
					std::cin >> x;
				}while(x<'1' || x>'9');
				
				do{
					system("cls");
					drawMap();
					std::cout << "Pillar: " << x << "\n";
					std::cout << "Collumn: ";
					std::cin >> y;
				}while(y<'a' || y>'i');
				y-='a';
				remove(y,x-'1');
			}
		}
		std::cout << "         !!!YOU WON!!!\nPress Any Key to Restart";
	}
}
