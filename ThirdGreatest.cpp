#include<iostream>
#include<cstdio>
#include <climits>
using namespace std;
/*
 * Complete the function below.
 */


int ThirdLargest(std::vector < int > arr) {
    vector<int>::size_type sz = arr.size();
    int max_1, max_2, max_3;
    max_1 = max_2 = max_3= INT_MIN;
    for (unsigned i=0; i<sz/2; i++)
  {
        if (arr[i]>max_1){
            max_3 = max_2;
            max_2= max_1;
            max_1 = arr[i];
        }else if (arr[i]>max_2){
            max_3 = max_2;
            max_2= arr[i];
        }else if (arr[i]>max_3){
            max_3= arr[i];
        }
  }
return max_3;
}
