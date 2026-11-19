enum class Traffic_light { green, yellow, red };

Traffic_light light1 = Traffic_light::green; // default value 0
auto light2 = Traffic_light::yellow;        //  default value 1

Traffic_light x {10};

int y = int(Traffic_light::green);

Traffic_light& operator++(Traffic_light& t)
{
    using enum Traffic_light;

    switch(t) {
        case green: return t=yellow;
        case yellow: return t=red;
        case red: return t=green;
    }
}

enum Color { red, green, blue };
int col = blue; // col gets value 2

