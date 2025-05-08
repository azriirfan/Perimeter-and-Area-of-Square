#include <iostream>
using namespace std;

main()
{
	// variable declaration
	float length, width, perimeter, area ;
	int i;
	
	for( i=1; i < 4; i = i + 1)
	{
	
	// read data
	cout<<"key in value for length ==> ";
	cin>>length;
	cout<<"key in value for width ==> ";
	cin>>width;
	
	//process
	perimeter = 2 * (length + width);
	area = length * width;
	
	//display output
	
	cout<<" perimeter = " <<perimeter <<endl;
	cout<<" area = " <<area <<endl;
    }
    
    cout<<"end process";
}

