#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Sudoku {
    public:
    //variables
    //2by2 matrix
    int sudokuboard[9][9] = {
                            {0, 0, 6, 5, 0, 8, 4, 0, 0},
                            {5, 2, 0, 0, 0, 1, 0, 0, 0},
                            {0, 7, 8, 0, 0, 0, 0, 0, 1},
                            {0, 0, 4, 0, 1, 0, 0, 8, 0},
                            {9, 0, 0, 8, 2, 3, 0, 0, 5},
                            {0, 5, 0, 0, 9, 0, 6, 0, 0},
                            {1, 3, 0, 0, 0, 0, 2, 5, 0},
                            {0, 0, 0, 0, 0, 0, 0, 7, 4},
                            {0, 0, 5, 2, 0, 6, 3, 0, 0}
                            };
   
    

    //prints the gameboard
    void showGame(){
        for(int i=0; i<9;i++){
            for(int j=0; j<9;j++){

                cout<<sudokuboard[i][j]<< " ";
            }   
            cout << "\n";
        }
     
    }

    bool checkRow(int row, int value){
        
        for(int i=0; i<9;i++){
            if(sudokuboard[row][i]==value){
                return false;
            }
        }
        return true;
    }
    void checkColumn(){

    }
    void checkBox(){

    }
};


int main(){
    Sudoku sudokuboard;
    sudokuboard.checkRow(0,6);
    return 0;

}