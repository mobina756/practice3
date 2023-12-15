#include <iostream> 
#include <cmath>
void calculateroots (double a,double b,double c) { 
double discriminant= b*b-4*a*c;
if (discriminant>0 ) { 
double root1=(-b+ sqrt(discriminant)) /
(2* a) ; 
double root2=(-b-sqrt(discriminant)) / 
(2*a) ; 
std::cout<<"root 1:"<< root1 <<
std::endl; 
std::cout<<"root 2:"<< root2<< 
std::endl;
} else if(discriminant==0) { 
double root= -b / (2*a) ;
std::cout<<"root:"<<root<< std::endl;
} else{ 
double realpart=-b/(2*a) ; 
double imaginarypart= 
sqrt(-discriminant) / (2*a) ; 
std::cout<<"root 1:" <<realpart<<"+"<< imaginarypart<<"i"<<std::endl; 
std::cout<<"root 2:" <<realpart<<"-"<< imaginarypart<<"i"<<std::endl; 
}
} 
int main() { 
double a,b,c; 
std::cout<<"enter the cofficients of the quadratic equation(ax^2+bx+c):"<<std::endl; 
std::cin>>a>>b>>c;
calculateroots(a,b,c); 
return 0;
} 