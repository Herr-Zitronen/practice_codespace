#include <iostream>
namespace ja
{
    int jaja=0;
}
namespace jo{
    int jaja=99;

}

typedef std::string st_t;

int main()
{
    using namespace jo;
    int x=7;
    int y=-3;
    int sum=x-y;
    const int AR=10;
    int arq = AR*y;
    st_t ha="ha word";
    std::cout << ha << '\n' << jaja << '\n' << sum << '\n';
    std::cout << arq;
}
