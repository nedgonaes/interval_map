#include "interval_map.h"
using interval_map;

interval_map::interval_map()
    : map()
{

}

interval_map::~interval_map()
{

}

void insert(unsigned int insert_address, unsigned int insert_length);

void insert_contained(
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

void insert_end(
    unsigned int block_start_address,
    unsigned int block_length, // not needed
    unsigned int insert_address
    unsigned int insert_length // not needed
    );

void insert_front(
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

void insert_eof(
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

void insert_overwrite_interval(
    unsigned int block_start_address,
    unsigned int block_length,
    unsigned int insert_address,
    unsigned int insert_length);

void insert_interval(
    unsigned int insert_address,
    unsigned int insert_length
    );
