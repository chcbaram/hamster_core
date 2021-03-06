#ifndef DEF_H
#define DEF_H


#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>



typedef struct
{
  uint32_t  ptr_in;
  uint32_t  ptr_out;
  uint32_t  length;
  uint8_t  *p_buf;
} ring_buf_t;



typedef uint16_t err_code_t;

#define UNUSED(x)       (void)(x)

#define OK              0
#define NOK             1

#define _DEF_UART1      0
#define _DEF_UART2      1
#define _DEF_UART3      2

#define _DEF_TAG_SIZE   512

#define _DEF_ARG_CNT    7
#define _DEF_ARG_PORT   1
#define _DEF_ARG_BAUD   2
#define _DEF_ARG_ADDR   3
#define _DEF_ARG_FILE   4
#define _DEF_ARG_VERI   5
#define _DEF_ARG_RUN    6

#define _TAG_ARG_CNT        4
#define _TAG_ARG_FW_ADDR    1
#define _TAG_ARG_SRC_FILE   2
#define _TAG_ARG_DST_FILE   3




#define ERRCODE_TIMEOUT       (uint16_t)0xF255
#define ERRCODE_NOMATCH_CMD   (uint16_t)0xF256


#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))



#endif // DEF_H
