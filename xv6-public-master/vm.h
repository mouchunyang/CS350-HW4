
#include "spinlock.h"


#define page_num    (PHYSTOP/PGSIZE)
typedef struct counter_struct_def_{
  char counter[page_num];
  struct spinlock counter_lock;
}counter_struct_def;
extern counter_struct_def counter_struct;