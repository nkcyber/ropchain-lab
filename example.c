#include <string.h>
#include <unistd.h>
#include <stdio.h>

void win() {
	puts("you won! here's the flag:");
	char *args[] = {"cat", "flag.txt", NULL};
	execve("/bin/cat", args, NULL);
}

void bof(char* input) {
	char buffer[64];
	strcpy(buffer, input);
}

int main(int argc, char** argv) {
	puts("welcome!");
	bof(argv[1]);
}
