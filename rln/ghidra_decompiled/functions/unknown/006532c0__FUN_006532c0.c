/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006532c0
 * Function: FUN_006532c0
 * Signature: undefined FUN_006532c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_006532c0(undefined8 param_1,undefined8 param_2,long *param_3,char param_4,long param_5,
            undefined4 param_6,undefined1 param_7)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  long lVar11;
  size_t sVar12;
  size_t sVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  int local_1c;
  undefined8 local_18;
  undefined1 auStack_10 [16];
  
                    /* catch() { ... } // from try @ 0065318c with catch @ 006532c4 */
                    /* catch() { ... } // from try @ 0065301c with catch @ 006532d0
                       catch() { ... } // from try @ 00653050 with catch @ 006532d0
                       catch() { ... } // from try @ 00653074 with catch @ 006532d0
                       catch() { ... } // from try @ 00653098 with catch @ 006532d0
                       catch() { ... } // from try @ 006530bc with catch @ 006532d0
                       catch() { ... } // from try @ 00653100 with catch @ 006532d0 */
                    /* catch() { ... } // from try @ 00653154 with catch @ 006532d4 */
                    /* catch() { ... } // from try @ 006531dc with catch @ 006532e0 */
                    /* catch() { ... } // from try @ 00653218 with catch @ 006532ec */
  lVar5 = FUN_0063c4d0(&DAT_007fd2a8);
                    /* try { // try from 0065330c to 00753333 has its CatchHandler @ 0065333c */
  lVar16 = *(long *)(*(long *)(param_5 + 0xd0) + 0x18);
  lVar15 = *(long *)(lVar16 + lVar5 * 8);
  if (lVar15 == 0) {
    puVar8 = operator_new(0x150);
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR_FUN_007b7c80;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 4) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 9) = 0;
    *(undefined4 *)((long)puVar8 + 0x4c) = 0;
    *(undefined1 *)(puVar8 + 0x29) = 0;
    FUN_0064fe98(puVar8,param_5 + 0xd0);
    FUN_0063c340(*(undefined8 *)(param_5 + 0xd0),puVar8,lVar5);
    lVar15 = *(long *)(lVar16 + lVar5 * 8);
  }
  lVar5 = *(long *)(param_5 + 8);
  iVar9 = (int)lVar5;
                    /* try { // try from 00653334 to 0075333f has its CatchHandler @ 00652fc0 */
  if (lVar5 < 0) {
    iVar9 = 6;
                    /* catch() { ... } // from try @ 00653394 with catch @ 00653340
                       catch() { ... } // from try @ 00653420 with catch @ 00653340
                       catch() { ... } // from try @ 00653478 with catch @ 00653340 */
    lVar5 = 6;
  }
  FUN_0063c9c4(param_5,auStack_10,param_7);
  iVar2 = iVar9 + 0x1e;
  if ((*(uint *)(param_5 + 0x18) & 4) != 0) {
    iVar2 = iVar9 + 0x138;
  }
  lVar16 = -((long)iVar2 + 0x1eU & 0xfffffffffffffff0);
                    /* try { // try from 00653388 to 00753393 has its CatchHandler @ 006534d0 */
  local_18 = FUN_0063be10();
                    /* try { // try from 00653394 to 007533a3 has its CatchHandler @ 00653340 */
                    /* try { // try from 006533a4 to 007533ab has its CatchHandler @ 006534bc */
  local_1c = FUN_0062ba00(param_1,&local_18,&stack0xffffffffffffff60 + lVar16,0,auStack_10,lVar5);
  plVar6 = (long *)FUN_0064f6ac(param_5 + 0xd0);
                    /* try { // try from 006533bc to 007533d7 has its CatchHandler @ 006534d0 */
                    /* try { // try from 006533d8 to 007533df has its CatchHandler @ 006534b8 */
  lVar5 = -((long)local_1c * 4 + 0x1eU & 0xfffffffffffffff0);
                    /* try { // try from 006533e0 to 007533fb has its CatchHandler @ 006534d0 */
  (**(code **)(*plVar6 + 0x58))
            (plVar6,&stack0xffffffffffffff60 + lVar16,&stack0xffffffffffffff60 + local_1c + lVar16,
             &stack0xffffffffffffff60 + lVar5 + lVar16);
  iVar9 = local_1c;
  sVar12 = (size_t)local_1c;
                    /* try { // try from 006533fc to 00753403 has its CatchHandler @ 006534b4 */
  pvVar7 = memchr(&stack0xffffffffffffff60 + lVar16,0x2e,sVar12);
                    /* try { // try from 00653404 to 0075341f has its CatchHandler @ 006534d0 */
  if (pvVar7 == (void *)0x0) {
    puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar16;
                    /* catch() { ... } // from try @ 00653388 with catch @ 006534d0
                       catch() { ... } // from try @ 006533bc with catch @ 006534d0
                       catch() { ... } // from try @ 006533e0 with catch @ 006534d0
                       catch() { ... } // from try @ 00653404 with catch @ 006534d0
                       catch() { ... } // from try @ 00653448 with catch @ 006534d0
                       catch() { ... } // from try @ 0065346c with catch @ 006534d0 */
    if ((*(char *)(lVar15 + 0x20) == '\0') ||
       ((2 < iVar9 &&
        (((puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar16,
          0x39 < (byte)(&stack0xffffffffffffff61)[lVar16] ||
          (puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar16,
          9 < (byte)((&stack0xffffffffffffff62)[lVar16] - 0x30))) ||
         (puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar16,
         (byte)(&stack0xffffffffffffff61)[lVar16] < 0x30)))))) goto LAB_00653420;
    puVar10 = (undefined1 *)0x0;
  }
  else {
    cVar3 = *(char *)(lVar15 + 0x20);
    puVar10 = &stack0xffffffffffffff60 +
              ((long)pvVar7 - (long)(&stack0xffffffffffffff60 + lVar16)) * 4 + lVar5 + lVar16;
    *(undefined4 *)
     (&stack0xffffffffffffff60 +
     ((long)pvVar7 - (long)(&stack0xffffffffffffff60 + lVar16)) * 4 + lVar5 + lVar16) =
         *(undefined4 *)(lVar15 + 0x48);
    puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar16;
    if (cVar3 == '\0') goto LAB_00653420;
  }
  lVar4 = -(sVar12 * 8 + 0x1e & 0xfffffffffffffff0);
  bVar1 = ((&stack0xffffffffffffff60)[lVar16] - 0x2b & 0xfd) == 0;
  if (bVar1) {
    *(undefined4 *)(&stack0xffffffffffffff60 + lVar4 + lVar5 + lVar16) =
         *(undefined4 *)(&stack0xffffffffffffff60 + lVar5 + lVar16);
    lVar11 = 4;
    local_1c = iVar9 + -1;
  }
  else {
    lVar11 = 0;
  }
  FUN_00651f08(param_2,*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x18),
               *(undefined4 *)(lVar15 + 0x4c),puVar10,
               &stack0xffffffffffffff60 + lVar11 + lVar4 + lVar5 + lVar16,
               &stack0xffffffffffffff60 + lVar11 + lVar5 + lVar16,&local_1c);
  local_1c = (uint)bVar1 + local_1c;
  sVar12 = (size_t)local_1c;
  puVar14 = &stack0xffffffffffffff60 + lVar4 + lVar5 + lVar16;
