#include <iostream>
#include <cstdio>
#include <stdlib.h>  
using namespace std;

/*void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
} 
*/


void update(int *a,int *b) {
    // Complete this function    
    *a = (*a)+(*b);
    *b = abs((*a)-(2*(*b)));


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
