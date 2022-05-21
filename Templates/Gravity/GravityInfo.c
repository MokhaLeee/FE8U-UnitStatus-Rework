

#include "gbafe-chax.h"

extern const u16 Gfx_UnitStatus_Gravity[];

const struct UnitStatusInfo StatusInfo_Gravity = {
	.msg_name = 0x212,		// Todo
	.msg_desc = 0x212,		// Todo
	.is_debuff = 1,
	.is_gravity = 1,
	.spd_bonus = -4,
	.duration = 1,
	
	.mini_gfx = Gfx_UnitStatus_Gravity,
};





