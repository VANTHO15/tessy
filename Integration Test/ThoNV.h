typedef enum 
{
    E_OK,
    E_NOT_OK
}ReturnType_t;

typedef enum 
{
    NAM,
    NU
}Nam_Nu_t;

typedef struct 
{
    unsigned char STT;
    unsigned char Age;
    int Money;
    Nam_Nu_t Nam_or_Nu;
}Person_t;

#define Person_BASE_ADDRS   (0xE000E000U)
#define Tho                 ((Person_t*)Person_BASE_ADDRS)
Person_t* ThoNV = Tho;



