/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00633278
 * Function: FUN_00633278
 * Signature: undefined FUN_00633278(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00633278(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
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
  undefined4 local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
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
  local_b0 = *(undefined8 *)(lVar5 + 0x138);
                    /* try { // try from 006332f8 to 00733303 has its CatchHandler @ 00632a08 */
  local_b8 = *(undefined8 *)(lVar5 + 0x130);
                    /* catch() { ... } // from try @ 00633248 with catch @ 00633300 */
  local_c0 = *(undefined8 *)(lVar5 + 0x128);
                    /* catch() { ... } // from try @ 006333f0 with catch @ 00633308
                       catch() { ... } // from try @ 006335c0 with catch @ 00633308 */
  local_a8 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x140);
  local_a0 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x148);
  local_98 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x150);
  local_90 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x158);
                    /* try { // try from 00633344 to 00733347 has its CatchHandler @ 006334b4 */
  local_88 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x160);
                    /* try { // try from 00633350 to 00733353 has its CatchHandler @ 006334a4 */
  local_80 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x168);
  local_78 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x170);
  local_70 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x178);
  local_68 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x180);
                    /* try { // try from 00633380 to 007333a7 has its CatchHandler @ 00633494 */
  local_60 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 200);
  local_58 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xd0);
  local_50 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xd8);
  local_48 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xe0);
  local_40 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xe8);
  local_38 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xf0);
                    /* try { // try from 006333c8 to 007333ef has its CatchHandler @ 0063348c */
  local_30 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xf8);
  local_28 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x100);
  local_20 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x108);
  local_18 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x110);
                    /* try { // try from 006333f0 to 007334bf has its CatchHandler @ 00633308 */
  local_10 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x118);
  local_c4 = 0;
  local_8 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x120);
  auVar9 = FUN_00632c04(param_1,param_2,param_3,param_4,param_5,&local_c8,&local_c0,0xc,param_6,
                        &local_c4);
  plVar7 = auVar9._0_8_;
  uVar6 = auVar9._8_8_ & 0xffffffff;
  if (local_c4 == 0) {
    *(undefined4 *)(param_8 + 0x10) = local_c8;
  }
  else {
                    /* catch() { ... } // from try @ 00633350 with catch @ 006334a4 */
    *param_7 = *param_7 | 4;
  }
  if (plVar7 == (long *)0x0) {
LAB_006334ac:
    plVar7 = (long *)0x0;
    iVar8 = 1;
                    /* catch() { ... } // from try @ 00633344 with catch @ 006334b4 */
    if (param_4 != (long *)0x0) goto LAB_00633458;
  }
  else {
    if (auVar9._8_4_ == -1) {
      if ((byte *)plVar7[2] < (byte *)plVar7[3]) {
        uVar6 = (ulong)*(byte *)plVar7[2];
      }
      else {
        uVar3 = (**(code **)(*plVar7 + 0x48))();
        if (uVar3 == 0xffffffff) goto LAB_006334ac;
        uVar6 = (ulong)uVar3;
      }
    }
    iVar8 = 0;
    if (param_4 == (long *)0x0) goto LAB_0063346c;
LAB_00633458:
    iVar1 = 0;
    if ((int)param_5 == -1) {
      if ((ulong)param_4[2] < (ulong)param_4[3]) {
        iVar1 = 0;
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
        iVar1 = 1;
        if (iVar2 != -1) {
          iVar1 = 0;
        }
      }
    }
    if (iVar8 != iVar1) goto LAB_0063346c;
  }
                    /* try { // try from 006334c0 to 007335bf has its CatchHandler @ 006335e0 */
  *param_7 = *param_7 | 2;
LAB_0063346c:
  auVar9._8_8_ = param_3 & 0xffffffff00000000 | uVar6;
  auVar9._0_8_ = plVar7;
                    /* catch() { ... } // from try @ 006333c8 with catch @ 0063348c */
                    /* catch() { ... } // from try @ 00633380 with catch @ 00633494 */
  return auVar9;
}


