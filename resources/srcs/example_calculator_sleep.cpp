// LIVE DEMO WEB   https://www.onlinegdb.com/online_c_compiler
// LIVE DEMO WIN   g++ example_calculator_sleep.cpp -o example_calculator_sleep  && ./example_calculator_sleep.exe
// LIVE DEMO LINUX g++ example_calculator_sleep.cpp -o example_calculator_sleep  && ./example_calculator_sleep

#include <stdio.h>
#include <unistd.h>

int main()
{
    int a,b;
    
    a = 50;
    b = a + 350;
    printf("%d\n",b);

    // IGNORE THIS
    //import time NOT EXISTS IN C, USE unistd.h
    sleep(5);
    printf("Bye bye ...\n");
    
    return 0;
}

