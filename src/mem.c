#include "../include/mem.h"


struct Allocator HeapAllocator = {
    .end = ((char*)mem) + sizeof(mem)
};
