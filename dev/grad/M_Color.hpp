#ifndef M_COLOR
#define M_COLOR

struct M_Color
{
    float r;
    float g;
    float b;
    float a;
    void set(float _r,float _g, float _b, float _a){ r = _r; g=_g;b=_b; a=_a; }
};

#endif /* M_Color.hpp */
