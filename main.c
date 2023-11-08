#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
  char *out = "HELLO\n";
  write(1, out, 6);
  exit(0);
}
