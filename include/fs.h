#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <assert.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stddef.h>
#include <string.h>

void * orig;
void * offsetinicial; 

struct fsheader {
    const char magic[8];
    const uint32_t full_size;
    const uint32_t checksum;
    const char volumename;
};

struct fileheader{
    const uint32_t nextfilehdr;
    const char specinfo[4];
    const uint32_t filesize;
    const uint32_t checksum;
    const char filename;
};

void decode(struct fsheader *p,size_t size);

void ls(struct fileheader *p,void* origin);

void fs_mount(const char *path);

struct fileheader* find(struct fileheader *p, void* origin, char* buscado);