//esercitazione 2 da consegnare


#include <fstream>
#include <iostream>


int main()
{
	std::ifstream fstr("data.txt");
	
	if(fstr.fail())
	    {
		std::cerr <<"File not found, there is an error"<< std::endl;
		return 1; 
		} 
		
	double val;
	double s;
	double sum=0;
	int counter=0;
	
	while(fstr >> val)
	{
	
	 if(val >= 1.0 & 2.0 >= val)
	 {
		 s = val*(-0.5);
		 
	 }else{
		 s = val*(0.4);
		 
	 }
	 counter++;
	 sum = sum+s;

		
	}
	std::cout<<"sum: " << sum <<std::endl;
	double media;
	std::cout<<"counter (dati totali): " << counter <<std::endl;
	media=sum/counter;
	std::cout<<"media: " << media <<std::endl;
		

		
		
    return 0;
}
