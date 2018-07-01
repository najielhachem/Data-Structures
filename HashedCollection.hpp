
#include "Collection.hpp"
#include "LinkedList.hpp"

class HashedCollection : public Collection {
    LinkedList E[10];
    int hash(float f);

public:
    void add(float value);
    void removeFirst(float value);
    bool find(float value);
    unsigned int size();
};
