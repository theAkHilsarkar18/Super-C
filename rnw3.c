// find a gross sellary

#include<stdio.h>
int main()
{
    int sellary = 1000;
    float gst,bonus,penalty;

    int gross;

    gst = (sellary*8)/100;
    bonus = (sellary*10)/100;
    penalty=(sellary*5)/100;

    gross = sellary+gst+bonus+penalty;

    printf("gross sellary is : %d",gross);
}