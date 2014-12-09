#include "interval_map.h"
using interval_map;

interval_map::interval_map()
    : map()
{

}

interval_map::~interval_map()
{

}




void insert(slice_map_t slice_map,
            unsigned int insert_address, unsigned int insert_length);

void insert_within_interval(slice_map_t slice_map,
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

