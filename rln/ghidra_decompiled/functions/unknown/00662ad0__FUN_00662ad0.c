/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00662ad0
 * Function: FUN_00662ad0
 * Signature: undefined FUN_00662ad0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_00662ad0(long param_1,undefined8 param_2,undefined8 param_3)

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
  
                    /* try { // try from 00662aec to 00762aef has its CatchHandler @ 00662d1c */
  cVar1 = FUN_0061f654(param_1 + 0x68);
  if (cVar1 == '\0') {
                    /* try { // try from 00662b64 to 00762b67 has its CatchHandler @ 00662d50 */
    uVar4 = 0;
    uVar5 = 0;
                    /* try { // try from 00662b6c to 00762b73 has its CatchHandler @ 00662d68 */
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar2 = 0xffffffffffffffff;
  }
  else {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      lVar3 = *(long *)(param_1 + 8);
                    /* try { // try from 00662ba4 to 00762ba7 has its CatchHandler @ 00662d70 */
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
      lVar3 = *(long *)(param_1 + 0xb0) + (ulong)(*(long *)(param_1 + 0x10) != lVar3) * 4;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
      *(long *)(param_1 + 0xb0) = lVar3;
      *(long *)(param_1 + 0x10) = lVar3;
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    auVar12 = FUN_006625d4(param_1,param_2,0,param_3);
    uVar4 = auVar12._8_8_;
    uVar2 = auVar12._0_8_;
    uVar11 = uVar4 & 0xff;
    uVar10 = uVar4 >> 8 & 0xff;
                    /* try { // try from 00662b1c to 00762b43 has its CatchHandler @ 00662d68 */
    uVar9 = uVar4 >> 0x10 & 0xff;
    uVar8 = uVar4 >> 0x18 & 0xff;
    uVar7 = uVar4 >> 0x20 & 0xff;
    uVar6 = uVar4 >> 0x28 & 0xff;
    uVar5 = uVar4 >> 0x30 & 0xff;
    uVar4 = uVar4 >> 0x38;
  }
                    /* try { // try from 00662b4c to 00762b4f has its CatchHandler @ 00662d38 */
                    /* try { // try from 00662b54 to 00762b5b has its CatchHandler @ 00662d68 */
  auVar12._8_8_ =
       uVar11 | uVar10 << 8 | uVar9 << 0x10 | uVar8 << 0x18 | uVar7 << 0x20 | uVar6 << 0x28 |
       uVar5 << 0x30 | uVar4 << 0x38;
  auVar12._0_8_ = uVar2;
  return auVar12;
}


