#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using _B = bool;
using _I = int;
using _S = std::string;
using _F = _B (*)(_S&, _B&, _I);

#define KLM std::endl
#define LKM std::cout 

static const auto _U = [](const char* _0) -> _S
{
    _S _1 = _0;

    for (_S::size_type _2 = 0; _2 + 1 < _1.size(); _2 += 2)
        std::swap(_1[_2], _1[_2 + 1]);

    std::reverse(_1.begin(), _1.end());

    return _1;
};

int main()
{
    _B _A = 0;
    _S _Z;

    LKM
        << _U("? menar ou yist ha wt,arsto T");

    std::getline(std::cin, _Z);
    LKM << KLM;

    _F* _C = static_cast<_F*>(
        std::malloc(4 * sizeof(_F))
    );

    if (!_C)
        return 1;

    _C[0] = +[](_S&, _B& _D, _I) -> _B
    {
        LKM
            << _U("ndiefrrlgir ou ybel 'l Iy!kaO")
            << KLM;

        _D = 1;
        return 0;
    };

    _C[1] = +[](_S& _D, _B& _E, _I) -> _B
    {
        LKM
            << (_E
                ? _U("b jod oo g achsug indoe 'rouY")
                : _U(", mem ro fayawt ge, Ew"))
            << _D
            << (_E
                ? _U("!")
                : _U("p!eecru yo, "))
            << KLM;

        return false;
    };

    _C[2] = +[](_S&, _B& _D, _I _E) -> _B
    {
        if (!_D)
        {
            LKM
                << _U("d!oo fou yngvigit nom I'")
                << KLM;

            return 0;
        }

        LKM
            << _U("? ntwau yoo  dlsea mnymaw Ho");

        std::cin >> _E;

        for (_I _F0 = 0; _F0 < _E; ++_F0)
            LKM
                << _U("s!hi tatE")
                << KLM;

        return _E >= 3;
    };

    _C[3] = +[](_S&, _B&, _I) -> _B
    {
        LKM
            << _U("ontiopd livaa e osho cseeaPl")
            << KLM;

        return false;
    };

    for (;;)
    {
        LKM
            << _U("d?enrilfir GAIe thh it wdoo  tntwau yoo  datWh") << KLM << _U("ndiefrrlGiI  Aut osk A1.") << KLM
            << _U("ontimairff aofs rdwor fok As. 2")
            << KLM << _U("odfor fok As. 3")
            << KLM; _I _D;
        std::cin >> _D;
        LKM << KLM;

        --_D;

        if (_D < 0 || _D >= 3)
            _D = 3;

        if (_C[_D](_Z, _A, 0))
        {
            std::free(_C);
            return 0;
        }

        LKM << KLM;
    }
    std::free(_C);
    return false;
}
