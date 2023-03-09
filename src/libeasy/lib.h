#ifndef _LIB_EASY_
#define _LIB_EASY_
    #define stdout 1
    #define SYS_read 0
    #define SYS_write 1
    #define SYS_exit  60
    typedef unsigned long int uintptr;
    typedef long int intptr;

    /**Syscalls**/
    void* syscall1(uintptr number,void* arg1);
    void* syscall2(uintptr number,void* arg1,void* arg2);
    void* syscall3(uintptr number, void *arg1, void *arg2, void *arg3);
    void* syscall4(uintptr number, void *arg1, void *arg2, void *arg3,void* arg4);
    void* syscall5(uintptr number, void *arg1, void *arg2, void *arg3,void* arg4,void* arg5);

    void main(int argc, char const* argv[]);
    static uintptr strlen(char const* str);
    static intptr write(int fd, void const* data, uintptr bytes);
    static uintptr read(int fd,char* data, uintptr bytes);
    void print(const char* str);



#endif