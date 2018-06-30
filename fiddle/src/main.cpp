#include <iostream>
#include <vector>
#include "search.h"

int main()
{
    fiddle::Search search;
    fiddle::Location loc;
    loc.longitude = 4;
    fiddle::Store store;
    std::vector<fiddle::Store> stores {store};
    search.bestFitStores(loc, stores);
    return 0;
}
