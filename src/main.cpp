#include <mod/amlmod.h>
#include <mod/logger.h>

MYMOD(
    com.prf.multas,
    PRF Multas,
    1.0,
    Adilson
)

NEEDGAME(com.rockstargames.gtasa)

ON_MOD_PRELOAD()
{
    logger->SetTag("PRF Multas");
}

ON_MOD_LOAD()
{
    logger->Info("================================");
    logger->Info("PRF MULTAS MOD CARREGADO!");
    logger->Info("GTA San Andreas detectado");
    logger->Info("Sistema iniciado com sucesso");
    logger->Info("================================");
}
