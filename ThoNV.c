#include "ThoNV.h"

// static int Hard_Code;

void Set_Age(unsigned char age)
{
    ThoNV->Age = (unsigned char)age;
}

ReturnType_t Init_Age(unsigned char age)
{
    ReturnType_t Ret = (ReturnType_t)E_OK;
    Set_Age(age);
    return Ret;
}

Nam_Nu_t Get_Nam_Nu(Person_t* Target )
{
    return Target->Nam_or_Nu;
}

ReturnType_t Check_NamNu(Nam_Nu_t value)
{
    ReturnType_t Ret = (ReturnType_t)E_NOT_OK;
    if(value == Get_Nam_Nu(ThoNV))
    {
        Ret = (ReturnType_t)E_OK;
    }
    else
    {
        Ret = (ReturnType_t)E_NOT_OK;
    }
    return Ret;
}

ReturnType_t Check_Person(Person_t* PerSon )
{
    ReturnType_t Ret = (ReturnType_t)E_NOT_OK;
    if((PerSon->Age == 23) && (PerSon->Money == 100) && (PerSon->STT == 2))
    {
        Ret = E_OK;
    }
    else 
    {
        Ret = E_NOT_OK;
    }
    return Ret;
}
ReturnType_t Handle_Check_Person(Person_t* PerSon)
{
    ReturnType_t Ret = (ReturnType_t)E_NOT_OK;
    Ret = Check_Person(PerSon);
    return Ret;
}
int Advanced(int a, int b)
{
    return a + b;
}
int Handle_Advanced(int a, int b)
{
    a++;
    b++;
    int Ret = Advanced(a,b);
    return Ret;
}

ReturnType_t SetSTT(unsigned char STT)
{
    ReturnType_t Ret = (ReturnType_t)E_NOT_OK;
    int Hard_Code;
    if (Hard_Code - STT == 1)
    {
        Ret = E_OK;
        Set_Age(10);
    }
    else 
    {
        Ret = E_NOT_OK;
        Set_Age(9);
    }
    return Ret;
}
int a = 100;
int b = 200;
int* Return_Pointer(int value)
{
    if (value == 1)
    {
        return &a;
    }
    else
    {
        return &b;
    }
        
}

char FuncA(long x)
{
    return (char)x;
}
char FuncB(long x)
{
    return (char)x;
}
char (*Select_Func)();
char (*Func_pointer[2])(long) = {FuncA,FuncB};
void Choose_function(int x)
{
    if(x == 0)
    {
        Select_Func = Func_pointer[0];
    }
    else
    if(x == 1)
    {
        Select_Func = Func_pointer[1];
    }

}



