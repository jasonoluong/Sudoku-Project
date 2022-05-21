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
    bool checkColumn(int column, int value){
        for(int i=0; i<9;i++){
            if(sudokuboard[i][column]==value){
                return false;
            }
            /*cout<< sudokuboard[i][column]<<"\n";*/
        }
        return true;
    }

    bool checkBox(int row, int column, int value){

        if(row/3==0 && column/3==0){//value is at the first box
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                /*cout<< sudokuboard[i][j]<<"\n";*/
                    if(sudokuboard[i][j]==value){
                        return false;
                    }
                }
            }
        }
        if(row/3==1 && column/3==0){//value is at the second
            for(int i=3; i<6; i++){
                for(int j=0; j<3; j++){
                    if(sudokuboard[i][j]==value){
                            return false;
                    }
                }
            }
        }
        if(row/3==2 && column/3==0){
            for(int i=6; i<9; i++){
                for(int j=0; j<3; j++){
                    if(sudokuboard[i][j]==value){
                            return false;
                    }
                }
            }
            
        }
        if(row/3==0 && column/3==1){
            for(int i=0; i<3; i++){
                for(int j=3; j<6; j++){
                    if(sudokuboard[i][j]==value){
                            return false;
                    }
                }
            }
            
        }
        if(row/3==1 && column/3==1){
            for(int i=3; i<6; i++){
                for(int j=3; j<6; j++){
                    if(sudokuboard[i][j]==value){
                            return false;
                    }
                }
            }
            
        }
        if(row/3==2 && column/3==1){
            for(int i=6; i<9; i++){
                for(int j=3; j<6; j++){
                    if(sudokuboard[i][j]==value){
                            return false;
                    }
                }
            }
            
        }
        if(row/3==0 && column/3==2){
            for(int i=0; i<3; i++){
                for(int j=6; j<9; j++){
                    if(sudokuboard[i][j]==value){
                            return false;
                    }
                }
            }
            
        }
        if(row/3==1 && column/3==2){
            for(int i=3; i<6; i++){
                for(int j=6; j<9; j++){
                    if(sudokuboard[i][j]==value){
                            return false;
                    }
                }
            }
            
        }
        if(row/3==2 && column/3==2){
            for(int i=6; i<9; i++){
                for(int j=6; j<9; j++){
                    if(sudokuboard[i][j]==value){
                            return false;
                    }
                }
            }
            
        }
        return true;
    }

    bool checkWin(){
        for(int i=0; i<9; i++){
            for(int j=1;j<10;j++)
               if(!checkRow(i,j) || !checkColumn(i,j) || !checkBox(i,0,j)){
                   cout<<"not win";
                   return false;
               }
        }
        return true;
    }

   
    bool valueIsValid(int row, int column, int value){
        if(!checkRow(row, value) || !checkColumn(column, value) || !checkBox(row, column, value)){
            cout<<"value is not valid at the position";
            return false;
        }
        cout<<"value is valid at the position"<<"\n";
        return true;
    }

    void changeSquare(int row, int column, int value){
        if(valueIsValid(row,column,value)){
            sudokuboard[row][column]=value;
            showGame();
        }
        else{
            cout<<"value not valid"<<"\n";
        }

    }



    
};


int main(){
    Sudoku sudokuboard;
    sudokuboard.changeSquare(0,0,3);
    return 0;

}