#include <set>
namespace sudoku {
	void checkStart(){
		correct=0;
	}
	void checkPillar(int collumn){
		std::set<char> list;
		for(int i=0;i<9;i++){
			if(map[i][collumn] != ' '){
				list.insert(map[i][collumn]);
			}
		}
		if(list.size() == 9){
			correct++;
		}
	}
	
	
	void checkCollumn(int pillar){
		std::set<char> list;
		for(int i=0;i<9;i++){
			if(map[pillar][i] != ' '){
				list.insert(map[pillar][i]);
			}	
		}
		if(list.size() == 9){
			correct++;
		}
	}
	
	
	void checkBox(){
		std::set<char> list;
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				if(map[i][j] != ' '){
					list.insert(map[i][j]);
				}	
			}
		}
		if(list.size() == 9){
			correct++;
		}
	}
	
	
	bool checkWin(){
		if(correct == 27){
			return true;
		}
		return false;
	}
	
}
