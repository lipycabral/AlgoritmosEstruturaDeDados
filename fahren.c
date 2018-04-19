#include <stdio.h>

#define MIN 32
#define MAX 50
int main(){
    long double celsius;
    for(int fahren = MIN ; fahren <= MAX ; fahren++){
        celsius = (fahren -32) / 1.8;
        printf("%5d %.2Lf\n", fahren, celsius);
    }
return 0;
}
