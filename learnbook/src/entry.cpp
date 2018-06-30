#include <string>
#include <iostream>

typedef struct entry
{
    std::string name;
    int age;
} Entry;

inline std::ostream& operator<<(std::ostream& os, const Entry& e){
    return os << "{ " << e.name << ", " << e.age << " }" << std::endl; 
}

inline std::istream& operator>>(std::istream& is, Entry& e){
     std::cout << "Enter: { \"name\" , age }" << std::endl;
     char c, cc;
     if(is >> c && c == '{' && is >> cc && cc == '"') { // started with { "
        std::string name;
        
        while(is.get(c) && c != '"'){
            name += c;
        }

        if(is >> c && c == ','){ // started ,
            int age;
            //is >> c; // read space
            if(is >> age >> c && c == '}'){
                e = {name, age};
                return is;
            }
        }
        
     }
     is.setstate(std::ios_base::failbit);
     return is;
}



int main(int argc, char const *argv[])
{
    Entry e {"clinton", 23};
    std::cout << e;

    Entry f;
    std::cin >> f;
    std::cout << f;
    return 0;
}
