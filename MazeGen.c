#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#define DEFAULT_MAZEH 20
#define DEFAULT_MAZEW 20

/* Mazes are intended to be squares. */
int main() {
   /* will replace with args and if/else statement */
   int hi = DEFAULT_MAZEH;
   int wi = DEFAULT_MAZEW;
   int grid[hi][wi];
   int m, n, a, b, c;
   srand(time(NULL));
   /* zero out borders */
   for(c = 0; c < (hi); c+=1){
     grid[c][0] = 0;
     grid[c][(wi-1)] = 0;
   }
   for(c = 0; c < (wi); c+=1){
     grid[hi-1][c] = 0;
     grid[0][c] = 0;
   }
   /* populate the core */
   m = 1;
   while(m < (hi-1)) {
     for(n = 1; n < (wi-1); n+=1) {
            int open = rand() % 2;
            grid[m][n] = open;
            /*nanosleep((struct timespec[]){{0, 500}}, NULL);*/
      }
      m+=1;
  }
  /*** start generating the maze ***/
  
  /* print the grid */
  for(a = 0; a < hi; a+=1) {
    for(b = 0; b < wi; b+=1) {
      printf("[%d]", grid[a][b]);
    }
    printf("\n");
  }
  return(0);
}
