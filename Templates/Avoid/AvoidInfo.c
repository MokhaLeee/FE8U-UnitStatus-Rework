#include "gbafe.h"
#include "unit-status.h"


extern const u16 Gfx_UnitStatus_Avoid[];

const struct UnitStatusInfo StatusInfo_Avoid = {
	.msg_name = 0x212, // ENUM_msg_UnitStatusName_Avoid,
	.msg_desc = 0x212, // ENUM_msg_UnitStatusDesc_Avoid,
	.is_buff = 1,
	.duration = 1,
	.avo_bonus = 15,
	
	.mini_gfx = Gfx_UnitStatus_Avoid,
};





