// ossanew2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid = fork(); // Create a child process

    if (pid < 0) {
        fprintf(stderr, "Fork failed.\n");
        return 1;
    }
    else if (pid == 0) {
        // This is the child process
        printf("Child process is executing.\n");
    }
    else {
        // This is the parent process
        printf("Parent process is executing.\n");

        // Print even numbers less than 100
        for (int i = 0; i < 100; i += 2) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
