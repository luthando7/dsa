#define CDA_TRUE (1)
#define CDA_FALSE (0)

#define CDA_ASSERT(exp) (assert((exp)))
#define CDA_CARD(arr) (sizeof((arr)) / sizeof(*(arr)))
#define CDA_NEW(type) ((type *)CDA_malloc(sizeof(type)))
#define CDA_NEW_STR(str) (strcpy((char *)CDA_malloc(strlen((str)) + 1), (str)))
#define CDA_NEW_STR_IF(str) ((str) == NULL ? NULL : CDA_NEW_STR((str)))

typedef int CDA_BOOL_t;
typedef signed char CDA_INT8_t;
typedef unsigned char CDA_UINT8_t;