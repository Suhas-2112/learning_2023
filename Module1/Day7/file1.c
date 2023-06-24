/*File Copy: Write a C program to copy a file using file operations

#ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>


int main(){
    FILE* fin, *fout;
    fin = fopen("text.txt","r");
    fout = fopen("write.txt","w+");
    if(NULL == fin){
        printf("FILE not found!\n");
    }
    else{
        size_t maxlen = 100;
        char* ptr = (char*)calloc(maxlen, sizeof(char));
        // ssize_t getline(char **lineptr, size_t *n, FILE *stream);
        while(getline(&ptr,&maxlen,fin) != -1){
            fprintf(fout,"%s",ptr);
        }
        free(ptr);

    }
    fclose(fin);
    fclose(fout);

    return 0;


}
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  const char *ifilename = "text.txt";
  FILE *fin = fopen(ifilename, "rb");
  if (fin == NULL) {
    fprintf(stderr, "Unable to open \"%s\" for reading.\n", ifilename);
    return EXIT_FAILURE;
  }
  const char *ofilename = "write.txt";
  FILE *fout = fopen(ofilename, "wb");
  if (fout == NULL) {
    fprintf(stderr, "Unable to open \"%s\" for writing.\n", ofilename);
    return EXIT_FAILURE;
  }

  unsigned char buf[BUFSIZ];
  size_t n_read;
  while ((n_read = fread(buf, 1, BUFSIZ, fin)) > 0) {
    size_t n_written = fwrite(buf, 1, n_read, fout);
    if (n_written != n_read) {
      fprintf(stderr, "Failed writing to \"%s\".\n", ofilename);
      return EXIT_FAILURE;
    }
  }
  
  fclose(fout);
  if (ferror(fin)) {
    fprintf(stderr, "Failed reading from \"%s\".n", ifilename);
    return EXIT_FAILURE;
  }
  fclose(fin);
  return EXIT_SUCCESS;
}