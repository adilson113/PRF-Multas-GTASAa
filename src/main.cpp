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
    aml->DoVibro(100);
    aml->ShowToast(true, "PRF MULTAS MOD CARREGADO!");
}
