namespace sudoku {
	void move(int x,int y,char move){
		if(map[x][y] == ' '){
			map[x][y] = move;
		}
	}
	void remove(int x,int y){
		map[x][y] = ' ';
	}
}
