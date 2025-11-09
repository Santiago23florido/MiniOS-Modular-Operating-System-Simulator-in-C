#include <sys/mman.h>
#include <unistd.h>
#include "../include/threads.h"

void protect_stacks(){
    for(int i = 0;i<THREADLIMIT;i++){
        mprotect(stacks[i], STACK_SIZE, PROT_NONE);      
    }
    mprotect(stacks[THREADLIMIT], STACK_SIZE, PROT_READ | PROT_WRITE);
};