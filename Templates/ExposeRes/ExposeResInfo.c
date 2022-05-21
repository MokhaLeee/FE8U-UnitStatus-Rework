#include "gbafe-chax.h"

extern const u16 Gfx_UnitStatus_ExposeRes[];

const struct UnitStatusInfo StatusInfo_ExposeRes = {
	.msg_name = 0x212,		// Todo
	.msg_desc = 0x212,		// Todo
	.is_debuff = 1,
	.res_bonus = -5,
	.duration = 1,
	
	.mini_gfx = Gfx_UnitStatus_ExposeRes,
};
