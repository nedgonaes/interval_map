#include "interval_map.h"
using interval_map;

interval_map :: interval_map()
    : map()
{

}

interval_map :: ~interval_map()
{

}




void 
interval_map :: insert(unsigned int insert_address, unsigned int insert_length)
{
        
    //case 1: wholely contained within a larger block
    //case 2: overlaps right of another block
    //case 3: overlaps left of another block
    //case 4: new block at end, no overlap
    //case 5: exactly same size as existing block
    //case 6: larger than a whole block (combo of 2, 3 and 5)
}

void 
interval_map :: insert_contained(
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

void 
interval_map :: insert_end(
    unsigned int block_start_address,
    unsigned int block_length, // not needed
    unsigned int insert_address
    unsigned int insert_length // not needed
    );

void 
interval_map :: insert_front(
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

void 
interval_map :: insert_eof(
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

void 
interval_map :: insert_overwrite_interval(
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

void 
interval_map :: insert_interval(
    unsigned int insert_address,
    unsigned int insert_length
    );
