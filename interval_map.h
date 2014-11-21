#ifndef interval_map_h_
#define interval_map_h_
#include <map>

class interval_map
{
    class slice;

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
