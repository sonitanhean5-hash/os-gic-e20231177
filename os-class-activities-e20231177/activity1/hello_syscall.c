#include <unistd.h>
#include <string.h>
int main() { const char *m = "Hello, System Call!\n"; write(1, m, strlen(m)); return 0; }
