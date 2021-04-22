#include <ctime>
namespace sudoku {
	void startup(){
		srand(time(NULL));
	}
	void generateMap(){
		int randx,randy;
		for(int i=0;i<150;i++){
			if(i%5 == 0){
				do{
					randx = rand()%10;
					randy = rand()%10;
				}while(map[randx][randy] != ' ');
				map[randx][randy] = (rand()%10)+'0';
			}
		}
	}
}
