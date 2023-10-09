#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv){
    int fd;
    char c;
    int rd;
    size_t nbytes;
    for(int i = 1; i <argc; i++){
        if( (fd = open(argv[i], O_RDONLY) )>0){
            while ((rd = read(fd, &c, 1))){
                    write(1, &c, rd);
            }
         
        }
    }
   
    return 0;
}
