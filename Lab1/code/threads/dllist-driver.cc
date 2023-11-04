
#include "dllist.h"


void InsertList(int N, DLList *list)
{
    for (int i = 0; i < N; i++)
    {
        void *item;
        int mseed=Random()%50,key;
        if((int(currentThread->getName()[14])%2)) key=2*mseed+1;
        else key=2*mseed;
        int *items=new int[1];
        items[0]=key;
        item=items;
        printf("%s in:%d %d\n",currentThread->getName(),key,*(int*)item);
        //currentThread->Yield();
        list->SortedInsert(item,key);
        //currentThread->Yield();
    }
}

void RemoveList(int N, DLList *list)
{
    for (int i = 0; i < N; i++)
    {
        int key;
        void *item;
        item=list->Remove(&key);
        printf("%s out:%d %d\n",currentThread->getName(),key,*(int*)item);
        //currentThread->Yield();
    }
}

