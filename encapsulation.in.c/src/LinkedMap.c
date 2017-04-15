#include "Map"

typedef struct {
 unsigned size, count;
 kvmap_entry__t *entries
 void *userdata;
} kvmap_internal_t;

void * kvmap_get(kvmap_t *map,void *key){
	kvmap_internal_t *pmap = (kvmap_internal_t *)map;
}