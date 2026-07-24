/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00550d7c
 * Function: Caver::Skeleton::Skeleton
 * Signature: undefined __thiscall Skeleton(Skeleton * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Skeleton::Skeleton(int) */

void __thiscall Caver::Skeleton::Skeleton(Skeleton *this,int param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  
                    /* catch() { ... } // from try @ 00550d28 with catch @ 00550d88 */
  uVar10 = (ulong)param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar10;
  uVar5 = (uVar10 + (long)param_1 * 8) * 0x10;
                    /* try { // try from 00550da8 to 00650dcf has its CatchHandler @ 00550dd8 */
  uVar1 = uVar5 + 8;
  if (SUB168(auVar3 * ZEXT816(0x90),8) != 0 || 0xfffffffffffffff7 < uVar5) {
    uVar1 = 0xffffffffffffffff;
  }
  *(int *)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  puVar4 = operator_new__(uVar1);
  puVar6 = puVar4 + 1;
                    /* try { // try from 00550dd0 to 00650ddb has its CatchHandler @ 00550cbc */
  *puVar4 = uVar10;
                    /* catch() { ... } // from try @ 00550da8 with catch @ 00550dd8 */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 00550dfc with catch @ 00550ddc
                       catch() { ... } // from try @ 00550e60 with catch @ 00550ddc */
                    /* try { // try from 00550df4 to 00650dfb has its CatchHandler @ 00550e2c */
                    /* try { // try from 00550dfc to 00650e33 has its CatchHandler @ 00550ddc */
    uVar1 = (uVar10 * 0x90 - 0x90) / 0x90 + 1;
    puVar7 = puVar6;
    if (1 < uVar1) {
      uVar8 = uVar1 & 0x3fffffffffffffe;
      puVar9 = puVar4 + 0x13;
      puVar7 = puVar6 + uVar8 * 0x12;
      puVar2 = PTR_DAT_007e5de8 + 0x18;
                    /* catch() { ... } // from try @ 00550df4 with catch @ 00550e2c */
      uVar5 = uVar8;
      do {
        puVar9[-0x12] = (ulong)puVar2;
                    /* try { // try from 00550e34 to 00650e3b has its CatchHandler @ 00550e48 */
        *puVar9 = (ulong)puVar2;
        uVar5 = uVar5 - 2;
        puVar9 = puVar9 + 0x24;
      } while (uVar5 != 0);
                    /* try { // try from 00550e44 to 00650e47 has its CatchHandler @ 00550e58 */
                    /* catch() { ... } // from try @ 00550e34 with catch @ 00550e48 */
      if (uVar1 == uVar8) goto LAB_00550e70;
    }
    puVar7 = puVar7 + -1;
                    /* catch() { ... } // from try @ 00550e44 with catch @ 00550e58 */
                    /* try { // try from 00550e5c to 00650e5f has its CatchHandler @ 00550e68 */
    puVar2 = PTR_DAT_007e5de8 + 0x18;
    do {
                    /* try { // try from 00550e60 to 00650e6b has its CatchHandler @ 00550ddc */
      puVar7[1] = (ulong)puVar2;
      puVar7 = puVar7 + 0x12;
                    /* catch() { ... } // from try @ 00550e5c with catch @ 00550e68 */
    } while (puVar4 + uVar10 * 0x12 != puVar7);
  }
LAB_00550e70:
                    /* catch() { ... } // from try @ 00550e8c with catch @ 00550e70 */
  *(ulong **)(this + 8) = puVar6;
  return;
}


