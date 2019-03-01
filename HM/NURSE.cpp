#include "NURSE.h"
#include "Staff.h"

NURSE::NURSE()
{
}
NURSE::NURSE(string f, string l, int dmy[3], char g, int pno[11], char*Quali, int jd, int jm, int jy, int dno, string Dname) :Operation_Staff(f, l, dmy, g, pno, Quali, jd, jm, jy, dno, Dname)
{

}
void NURSE::display()
{
	Staff::staff_Display();
}
NURSE::~NURSE()
{
}
