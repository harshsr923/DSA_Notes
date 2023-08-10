// Remember
// A year is a leap year if the following conditions are satisfied: 
// 1. The year is multiple of 400.
// 2. The year is multiple of 4 and not multiple of 100.

int isLeap(int N)
{    
    if (N%4==0 && N%100!=0)
        return 1;
    else if (N%400==0)
        return 1;

    return 0;
}