#include "Surgeon.h"


Surgeon::Surgeon()
{
}
Surgeon::Surgeon(string f, string l, int dmy[3], char g, int pno[11], char*Quali, int jd, int jm, int jy, string special, string loc, int dno, string Dname) :Doctor(f, l, dmy, g, pno, Quali, jd, jm, jy, special, loc, dno, Dname)
{

}

Surgeon::~Surgeon()
{
}
