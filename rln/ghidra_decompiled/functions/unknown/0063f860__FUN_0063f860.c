/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f860
 * Function: FUN_0063f860
 * Signature: undefined FUN_0063f860(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_0063f860(long *param_1)

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
  
                    /* try { // try from 0063f880 to 0073f8a7 has its CatchHandler @ 006402d4 */
  if ((*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0) {
    plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    auVar11 = (**(code **)(*plVar5 + 0x20))(plVar5,0,1,0x10);
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
  else {
    uVar2 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
                    /* try { // try from 0063f8a8 to 0073f8b3 has its CatchHandler @ 00640774 */
    uVar1 = 0xffffffffffffffff;
  }
                    /* try { // try from 0063f8b4 to 0073f8bb has its CatchHandler @ 00640584 */
                    /* try { // try from 0063f8bc to 0073f923 has its CatchHandler @ 00640774 */
  auVar11._8_8_ =
       uVar3 | uVar4 << 8 | uVar6 << 0x10 | uVar7 << 0x18 | uVar8 << 0x20 | uVar9 << 0x28 |
       uVar10 << 0x30 | uVar2 << 0x38;
  auVar11._0_8_ = uVar1;
  return auVar11;
}


