//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form1->Repaint();
	TPoint p[3];

	//‘он елки
	Canvas->Pen->Color = clSkyBlue;
	Form1->Canvas->Brush->Color = clSkyBlue;
	Form1->Canvas->Rectangle(0, 0, 500, 700);

	Canvas->Pen->Color = clGreen;
	Form1->Canvas->Brush->Color = clGreen;
	Form1->Canvas->Rectangle(0, 500, 500, 700);

	Canvas->Pen->Color = clBlack;
	p[0] = Point(100, 600);
	p[1] = Point(400, 600);
	p[2] = Point(250, 300);
	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Polygon(p, 2);

	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Ellipse(170, 200, 330, 350);

	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Ellipse(210, 260, 230, 290);

	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Ellipse(214, 270, 225, 290);

	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Ellipse(270, 260, 290, 290);

	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Ellipse(274, 270, 285, 290);

	p[0] = Point(250, 300);
	p[1] = Point(240, 325);
	p[2] = Point(260, 325);
	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Polygon(p, 2);

	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Ellipse(272, 290, 250, 320);


	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Ellipse(230, 290, 251, 320);

	Form1->Canvas->Brush->Color = clMaroon;
	Form1->Canvas->Ellipse(240, 280, 260, 300);

	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Ellipse(150, 230, 210, 320);

	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Ellipse(290, 230, 350, 320);

	p[0] = Point(470, 560);
	p[1] = Point(400, 600);
	p[2] = Point(480, 510);
	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Polygon(p, 2);

	p[0] = Point(250, 350);
	p[1] = Point(310, 330);
	p[2] = Point(310, 390);
	Form1->Canvas->Brush->Color = clFuchsia;
	Form1->Canvas->Polygon(p, 2);

	p[0] = Point(250, 350);
	p[1] = Point(190, 330);
	p[2] = Point(190, 390);
	Form1->Canvas->Brush->Color = clFuchsia;
	Form1->Canvas->Polygon(p, 2);

	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Rectangle(170, 570, 220, 600);

	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Rectangle(280, 570, 330, 600);
}
//---------------------------------------------------------------------------
