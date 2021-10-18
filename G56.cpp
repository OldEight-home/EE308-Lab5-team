#include <bits/stdc++.h>
using namespace std;
bool G56(){
	srand((int)time(0));
	double num1z=(rand()%10000)+1;
	double num2z=(rand()%10000)+1;
	double num1x=(double)(rand()%100)/100;
	double num2x=(double)(rand()%100)/100;
	double num1=num1z+num1x;
	double num2=num2z+num2x;
	int symbol=rand()%4;// 0代表+，1代表-，2代表*，3代表/ 
	double result;
	if(symbol==0){
		result=num1+num2;
		cout<<num1<<"+"<<num2<<"=?"<<endl;
	}else if(symbol==1){
		result=num1-num2;
		cout<<num1<<"-"<<num2<<"=?"<<endl;
	}else if(symbol==2){
		result=num1*num2;
		cout<<num1<<"×"<<num2<<"=?"<<endl;
	}else{
		result=num1/num2; 
		cout<<num1<<"÷"<<num2<<"=?"<<endl;
	}
	double input;
	cin>>input;
	if(input==result){
		return true;
	}else{
		return false;
	}
}
