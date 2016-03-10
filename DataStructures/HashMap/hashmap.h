#ifndef _HASH_MAP_H_
#define _HASH_MAP_H_

#include "list.h"

#define PRIME 27

void add(List **hashmap, int key, int value);
int obtain(List **hashmap, int key);

#endif /* _HASH_MAP_H_ */
