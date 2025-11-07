/**
 * @file mem.h
 * @brief Memory management subsystem for MiniOS.
 *
 * This module provides a simple heap manager for MiniOS, allowing
 * dynamic memory allocation and release. It simulates low-level
 * heap behavior similar to malloc/free in a controlled environment.
 *
 * @author Santiago Florido
 * @date 2025
 */

#ifndef MEM_H
#define MEM_H
#include <stddef.h>  // For size_t


static char mem[16*1024]; //HEAP declaration

struct Allocator{                  //Heap allocator
    char* end;
};

void* memalloc(size_t size);

#endif /* MEM_H */
