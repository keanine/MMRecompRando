#include "modding.h"
#include "global.h"

/* z_player.c */

RECOMP_IMPORT("mm_no_more_patches", void Player_UseItem_OverrideGoronKegCheck(bool enable, bool value));

// NMP_GORON_KEG_CHECK void onGoronKegCheck(PlayState* play, Player* this, ItemId item, PlayerItemAction itemAction) { ... }
#define NMP_GORON_KEG_CHECK RECOMP_CALLBACK("mm_no_more_patches", onGoronKegCheck)



/* z_akindonuts.c */

RECOMP_IMPORT("mm_no_more_patches", void akindonuts_Enable_OnNextCutscene(bool enable));

// void akindonuts_onNextCutscene(EnAkindonuts* this, PlayState* play) { ... }
#define NMP_AKINDONUTS_ON_NEXT_CUTSCENE RECOMP_CALLBACK("mm_no_more_patches", akindonuts_onNextCutscene)