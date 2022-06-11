#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"rdcore.h"



int main()
{
    srand((unsigned)time(NULL));
    struct _Seats seats;
    int pernum=56;
    initSeat(&seats, pernum, 1);
    rmSeat(&seats,rand()%56);
    printf("检查下我有没有算错：\n你们班有[%d/%d]人，应该是:\n",seats.numAvail,seats.pernum);
    for (int i = 0; i < seats.pernum; i++)
    {
        printf("%d\t",seats.stlist[i]);
    }
    puts("\n");
    printf("你们要抽的是:%d\n",seats.stlist[55]);
    for (int i = 0; i < seats.numAvail; i++)
    {
        printf("%d\t",seats.stlist[i]);
    }
    puts("\n");
    return 0;
}