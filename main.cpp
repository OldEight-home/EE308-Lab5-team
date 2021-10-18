#include <iostream>
#include <cstdlib>
#include <ctime> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

	bool G12(){
	srand((unsigned) time(0));
	int a = rand()%100+1,b = rand()%100+1,c = rand()%2;
	if(c==0){
		cout<<a<<" + "<<b<<" = ?"<<endl;
		int num = 0;
		cin>>num;
		if(num==a+b){
			return true;
		}else{
			return false;
		}
		
	}else{
		cout<<a<<" - "<<b<<" = ?"<<endl;
		int num = 0;
		cin>>num;
		if(num==a-b){
			return true;
		}else{
			return false;
		}
	}
	
}



