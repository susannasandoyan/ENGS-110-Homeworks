#include <iostream>
#include <math.h>
int main(void)
{
	float a,b,x,c,D,x1,x2;
	std::cout<<"a=";
	std::cin>>a;
	if (std::cin.fail()){
		std::cout<<"Inserted symbol is not a number"<<std::endl;
		return EXIT_FAILURE;
	}
	std::cout<<std::endl<<"b=";
	std::cin>>b;
	if (std::cin.fail()){
		std::cout<<"Inserted symbol is not a number"<<std::endl;
		return EXIT_FAILURE;
	}
	x=-b/a;
	std::cout<<"x="<<x<<std::endl;
	std::cout<<"c=";
	std::cin>>c;
	if (std::cin.fail()){
		std::cout<<"Inserted symbol is not a number"<<std::endl;
		return EXIT_FAILURE;
	}
	D=pow(b,2)-4*a*c;
	if (D>=0){
		x1=(-b+pow(D,1/2))/(2*a);
		x2=(-b-pow(D,1/2))/(2*a);
		std::cout<<"x1="<<x1<<std::endl;
		std::cout<<"x2="<<x2<<std::endl;
	}
	else {
		std::cout<<"No solution";
	}
}
