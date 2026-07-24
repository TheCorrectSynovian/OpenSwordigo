/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065fa7c
 * Function: FUN_0065fa7c
 * Signature: undefined FUN_0065fa7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_0065fa7c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  cVar1 = FUN_0065f224();
  if (cVar1 == '\0') {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    lVar2 = -1;
  }
  else {
    lVar2 = FUN_0061f8b4(param_1 + 0x68,param_2,param_3);
    if (lVar2 == -1) {
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
    }
    else {
                    /* try { // try from 0065fb10 to 0075fb13 has its CatchHandler @ 0065fd1c */
      uVar3 = *(undefined8 *)(param_1 + 0x98);
      uVar11 = param_4 & 0xff;
      uVar10 = param_4 >> 8 & 0xff;
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xd0);
      uVar9 = param_4 >> 0x10 & 0xff;
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd0);
      uVar8 = param_4 >> 0x18 & 0xff;
      *(undefined1 *)(param_1 + 0xa9) = 0;
      uVar7 = param_4 >> 0x20 & 0xff;
      *(undefined1 *)(param_1 + 0xaa) = 0;
      uVar6 = param_4 >> 0x28 & 0xff;
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar5 = param_4 >> 0x30 & 0xff;
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      uVar4 = param_4 >> 0x38;
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined8 *)(param_1 + 0x28) = 0;
                    /* try { // try from 0065fb58 to 0075fb5b has its CatchHandler @ 0065fd10 */
      *(undefined8 *)(param_1 + 0x20) = 0;
                    /* try { // try from 0065fb5c to 0075fd3b has its CatchHandler @ 0065fa58 */
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(ulong *)(param_1 + 0x84) = param_4;
    }
  }
  auVar12._8_8_ =
       uVar11 | uVar10 << 8 | uVar9 << 0x10 | uVar8 << 0x18 | uVar7 << 0x20 | uVar6 << 0x28 |
       uVar5 << 0x30 | uVar4 << 0x38;
  auVar12._0_8_ = lVar2;
  return auVar12;
}


