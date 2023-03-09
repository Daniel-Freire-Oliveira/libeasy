#include "./lib.h"
static intptr write(int fd, void const* data, uintptr nbytes){
    return (uintptr)
        syscall3(
            SYS_write,
            (void*)(intptr)fd,
            (void*)data,
            (void*)nbytes
        );
}
static uintptr strlen(char const* str){
    char const* p;
    for(p = str; *p;++p);
    return p - str;
}
void print(const char* str){
    write(stdout,str,strlen(str));
}
static uintptr read(int fd,char* data, uintptr bytes){
    return (uintptr)syscall3(
        SYS_read,
        (void*)(intptr)fd,
        data,
        (void*) bytes
    );
};