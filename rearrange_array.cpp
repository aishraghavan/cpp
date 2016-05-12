//https://www.careercup.com/question?id=5201559730257920
/*
Give you an array which has n integers,it has both positive and negative integers.
Now you need sort this array in a special way.After that,the negative integers should
in the front,and the positive integers should in the back.Also the relative position 
should not be changed. 
eg. -1 1 3 -2 2 ans: -1 -2 1 3 2. 
o(n)time complexity and o(1) space complexity is perfect.
*/

#include <iostream>
#include <cstdio>
#include <stdlib.h>  
using namespace std;

int main() {
	int size=0;
	cout<<"Enter size"<<endl;
	cin >>size;

	if(size<=0){
		return -1;
	}
	int array[size];
	for (int i =0;i<size;i++){
		cin>>array[i];
	}

	for (int i=0;i<size/2;i++){
		int j = size-i-1;
		if ((array[i]>0) &&(array[j]<0)){
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	cout<<"Array rearranging: "<<endl;
	for (int i =0;i<size;i++){
		printf("%d ",array[i]);
	}

	//-1 1 3 -2 2

	return 0;
}