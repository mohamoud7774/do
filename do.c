#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    do
    {
        // TODO: Prompt for start size
        start = get_int("starting population size: ");
        
    }

    while (start < 9);

    int end;
    do
    {
        // TODO: Prompt for end size
        end = get_int("ending populatio size: ");

    }

    while (start >= end);
  
    // TODO: Calculate number of years until we reach threshold
    int years;
    for( years = 0; start < end; years++)
    
    {
      int n = 0; 
      int d = 0;
      n = start / 3;
      d = start / 4;
      start = start + n - d;
    }

  
    //print the result
    printf("years: %i", years); 
    
    