LAB_00653420:
                    /* try { // try from 00653420 to 0075342f has its CatchHandler @ 00653340 */
  lVar5 = *(long *)(param_5 + 0x10);
  sVar13 = sVar12;
  puVar10 = puVar14;
  if ((long)sVar12 < lVar5) {
                    /* try { // try from 00653430 to 00753437 has its CatchHandler @ 006534b0 */
    lVar15 = -(lVar5 * 4 + 0x1eU & 0xfffffffffffffff0);
    puVar10 = puVar14 + lVar15;
                    /* try { // try from 00653448 to 00753463 has its CatchHandler @ 006534d0 */
    sVar13 = (size_t)(int)lVar5;
    FUN_006530a4(param_5,param_6,(long)puVar14 + lVar15,puVar14,lVar5,sVar12);
                    /* try { // try from 00653464 to 0075346b has its CatchHandler @ 006534ac */
    local_1c = (int)lVar5;
  }
  *(undefined8 *)(param_5 + 0x10) = 0;
                    /* try { // try from 0065346c to 00753477 has its CatchHandler @ 006534d0 */
  if (param_4 == '\0') {
                    /* try { // try from 00653478 to 007534d3 has its CatchHandler @ 00653340 */
    sVar12 = (**(code **)(*param_3 + 0x60))(param_3,puVar10,sVar13);
    param_4 = sVar13 != sVar12;
  }
  auVar17[8] = param_4;
  auVar17._0_8_ = param_3;
  auVar17._9_7_ = 0;
                    /* catch() { ... } // from try @ 00653464 with catch @ 006534ac */
                    /* catch() { ... } // from try @ 00653430 with catch @ 006534b0 */
                    /* catch() { ... } // from try @ 006533fc with catch @ 006534b4 */
                    /* catch() { ... } // from try @ 006533d8 with catch @ 006534b8 */
                    /* catch() { ... } // from try @ 006533a4 with catch @ 006534bc */
  return auVar17;
}


