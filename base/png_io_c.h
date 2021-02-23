#include "png_io.h"
#include "os.h"
// #include "libpng/png.c"
#if defined(IS_MACOSX)
	#include "../cdeps/mac/png.h"
#elif defined(USE_X11)
	#include <png.h>
#elif defined(IS_WINDOWS)
	#if defined (__x86_64__)
		#include "../cdeps/win64/png.h"
	#else
		#include "../cdeps/win32/png.h"
	#endif
#endif

#include <stdio.h> /* fopen() */
#include <stdlib.h> /* malloc/realloc */
#include <assert.h>

#if defined(_MSC_VER)
	#include "ms_stdint.h"
	#include "ms_stdbool.h"
#else
	#include <stdint.h>
	#include <stdbool.h>
#endif

const char *MMPNGReadErrorString(MMIOError error)
{
}

MMBitmapRef newMMBitmapFromPNG(const char *path, MMPNGReadError *err)
{
}

struct _PNGWriteInfo {
	png_struct *png_ptr;
	png_info *info_ptr;
	png_byte **row_pointers;
	size_t row_count;
	bool free_row_pointers;
};

typedef struct _PNGWriteInfo PNGWriteInfo;
typedef PNGWriteInfo *PNGWriteInfoRef;

/* Returns pointer to PNGWriteInfo struct containing data ready to be used with
 * functions such as png_write_png().
 *
 * It is the caller's responsibility to destroy() the returned structure with
 * destroyPNGWriteInfo(). */
static PNGWriteInfoRef createPNGWriteInfo(MMBitmapRef bitmap)
{
}

/* Free memory in use by |info|. */
static void destroyPNGWriteInfo(PNGWriteInfoRef info)
{
}

int saveMMBitmapAsPNG(MMBitmapRef bitmap, const char *path)
{
}

/* Structure to store PNG image bytes. */
struct io_data
{
	uint8_t *buffer; /* Pointer to raw file data. */
	size_t size; /* Number of bytes actually written to buffer. */
	size_t allocedSize; /* Number of bytes allocated for buffer. */
};

/* Called each time libpng attempts to write data in createPNGData(). */
void png_append_data(png_struct *png_ptr,
                     png_byte *new_data,
                     png_size_t length)
{
}

uint8_t *createPNGData(MMBitmapRef bitmap, size_t *len)
{
}
