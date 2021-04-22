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
	
	
	void checkBox(int boxCollumn,int boxPillar){
		std::set<char> list;
		for(int coll=boxCollumn*3-1;coll<3;coll++){
			for(int pillar=boxPillar*3-1;pillar<(boxPillar+1)*3;pillar++){
				if(map[coll][pillar] != ' '){
					list.insert(map[coll][pillar]);
				}	
			}
		}
		if(list.size() == 9){
			correct++;
		}
	}
	
	
	bool checkWin(){
		if(correct == 2){
			return true;
		}
		return false;
	}
	
}
