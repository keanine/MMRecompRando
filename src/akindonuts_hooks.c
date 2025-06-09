#include "modding.h"
#include "global.h"
#include "apcommon.h"
#include "nmp_header.h"

#include "z64player.h"
#include "overlays/actors/ovl_En_Akindonuts/z_en_akindonuts.h"

RECOMP_HOOK("func_80BEF518") void on_func_80BEF518(EnAkindonuts* this, PlayState* play) {
    akindonuts_Enable_OnNextCutscene(true);
}

NMP_AKINDONUTS_ON_NEXT_CUTSCENE void akindonuts_onNextCutscene(EnAkindonuts* this, PlayState* play) {
    func_800B7298(play, NULL, PLAYER_CSACTION_END);
}