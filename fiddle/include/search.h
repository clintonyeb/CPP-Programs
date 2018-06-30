#include <vector>
#include <string>

namespace fiddle {
    typedef struct Location{
        float longitude;
        float latitude;
    }  Location;

    typedef struct Store{
        Location location;
        std::string name;
        long id;
    } Store;

    struct Search {
        void bestFitStores(Location, std::vector<Store>);
    };
}