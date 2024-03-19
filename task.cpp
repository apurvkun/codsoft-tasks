#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main(){
    srand(time(0));
    int num1;
    int num=rand()%100+2;
    
    for(int i=1;i<=15;i++){
        cout<<"Guess number"<<i<<":"<<endl;
        cout<<"Enter the number that you might think could be a number generated(1 to 100)"<<endl;
        cin>>num1;
        if(num<0){
          cout<<"This is an invalid guess as we are taking only positive numbers into account="<<endl;
        }
        for(int j=3;j<6;j++){
        if(num1>num && num1-num==j){
            cout<<"Too close!"<<endl;
        }
        if(num1<num && num-num1==j){
            cout<<"Too close!"<<endl;
        }
        }
        for(int k=1;k<3;k++){
        if(num1<num && num-num1==k){
            cout<<"Much closer!"<<endl;
        }
        if(num1>num && num1-num==k){
            cout<<"Much closer!"<<endl;
        }
        }
      
 if(num1>num && num1-num==6 || num1-num==7){
            cout<<"Close enough!"<<endl;
        }
        if(num1<num && num-num1==6|| num-num1==7){
            cout<<"Close enough!"<<endl;
        }


         for(int i=8;i<=100;i++){
     if(num1>num && num1-num==i){
            cout<<"Too far!"<<endl;
        }
         if(num1<num && num-num1==i){
            cout<<"Too far!"<<endl;
        }

    }
        if(num==num1){
            cout<<"Congrats you guessed the right number!"<<endl;
            break;
        }
}
return 0;
}

