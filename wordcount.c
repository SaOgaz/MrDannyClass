#include <stdio.h>

#define IN 1     /* inside a word */
#define OUT 0    /* outside a word */

/* count line, words, and character in input
   also output each word, newline after word*/

main(){
  int c, n1, nw, nc, state;

  state = OUT;
  n1 = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++n1;
    if (c == ' ' || c == '\n' || c == '\t'){
      putchar('\n');
      state = OUT;
    }
    else if (state == OUT) {
      putchar(c);
      state = IN;
      ++nw;
    }
    else
      putchar(c);
  }
  printf("%d %d %d\n", n1, nw, nc);
}
