#include "mapData.h"
#include <iostream>
namespace sudoku{
	void setupMap(){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				map[i][j] = ' ';
			}
		}
	}
	void drawMap(){
		std::cout << "     ";
		for(int i=1;i<=9;i++){
			std::cout << i;
			if(i%3==0){
				std::cout << " ";
			}
			else {
				std::cout << "  ";
			}
		}
		std::cout << "\n";
		char let[9] = {'a','b','c','d','e','f','g','h','i'};
		char a;
		a = 218;
		std::cout <<"    " << a;
		for(int i=0;i<24;i++){
			if(i%9==7){
				a=194;
				std::cout << a;
			}
			else if(i!=8){
				a = 196;
				std::cout << a;;
			}
		}
		a=191;
		std::cout << a << "\n";
		for(int i=0;i<9;i++){
			std::cout << let[i] << "   ";
			for(int j=0;j<9;j++){
				if(j == 0){
					a = 179;
					std::cout << a;
				}
				std::cout << map[i][j];
				if(j%3 == 2){
					
					a = 179;
					std::cout << a;
				}
				else {
					std::cout << "  ";
				}
			}
			if(i %3==2){
				std::cout <<"\n    ";
				
				if(i != 8){
					a = 195;
					std::cout << a;
				}
				else {
					a = 192;
					std::cout<< a;
				}
				for(int j=0;j<24;j++){
					if(j%9==8 && j != 0){
						if(i == 8){
							a = 193;
							std::cout << a;
						}
						else{
							a = 197;
							std::cout << a;
						}
					}
					else if(j != 0 && j !=10){
						a = 196;
						std::cout << a;
					}
					if(j == 19){
						a =196;
						std::cout << a;
					}
				}
				a = 180;
				if(i!= 8){
					std::cout << a;
				}
				else{
					a = 217;
					std::cout << a;
				}
			}
			std::cout << "\n";
		}
	}
}
