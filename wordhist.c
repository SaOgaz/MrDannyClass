#include <stdio.h>

#define IN 1     /* inside a word */
#define OUT 0    /* outside a word */

/* count word lengths and print histogram of lengths */

main(){
  int state,c,i,j;
  int maxlen=0,wordlen=0,maxh=0;
  int lcount[30];

  for (i = 0; i < 30; ++i)
    lcount[i] = 0;

  state = OUT;

  /*read input, keep count of word length */
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
      /*if last character was end of word, record lenght*/
      if (wordlen > 0)
	++lcount[wordlen];
      /*check if length was longer than previous max*/
      if (wordlen > maxlen)
	maxlen = wordlen;
      /*reset wordlen to zero*/
      wordlen = 0;
    }
    else if (state == OUT){
      state = IN;
      ++wordlen;
    }
    else
      ++wordlen;
  }

  /*get max height of histogram*/
  for (i = 1; i <= maxlen; ++i){
    if (lcount[i] > maxh)
      maxh = lcount[i];
  }
  
  /*print out histogram*/
  for (j = 1; j <= maxh; ++j){
    /*print loop until last line*/
    for (i = 1; i < maxlen; ++i){
      if (lcount[i] <= j)
	printf("l");
      else
	printf(" ");
    }
    /*print for last char, which needs a newline*/
    if (lcount[maxlen] <= j)
      printf("l\n");
    else
      printf(" \n");
  }
}
