#include <mod/amlmod.h>
#include <unistd.h>

MYMOD(
    com.adilson.prfmultas,
    PRFMultas,
    1.0,
    Adilson
)

NEEDGAME(com.rockstargames.gtasa)

void* ShowMessage(void*)
{
    sleep(5);

    aml->ShowToast(
        true,
        "PRF MULTAS MOD CARREGADO!"
    );

    return nullptr;
}

ON_MOD_LOAD()
{
    pthread_t thread;

    pthread_create(
        &thread,
        nullptr,
        ShowMessage,
        nullptr
    );
}
