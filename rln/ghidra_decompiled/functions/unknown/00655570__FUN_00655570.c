/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00655570
 * Function: FUN_00655570
 * Signature: undefined FUN_00655570(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00655570(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
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
  
                    /* try { // try from 00655578 to 0075557f has its CatchHandler @ 00655684 */
                    /* try { // try from 00655580 to 007556a3 has its CatchHandler @ 0065525c */
  lVar3 = FUN_006513a0(param_6 + 0xd0);
  FUN_0064f6ac(param_6 + 0xd0);
  lVar4 = *(long *)(lVar3 + 0x10);
  local_b0 = *(undefined8 *)(lVar4 + 0x138);
  local_b8 = *(undefined8 *)(lVar4 + 0x130);
  local_c0 = *(undefined8 *)(lVar4 + 0x128);
  local_a8 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x140);
  local_a0 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x148);
  local_98 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x150);
  local_90 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x158);
  local_88 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x160);
  local_80 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x168);
  local_78 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x170);
  local_70 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x178);
  local_68 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x180);
  local_60 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 200);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00655578 with catch @ 00655684
                        */
  local_58 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xd0);
  local_50 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xd8);
  local_48 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xe0);
                    /* try { // try from 006556a4 to 007556cb has its CatchHandler @ 006556d4 */
  local_40 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xe8);
  local_38 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xf0);
  local_30 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xf8);
                    /* try { // try from 006556cc to 007556d7 has its CatchHandler @ 0065525c */
  local_28 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x100);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006556a4 with catch @ 006556d4
                        */
                    /* catch() { ... } // from try @ 00655758 with catch @ 006556d8 */
  local_20 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x108);
  local_18 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x110);
  local_10 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x118);
  local_c4 = 0;
  local_8 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x120);
  auVar8 = FUN_00654f18(param_1,param_2,param_3,param_4,param_5,&local_c8,&local_c0,0xc,param_6,
                        &local_c4);
  plVar5 = auVar8._0_8_;
  uVar6 = auVar8._8_8_ & 0xffffffff;
                    /* try { // try from 00655730 to 00755757 has its CatchHandler @ 00655768 */
  if (local_c4 == 0) {
    *(undefined4 *)(param_8 + 0x10) = local_c8;
    if (plVar5 == (long *)0x0) goto LAB_006557ac;
LAB_00655740:
    if (auVar8._8_4_ == -1) {
      if ((uint *)plVar5[2] < (uint *)plVar5[3]) {
        uVar1 = *(uint *)plVar5[2];
      }
      else {
        uVar1 = (**(code **)(*plVar5 + 0x48))();
      }
      if (uVar1 == 0xffffffff) goto LAB_006557ac;
      uVar6 = (ulong)uVar1;
    }
    bVar7 = false;
    if (param_4 == (long *)0x0) goto LAB_0065576c;
LAB_00655750:
    iVar2 = (int)param_5;
                    /* try { // try from 00655758 to 0075577b has its CatchHandler @ 006556d8 */
    if (iVar2 == -1) {
      if ((int *)param_4[2] < (int *)param_4[3]) {
        iVar2 = *(int *)param_4[2];
      }
      else {
                    /* try { // try from 00655820 to 00755837 has its CatchHandler @ 0065596c */
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
      }
    }
                    /* catch() { ... } // from try @ 00655730 with catch @ 00655768 */
    if ((iVar2 == -1) != bVar7) goto LAB_0065576c;
  }
  else {
                    /* try { // try from 0065579c to 0075581f has its CatchHandler @ 0065579c
                       catch() { ... } // from try @ 0065579c with catch @ 0065579c
                       catch() { ... } // from try @ 00655898 with catch @ 0065579c */
    *param_7 = *param_7 | 4;
    if (plVar5 != (long *)0x0) goto LAB_00655740;
LAB_006557ac:
    plVar5 = (long *)0x0;
    bVar7 = true;
    if (param_4 != (long *)0x0) goto LAB_00655750;
  }
  *param_7 = *param_7 | 2;
LAB_0065576c:
  auVar8._8_8_ = param_3 & 0xffffffff00000000 | uVar6;
  auVar8._0_8_ = plVar5;
  return auVar8;
}


