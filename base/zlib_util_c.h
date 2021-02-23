#include "zlib_util.h"
//#include <zlib.h>
#include <stdio.h> /* fprintf() */
#include <stdlib.h> /* malloc() */
#include <assert.h>

#define ZLIB_CHUNK (16 * 1024)

uint8_t *zlib_decompress(const uint8_t *buf, size_t *len){
}

uint8_t *zlib_compress(const uint8_t *buf, const size_t buflen, int level,
                       size_t *len)
{
}
