#include <iostream>
#include <cstdio>
#include <stdlib.h>  
using namespace std;

int main() {
	int no,i;
	cin>>no;
	int a[no];
	for(int i=0;i<no;i++){
		cin>>a[i];
	}
	cout<<"array values" <<endl;

	for (int i=0;i<no/2;i++)
	{
		int j = no-i-1;
		int temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(int i=0;i<no;i++){
		cout<<a[i]<<"\t";
	}
	return 0;
}