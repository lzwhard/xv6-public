#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "welcome lzw to os world!\n");
  printf(1, "unix release: %d!\n", getyear());

  printf(1, "curproc pid: %d\n", cps());

  //exit();
}
