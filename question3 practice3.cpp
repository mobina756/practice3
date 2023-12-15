#include <iostream>
using namespace std; 
int findgcd(int num1,int num2) { 
while (num1!=num2) {
	if(num1>num2) { 
	num1-=num2;
	} else{ 
	num2-=num1;
	} 
} 
return num1;
} 
int main() { 
int num1,num2;
cout<<"enter the first number:";
cin>>num1; 
cout<<"enter the secound number:";
cin>>num2;
int gcd=findgcd(num1,num2) ;
cout<<"the greatest common divisor of" <<num1<<"and"<<num2<<"is:"<<gcd<<endl;
return 0;
}