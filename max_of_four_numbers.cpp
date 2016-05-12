#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max = 0;
    int array[4];
    array[0]=a;
    array[1]=b;
    array[2]=c;
    array[3]=d;
    for (int i =0;i<4;i++){
        if(array[i]>max){
            max= array[i];
        }        
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

