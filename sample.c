#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    struct stat fileStat;
    // Use stat to get file information
    if (stat(argv[1], &fileStat) == -1) {
        perror("Error getting file stats");
        return -1;
    }

    // Print the file size in bytes
    printf("File size: %ld bytes\n", fileStat.st_size);
    return 0;
}





   











