#include "Operation_Staff.h"


Operation_Staff::Operation_Staff(void) :Staff()
{
}
Operation_Staff::Operation_Staff(string f, string l, int dmy[3], char g, int pno[11], char*Quali, int jd, int jm, int jy, int dno, string Dname) : Staff(f, l, dmy, g, pno, Quali, jd, jm, jy, dno, Dname)
{

}

Operation_Staff::~Operation_Staff()
{
}
