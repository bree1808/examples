#include <stdio.h>

int main()
{
    int counter = 0;
    int aThreeHappened = 0;
    while(counter < 1000)
    {
        a = 1 + rand() % 6;
        b = 1 + rand() % 6;
        
        if (a == 3 || b == 3)
        {
            aThreeHappened = aThreeHappened + 1;
        }
    
        counter = counter + 1;
    }
    answer = aThreehappened / counter;
printf("answer = %d\n", answer);
}