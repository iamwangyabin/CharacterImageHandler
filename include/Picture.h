#include <iostream>

using namespace std;

class Picture
{
  public:
    Picture();
    Picture(const char *const *, int);
    Picture(const Picture &);
    ~Picture();

    Picture &operator=(const Picture &);

  private:
    int height, width;
    char *data;

    char &position(int row, int col)
    {
        return data[row * width + col];
    }
    char position(int row, int col) const
    {
        return data[row * width + col];
    }
    int max(int, int);
    void init(int, int);
    void copyblock(int, int, const Picture &);
    friend ostream& operator<<(ostream&, const Picture&);

    friend Picture frame(const Picture&);

    friend Picture operator&(const Picture&, const Picture&);

    friend Picture operator|(const Picture&, const Picture&);
};
