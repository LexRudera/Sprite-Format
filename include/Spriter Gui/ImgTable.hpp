#ifndef IMGTABLE_H
#define IMGTABLE_H

#include <Fl/Fl_Table.h>


class ImgTable : public Fl_Table
{
	public:
		/** Default constructor */
		ImgTable(int X, int Y, int W, int H, const char* l = 0);
		/** Default destructor */
		virtual ~ImgTable();

		Fl_Color cell_bgcolor;				// color of cell's bg color
		Fl_Color cell_fgcolor;				// color of cell's fg color
	protected:
		void draw_cell(TableContext context, int R, int C, int X, int Y, int W, int H);
	private:
};

#endif // IMGTABLE_H
