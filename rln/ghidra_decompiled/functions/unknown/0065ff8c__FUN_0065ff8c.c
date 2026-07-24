/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065ff8c
 * Function: FUN_0065ff8c
 * Signature: undefined FUN_0065ff8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_0065ff8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  cVar1 = FUN_0061f654(param_1 + 0x68);
  if (cVar1 == '\0') {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
                    /* try { // try from 00660034 to 0076003b has its CatchHandler @ 00660044 */
    uVar9 = 0;
    uVar10 = 0;
                    /* try { // try from 0066003c to 00760047 has its CatchHandler @ 0065fd50 */
    uVar11 = 0;
    uVar2 = 0xffffffffffffffff;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00660034 with catch @ 00660044
                        */
  }
  else {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      lVar3 = *(long *)(param_1 + 0xb0);
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
        lVar3 = lVar3 + 1;
      }
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
      *(long *)(param_1 + 0xb0) = lVar3;
      *(long *)(param_1 + 0x10) = lVar3;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    auVar12 = FUN_0065fa7c(param_1,param_2,0,param_3);
    uVar4 = auVar12._8_8_;
    uVar2 = auVar12._0_8_;
    uVar11 = uVar4 & 0xff;
    uVar10 = uVar4 >> 8 & 0xff;
    uVar9 = uVar4 >> 0x10 & 0xff;
    uVar8 = uVar4 >> 0x18 & 0xff;
    uVar7 = uVar4 >> 0x20 & 0xff;
    uVar6 = uVar4 >> 0x28 & 0xff;
    uVar5 = uVar4 >> 0x30 & 0xff;
    uVar4 = uVar4 >> 0x38;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065fe50 with catch @ 00660008
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065fe08 with catch @ 00660014
                        */
  auVar12._8_8_ =
       uVar11 | uVar10 << 8 | uVar9 << 0x10 | uVar8 << 0x18 | uVar7 << 0x20 | uVar6 << 0x28 |
       uVar5 << 0x30 | uVar4 << 0x38;
  auVar12._0_8_ = uVar2;
  return auVar12;
}


