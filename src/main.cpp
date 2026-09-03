#include <mod/amlmod.h>

MYMOD(
    com.adilson.prfmultas,
    PRFMultas,
    1.0,
    Adilson
)

NEEDGAME(com.rockstargames.gtasa)

ON_MOD_PRELOAD()
{
}

ON_MOD_LOAD()
{
    aml->ShowToast(false, "PRF MULTAS MOD CARREGADO!");
}
