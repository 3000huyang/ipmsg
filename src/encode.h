#include <unistd.h>

extern int code_convert(char *to_charset, char *from_charset,
                 char *inbuf, size_t inlen, char *outbuf, size_t outlen);
extern int u2g(char *inbuf, size_t inlen, char *outbuf, size_t outlen);
extern int g2u(char *inbuf, size_t inlen, char *outbuf, size_t outlen);
