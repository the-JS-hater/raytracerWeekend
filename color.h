typedef struct color
{
    int r;
    int g;
    int b;
};


void writeColor(std::ostream &out, color color){
    out << color.r << ' ' << color.g << ' ' << color.b;
}
