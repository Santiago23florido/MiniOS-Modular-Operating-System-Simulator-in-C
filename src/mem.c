#include "../include/mem.h"
#include <stdio.h>


struct Allocator HeapAllocator = {
    .end = ((char*)mem) + sizeof(mem)
};

void* memalloc(size_t size){
    void* memr;
    if(HeapAllocator.end-size>((char*)mem)){
        void* memr = HeapAllocator.end-size;
    }else{
        printf("Not enough space in the Heap");
    }
};