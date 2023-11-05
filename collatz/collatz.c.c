#include <stdio.h>
#include <stdlib.h>

long long  collatz(long long N) {
    long long mikos = 1;
    while (N!=1) {
        if (N % 2 == 0) {
            N/=2;
        } else {
            N=3*N+1;
        }
        mikos++;
    }
    return mikos;
}

int main(int argc, char *argv[]) {
    
    long long orio_1 = atoll(argv[1]);
    long long orio_2 = atoll(argv[2]);

    if (orio_1<= 0 || orio_2<= 0) {
        printf("0\n");
        return 0;
    }

    if (orio_1>= orio_2) 
        return 1;
    
    long long max_mikos=-1;
    long long max_num=-1;

    for (long long i=orio_1; i<=orio_2; i++) {
        long long mikos=collatz(i);
        if (mikos>max_mikos) {
            max_mikos=mikos;
            max_num=i;
        }
    }

    printf("%lld\n", max_mikos);

    return 0;
}

