#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <assert.h>
#include <unistd.h>
#include <sys/mman.h>
#include "../include/mem.h"
#include "../include/fs.h"

int main(){
    meminit();
    const char *path = "tp1fs.romfs";
    fs_mount(path);
    return 0;
}
