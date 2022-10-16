#include<iostream>
using namespace std;

int main()
{
	bool arr[100];
	bool flag;
	
       // marking all the elements of array as true
       // initial assumption that all numbers are prime
	for(int i=0;i<100;i++)
		arr[i] = true;
	
		
	cout << "\n Prime Numbers from 1 to 100 are : \n";
		
	// implementation of Sieve of Eratosthenes algorithm
	
	for(int i=2;i<100;i++)
	{
		for(int j=i*i;j<100;j+=i)
		{
                      // condition true only if number is not prime
			arr[j-1] = false;
		}
	}
	
	for(int i=2;i<100;i++)
	{
		if(arr[i-1] == true)
			cout << "  " << i << "  ";
	}
	
	cout<<"\n";
	return 0;
}