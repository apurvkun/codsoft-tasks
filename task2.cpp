#include<iostream>
using namespace std;
main(){
    int num1,num2;
    char opr;
cout<<"Enter the two numbers=";
cin>>num1>>num2;
cout<<"Enter the operator for your desired operation(+,-,*,/)=";
cin>>opr;
switch(opr){
case '+': cout<<"The addition of two numbers is="<<num1+num2;
break;
case '-': cout<<"The subtraction of two numbers is="<<num1-num2;
break;
case '*': cout<<"The multiplication of two numbers is="<<num1*num2;
break;}
if(opr=='/'){
cout<<" The division of two numbers is="<<num1/num2;
}
}