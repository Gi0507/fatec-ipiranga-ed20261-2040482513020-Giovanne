#include <stdio.h>

int fatorialit(int n){
    int f = 1;
    if(n==0){
        return 1;
    } else {
        int x = 0;
        for(x=n;x>1;x--){
            f = f * x;
        }
        return f;
    }
}

int fatorialRec(int n){
    if(n==0){
        return 1;
    } else {
        return fatorialRec(n-1) * n;
        
    }
}
int fibonat(int n){
    
    if(n==0) return 0;
    else if(n<1){
        return 1;
    }else{
        return fibonat(n-1)+fibonat(n-2);
        
    }
}

int main()
{
    printf("%i", fibonat(7));

    return 0;
}
