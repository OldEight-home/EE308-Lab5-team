#include <bits/stdc++.h>
using namespace std;
bool G34(){
	srand((int)time(0));
	int num1=(rand()%10000)+1;
	int num2=(rand()%10000)+1;//0到10000随机数 
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
		result=(double)num1/num2;//假设123.1234
		int result3rd=(int)(result*1000)%1000; //取出小数点后三位 123
		int result2nd=(int)(result*100)%100;//取出小数点后两位 12
		int resultz=(int)result%100000;//整数部分  123
		int xshu3=result3rd%10;//小数第三位 
		if(xshu3<=4){
			result=(double)result2nd/100+resultz;
		}else if(xshu3>=5){
			result=(double)(result2nd+1)/100+resultz;
		}
		cout<<num1<<"÷"<<num2<<"=?"<<endl;
		cout<<result<<endl;
	}
	double input;
	cin>>input;
	if(input==result){
		return true;
	}else{
		return false;
	}
}

