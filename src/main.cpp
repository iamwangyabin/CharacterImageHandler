#include <iostream>
#include "Picture.h"

const char *init[] = {"Paris", "in the", "Spring"};

int main(int argc, char const *argv[])
{
    Picture p(init, 3);
    cout << p << endl;

    // Picture q = frame(p);
    // cout << q << endl;

    // Picture r = p | q;
    // cout << r << endl;

    // Picture s = q & r;
    // cout << s << endl
    //      << frame(s) << endl;

    Picture q = p;
    cout << q << endl;

    return 0;
}
