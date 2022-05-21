# FE8U Unit-Status Rework

In vanilla, unit status (buff & debuffs) use a u8 byte at `Unit Struct +0x30`, 4 bits for status-index, 4 bits for status-duration. As a result, unit can only hold no more than 15 status, since there have been 13 status used in vanilla, hackers can only make 2 more status in vanilla routine.

Previously, SME tried to modify this by expanding the status index to 5 bits, but failed to handle the skill duration decreasing at the beginning of the turn. In this hack, I have expanded unit status index to 6 bits, which can support up to 63 different states simultaneously. Meanwhile, through a series of modifications, we successfully used the remaining 2 bits to make the status last for up to 4 turns.

At the same time, a table is build to store status informations, such as, how unit's atk decrese during suffering this status or how long will this status continue, etc.

In addition, it provides adaptations for currently common patches, such as MSG and ModExpSave.


## How to Use it

Directly include "UnitStatus.event", then you will get this patch installed. As examples, I have makde some status as templetes, include "avoid"(unit grants avoid rate +15% at one turn), "Gravity"(unit cannot move in one turn), "Expose Def"(unit Def -5) in one turn, etc. All of these status is defined in `Templates/UnitStatusDef.h`, you can directly use function `void SetUnitStatus(struct Unit* unit, int statusId)` to give units status.

Meanwhile, you need to put functions defined in `External` folder to support patchs, including:

- `Modular Status Getter`: "PowGetter_UnitStatus" to power-getter loop, "MagGetter_UnitStatus" to magic-getter loop ...

- `Expanded Modular Save`: "MSu_SaveUnitStatus" and "MSu_LoadUnitStatus" to save-suspand table, which needs 0x89 bytes to store data.

- `Pre-Battle Calc`: "BC_UnitStatus" to Pre-Battle Calc loop.

## How to make your own status

Please refer to `Templates` folder:

- Add your status declearation to `UnitStatusDef.h` and `UnitStatusDef.event`

- Create a new folder for your own.

- Inside which, make the status info(`struct UnitStatusInfo`), on refer to `include/unit-status.h`


## Note

- in `struct UnitStatusInfo`, each status hold two attributes, "is_debuff" and "is_buff", if you defined the status as `.is_debuff = 1`, then this status duration will decrease at enimy's turn, otherwise decrease in its own turn.

- "gbafe.h" which is included inside c files is used as [FE-CLib-Mokha](https://github.com/MokhaLeee/FE-CLib-Mokha)