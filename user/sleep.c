#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int i;
  
  if(argc < 2){
    fprintf(2, "Usage: input seconds...\n");
    exit();
  }

  if(argc > 2){
    fprintf(2, "Error: too many arguments...\n");
    exit();
  }

  i = atoi(argv[1]);
  fprintf(1, "...\n");
  sleep(i);

//   for(i = 1; i < argc; i++){
//     write(1, argv[i], strlen(argv[i]));
//     if(i + 1 < argc){
//       write(1, " ", 1);
//     } else {
//       write(1, "\n", 1);
//     }
//   }
  exit();
}