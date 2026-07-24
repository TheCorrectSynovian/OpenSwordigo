/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00641f84
 * Function: FUN_00641f84
 * Signature: undefined FUN_00641f84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_00641f84(long *param_1)

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
  
  if ((*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0) {
    plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    auVar11 = (**(code **)(*plVar5 + 0x20))(plVar5,0,1,0x10);
    uVar2 = auVar11._8_8_;
    uVar1 = auVar11._0_8_;
    uVar4 = uVar2 >> 8 & 0xff;
                    /* catch() { ... } // from try @ 00641f40 with catch @ 00642028 */
    uVar6 = uVar2 >> 0x10 & 0xff;
                    /* catch() { ... } // from try @ 00641f28 with catch @ 0064202c */
    uVar3 = uVar2 & 0xff;
    uVar7 = uVar2 >> 0x18 & 0xff;
    uVar8 = uVar2 >> 0x20 & 0xff;
                    /* catch() { ... } // from try @ 00641f54 with catch @ 00642038 */
    uVar9 = uVar2 >> 0x28 & 0xff;
    uVar10 = uVar2 >> 0x30 & 0xff;
    uVar2 = uVar2 >> 0x38;
  }
  else {
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
  auVar11._8_8_ =
       uVar3 | uVar4 << 8 | uVar6 << 0x10 | uVar7 << 0x18 | uVar8 << 0x20 | uVar9 << 0x28 |
       uVar10 << 0x30 | uVar2 << 0x38;
  auVar11._0_8_ = uVar1;
  return auVar11;
}


