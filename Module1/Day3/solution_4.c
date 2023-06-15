/*Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators*/

#include <stdio.h>

// program to calculate maximum of two number
long long max(long long x, long long y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
long long maxl(long long n){
    for(long long j = 0;j<1;j++){
        long long ans = 0;
        long long i = 1;
        while((n/i) > 0){
            long long temp = (n / (i*10))*i + (n%i);
            i*=10;
            ans = max(ans,temp);
        }
        n = ans;
    }
    return n;
}
long long main(){
	long long n,e;
    printf("Enter the 4 digit number : ");
    scanf("%lld",&n);
     e = maxl(n);
     printf("%lld",e);
     return 0;
}   
