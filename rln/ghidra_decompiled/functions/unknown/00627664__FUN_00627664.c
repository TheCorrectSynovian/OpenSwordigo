/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00627664
 * Function: FUN_00627664
 * Signature: undefined FUN_00627664(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_00627664(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  char local_8 [8];
  
                    /* try { // try from 00627674 to 0072767f has its CatchHandler @ 0062647c */
                    /* catch() { ... } // from try @ 00627484 with catch @ 0062767c */
  FUN_00625fe4(local_8,param_1,1);
  if ((local_8[0] == '\0') ||
     ((*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) != 0)) {
    uVar2 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar1 = 0xffffffffffffffff;
  }
  else {
    plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    auVar11 = (**(code **)(*plVar5 + 0x20))(plVar5,0,1,8);
    uVar2 = auVar11._8_8_;
    uVar1 = auVar11._0_8_;
    uVar4 = uVar2 >> 8 & 0xff;
    uVar6 = uVar2 >> 0x10 & 0xff;
    uVar3 = uVar2 & 0xff;
    uVar7 = uVar2 >> 0x18 & 0xff;
    uVar8 = uVar2 >> 0x20 & 0xff;
    uVar9 = uVar2 >> 0x28 & 0xff;
    uVar10 = uVar2 >> 0x30 & 0xff;
    uVar2 = uVar2 >> 0x38;
  }
  auVar11._8_8_ =
       uVar3 | uVar4 << 8 | uVar6 << 0x10 | uVar7 << 0x18 | uVar8 << 0x20 | uVar9 << 0x28 |
       uVar10 << 0x30 | uVar2 << 0x38;
  auVar11._0_8_ = uVar1;
  return auVar11;
}


