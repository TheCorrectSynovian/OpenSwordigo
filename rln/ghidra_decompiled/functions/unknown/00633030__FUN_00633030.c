/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00633030
 * Function: FUN_00633030
 * Signature: undefined FUN_00633030(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00633030(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar4 = FUN_0062ee14(param_6 + 0xd0);
  FUN_0062d354(param_6 + 0xd0);
  lVar5 = *(long *)(lVar4 + 0x10);
  local_60 = *(undefined8 *)(lVar5 + 0xa0);
  local_68 = *(undefined8 *)(lVar5 + 0x98);
  local_70 = *(undefined8 *)(lVar5 + 0x90);
  local_58 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xa8);
  local_50 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xb0);
  local_48 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xb8);
  local_40 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xc0);
                    /* catch() { ... } // from try @ 00632f48 with catch @ 006330fc */
  local_38 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x58);
                    /* catch() { ... } // from try @ 00632f04 with catch @ 00633100 */
  local_30 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x60);
                    /* catch() { ... } // from try @ 00632eac with catch @ 0063310c */
  local_28 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x68);
                    /* catch() { ... } // from try @ 00632e3c with catch @ 00633118 */
  local_20 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x70);
                    /* catch() { ... } // from try @ 00632ec8 with catch @ 00633124 */
  local_18 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x78);
                    /* catch() { ... } // from try @ 00632c4c with catch @ 00633130 */
  local_74 = 0;
  local_10 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x80);
  local_8 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x88);
  auVar9 = FUN_00632c04(param_1,param_2,param_3,param_4,param_5,&local_78,&local_70,7,param_6,
                        &local_74);
  plVar7 = auVar9._0_8_;
  uVar6 = auVar9._8_8_ & 0xffffffff;
  if (local_74 == 0) {
    *(undefined4 *)(param_8 + 0x18) = local_78;
  }
  else {
    *param_7 = *param_7 | 4;
  }
  if (plVar7 == (long *)0x0) {
LAB_006331ec:
    plVar7 = (long *)0x0;
    iVar8 = 1;
    if (param_4 != (long *)0x0) goto LAB_00633198;
  }
  else {
    if (auVar9._8_4_ == -1) {
                    /* catch() { ... } // from try @ 00632cf8 with catch @ 00633220 */
                    /* catch() { ... } // from try @ 00632d04 with catch @ 00633224 */
      if ((byte *)plVar7[2] < (byte *)plVar7[3]) {
        uVar6 = (ulong)*(byte *)plVar7[2];
      }
      else {
        uVar3 = (**(code **)(*plVar7 + 0x48))();
        if (uVar3 == 0xffffffff) goto LAB_006331ec;
        uVar6 = (ulong)uVar3;
      }
    }
    iVar8 = 0;
    if (param_4 == (long *)0x0) goto LAB_006331ac;
LAB_00633198:
                    /* catch() { ... } // from try @ 00632db8 with catch @ 00633198 */
                    /* catch() { ... } // from try @ 00632c40 with catch @ 0063319c */
    iVar1 = 0;
                    /* catch() { ... } // from try @ 00632c08 with catch @ 006331a0 */
    if ((int)param_5 == -1) {
                    /* catch() { ... } // from try @ 00632d98 with catch @ 0063320c */
                    /* catch() { ... } // from try @ 00632d70 with catch @ 00633210 */
                    /* catch() { ... } // from try @ 00632c24 with catch @ 00633214 */
      if ((ulong)param_4[2] < (ulong)param_4[3]) {
        iVar1 = 0;
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
                    /* try { // try from 00633248 to 007332f7 has its CatchHandler @ 00633300 */
        iVar1 = 1;
        if (iVar2 != -1) {
          iVar1 = 0;
        }
      }
    }
                    /* catch() { ... } // from try @ 00632ba8 with catch @ 006331a4 */
    if (iVar8 != iVar1) goto LAB_006331ac;
  }
  *param_7 = *param_7 | 2;
LAB_006331ac:
  auVar9._8_8_ = param_3 & 0xffffffff00000000 | uVar6;
  auVar9._0_8_ = plVar7;
  return auVar9;
}


