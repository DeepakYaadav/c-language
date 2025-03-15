#include<stdio.h>
int main()
{
    int victim=0xabcdef23;
    int mask=0xff<<8;
   // mask = mask |(mask<<16); // to clear multiple nibble.

    printf("victim: 0%x\n",victim);
    printf("mask: 0%x\n",mask);
    
    printf("victim: 0%x\n",victim & mask);
    printf("victim: 0%x\n",victim | mask);

    mask =~mask;  // to clear the bit 
    
    printf("victim: 0%x\n",victim & mask);

   
    

    return 0;
}