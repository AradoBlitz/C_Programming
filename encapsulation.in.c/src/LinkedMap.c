#include "Map"

struct kvmap {
 unsigned size, count;
 kvmap_entry__t *entries
 void *userdata;
};

void * kvmap_get(kvmap *map,void *key){
	
}