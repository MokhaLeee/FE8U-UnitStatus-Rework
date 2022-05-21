

#include "gbafe-chax.h"

extern const u16 Gfx_UnitStatus_AvoidPlus[];

const struct UnitStatusInfo StatusInfo_AvoidPlus = {
	.msg_name = 0x212,		// Todo
	.msg_desc = 0x212,		// Todo
	.is_buff = 1,
	.duration = 1,
	.avo_bonus = 30,
	
	.mini_gfx = Gfx_UnitStatus_AvoidPlus,
};





