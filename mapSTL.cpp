#include <map>
#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char **argv)
{
        std::map<std::string, int> m;
        m["hello"] = 23;
        // check if key is present
        if (m.find("world") != m.end())
            std::cout << "map contains key world!\n";
        // retrieve
        std::cout << m["hello"] << '\n';
        std::map<std::string, int>::iterator i = m.find("hello");
        cout << typeid(m.end()).name() <<endl;
        assert(i != m.end());
        std::cout << "Key: " << i->first << " Value: " << i->second << '\n';
        return 0;
}