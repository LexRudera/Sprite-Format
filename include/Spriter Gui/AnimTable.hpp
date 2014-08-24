#ifndef ANIMTABLE_H
#define ANIMTABLE_H

#include <Fl/Fl_Table.h>


class AnimTable : public Fl_Table
{
    public:
        AnimTable(int X, int Y, int W, int H, const char* l);
        virtual ~AnimTable();
    protected:
    private:
};

#endif // ANIMTABLE_H
