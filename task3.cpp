#include<iostream>
using namespace std;

void gamebox( char matrix[3][3]){
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (j > 0 ) {
        cout << " | ";
      }
      cout<<matrix[i][j];
    }
    cout << endl;
    if (i < 2) {
      for (int l =0; l<8; l++) {
        cout << "-";
      }
      cout << endl;
    }
  }
  cout << endl;
}
 
 bool winner(char matrix[3][3],char opponent){

    for(int i=0;i<3;i++){
if(matrix[i][0]== opponent && matrix[i][1]== opponent && matrix[i][2]== opponent)
    return true;
if(matrix[0][i]== opponent && matrix[1][i]== opponent && matrix[2][i]== opponent)
    return true;
    }
if(matrix[0][0]== opponent && matrix[1][1]== opponent && matrix[2][2]== opponent)
    return true;

if(matrix[0][2]== opponent && matrix[1][1]== opponent && matrix[2][0]== opponent)
    return true;
return false;
    }

   
   
    
main(){
  
    char matrix[3][3]={{' ',' ',' ',},{' ',' ',' '},{' ',' ',' '}};
    char player ='X';
    int row,col;
cout<<"welcome to tic-tac-toe game"<<endl;

for(char turn=1;turn<10;turn++){
    gamebox(matrix);
    cout<<"Player"<<player<<"enter row(0 to 2) and column(0 to 2)"<<endl;
    cin>>row>>col;


if(row<0 || row>3 || col<0 || col>3){
    cout<<"invalid move"<<endl;
    turn--;
    continue;
}

matrix[row][col]=player;

if(winner(matrix,player)){
    gamebox(matrix);
    cout<<"Player"<<player<<"wins!"<<endl;
    break;
}

player=(player=='X') ? '0' : 'X';
cout<<"Current player:"<<player<<endl;
}

if(winner(matrix,'X')|| winner(matrix,'0')){
    cout<<"Congratulations!"<<endl;
}
else{
    cout<<"It's a draw!"<<endl;
}
return 0;
}





