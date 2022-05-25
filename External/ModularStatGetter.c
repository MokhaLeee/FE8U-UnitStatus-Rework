#include "gbafe.h"
#include "unit-status.h"

s8 PowGetter_UnitStatus(s8 cur, struct Unit* unit){
	
	const u8 index = GetUnitStatusIndex(unit);
	const struct UnitStatusInfo* info = GetStatusInfo(index);
	
	return cur + info->pow_bonus;
}


s8 MagGetter_UnitStatus(s8 cur, struct Unit* unit){
	
	const u8 index = GetUnitStatusIndex(unit);
	const struct UnitStatusInfo* info = GetStatusInfo(index);
	
	return cur + info->mag_bonus;
}


s8 SklGetter_UnitStatus(s8 cur, struct Unit* unit){
	
	const u8 index = GetUnitStatusIndex(unit);
	const struct UnitStatusInfo* info = GetStatusInfo(index);
	
	return cur + info->skl_bonus;
}


s8 SpdGetter_UnitStatus(s8 cur, struct Unit* unit){
	
	const u8 index = GetUnitStatusIndex(unit);
	const struct UnitStatusInfo* info = GetStatusInfo(index);
	
	return cur + info->spd_bonus;
}


s8 DefGetter_UnitStatus(s8 cur, struct Unit* unit){
	
	const u8 index = GetUnitStatusIndex(unit);
	const struct UnitStatusInfo* info = GetStatusInfo(index);
	
	return cur + info->def_bonus;
}


s8 ResGetter_UnitStatus(s8 cur, struct Unit* unit){
	
	const u8 index = GetUnitStatusIndex(unit);
	const struct UnitStatusInfo* info = GetStatusInfo(index);
	
	return cur + info->res_bonus;
}


s8 LckGetter_UnitStatus(s8 cur, struct Unit* unit){
	
	const u8 index = GetUnitStatusIndex(unit);
	const struct UnitStatusInfo* info = GetStatusInfo(index);
	
	return cur + info->lck_bonus;
}


s8 MovGetter_UnitStatus(s8 cur, struct Unit* unit){
	
	const u8 index = GetUnitStatusIndex(unit);
	const struct UnitStatusInfo* info = GetStatusInfo(index);
	
	// For Status
	if( info->is_gravity )
		return 0;
	else
		return cur + info->mov_bonus;
}
