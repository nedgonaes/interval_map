#ifndef interval_map_h_
#define interval_map_h_
#include <stdint.h>
#include <map>

class block_location
{
    public:
    block_location()
        : sid(0)
          , bid(0) {}

    ~block_location() {};

    public:
    uint64_t sid;
    uint64_t bid;
};

class slice
{
    public:
    slice()
        : location()
          , offset() {}

    ~slice() {};

    public:
    block_location location;
    unsigned int offset;
};



class interval_map
{
    public:
        interval_map();
        ~interval_map();

    private:
        interval_map(const interval_map&);

    private:
        typedef std::map<unsigned int, slice> slice_map_t;
        interval_map& operator = (const interval_map&);

    private:
        slice_map_t map;

    public:
        void insert(slice_map_t slice_map,
            unsigned int address, unsigned int length);
};

#endif //interval_map_h_
