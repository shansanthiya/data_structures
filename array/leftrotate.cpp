#include <iostream>

using namespace std;

int gcd ( int a , int b)
{

	if(b == 0 ) return a;
	else
		return gcd( b, a%b);
}

void leftrotate(int arr[], int d, int n)
{
	for(int i = 0; i < gcd(d,n) ;i++)
	{
		int temp = arr[i];
		int j = i;
		
		while(1)
		{
			int k = j+d;
			if(k >= n)
				k = k-n;
			if( k == i) break;

			arr[j] = arr[k];
			j = k;
		}	
		arr[j] = temp;

	}

}

void printArray(int arr[], int size) 
{ 
        for (int i = 0; i < size; i++) 
        	cout << arr[i] << " "; 
} 

int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	  
	    // Function calling 
	leftrotate(arr, 2, n); 
	printArray(arr, n); 
	cout << "\n";
  
        return 0; 
} 

