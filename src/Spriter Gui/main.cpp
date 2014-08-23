#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Menu_.H>

int main(int argc, char **argv)
{
    Fl_Window* window = new Fl_Window(340,80,800,600,"Spriter");
    Fl_Box* whitebox = new Fl_Box(0,0,800,50);
    whitebox->box(FL_FLAT_BOX);
    whitebox->color(255); // 255=white
    (new Fl_Box(FL_FLAT_BOX,0,48,800,1,0))->color(fl_rgb_color(100,100,100));
    //Fl_Box* boxline = new Fl_Box(0,48,800,1);
    //boxline->box(FL_FLAT_BOX);
    //boxline->color(fl_rgb_color(100,100,100));

    Fl_Box* title = new Fl_Box(5,5,10,10,"Sprite format");
    title->align(FL_ALIGN_TOP | FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
    title->labelsize(20);
    Fl_Box* subtitle = new Fl_Box(15,28,10,10,"Create and edit selfcontained sprite files");
    subtitle->align(FL_ALIGN_TOP | FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
    subtitle->labelsize(12);

    Fl_Button* newfilebtn = new Fl_Button(10,55,100,25,"New File");
    newfilebtn->labelsize(12);
    Fl_Button* openfilebtn = new Fl_Button(120,55,100,25,"Open File...");
    openfilebtn->labelsize(12);
    Fl_Button* saveasbtn = new Fl_Button(230,55,100,25,"Save as...");
    saveasbtn->labelsize(12);
    Fl_Button* savebtn = new Fl_Button(340,55,100,25,"Save file");
    savebtn->labelsize(12);


    (new Fl_Box(FL_FLAT_BOX,10,90,780,2,0))->color(fl_rgb_color(255,255,255));
    (new Fl_Box(FL_FLAT_BOX,10,90,780,1,0))->color(fl_rgb_color(100,100,100));

    Fl_Box* ImageSection = new Fl_Box(FL_EMBOSSED_FRAME,	 10,100,400,490,0);
    //Fl_Box* AnimationSection = new Fl_Box(FL_EMBOSSED_FRAME,220,100,200,300,0);


    window->end();
    window->show(argc, argv);
    return Fl::run();
}
