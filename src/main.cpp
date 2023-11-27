#include <signal.h>
#include <cstdio>
#include<iostream>

void SigInt_Handler(int n_signal){
    printf("interrupted with code %u\n", n_signal); //Ctrl+C
    (1);
}

int main(int argc, char *argv[])
{
    signal(SIGINT, &SigInt_Handler);
    printf("Hello world");
    return 0;
}
