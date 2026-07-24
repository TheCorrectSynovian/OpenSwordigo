/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00631318
 * Function: FUN_00631318
 * Signature: undefined FUN_00631318(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00631318(undefined8 param_1,undefined8 param_2,long *param_3,char param_4,long param_5,
            undefined1 param_6,undefined1 param_7)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  size_t sVar11;
  size_t sVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  int local_1c;
  undefined8 local_18;
  undefined1 auStack_10 [16];
  
                    /* try { // try from 0063131c to 00731327 has its CatchHandler @ 00631b34 */
                    /* try { // try from 0063134c to 00731353 has its CatchHandler @ 006316b4 */
  lVar4 = FUN_0063c4d0(&DAT_007fbdd0);
  lVar14 = *(long *)(*(long *)(param_5 + 0xd0) + 0x18);
  lVar10 = *(long *)(lVar14 + lVar4 * 8);
  if (lVar10 == 0) {
                    /* try { // try from 006315f8 to 007316d7 has its CatchHandler @ 006304b8 */
    puVar7 = operator_new(0x90);
                    /* catch() { ... } // from try @ 0063055c with catch @ 006315fc */
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_007b70c0;
                    /* catch() { ... } // from try @ 0063148c with catch @ 00631610 */
                    /* catch() { ... } // from try @ 00631468 with catch @ 00631614 */
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
                    /* catch() { ... } // from try @ 00631400 with catch @ 00631620 */
    puVar7[5] = 0;
    puVar7[6] = 0;
                    /* catch() { ... } // from try @ 006313bc with catch @ 00631628 */
    puVar7[7] = 0;
    puVar7[8] = 0;
                    /* catch() { ... } // from try @ 00631374 with catch @ 00631630 */
    *(undefined1 *)(puVar7 + 9) = 0;
                    /* catch() { ... } // from try @ 00630eb4 with catch @ 00631634 */
    *(undefined1 *)((long)puVar7 + 0x49) = 0;
                    /* catch() { ... } // from try @ 006312b4 with catch @ 00631638 */
    *(undefined1 *)(puVar7 + 0x11) = 0;
                    /* catch() { ... } // from try @ 00630e60 with catch @ 0063163c */
    FUN_0062dbf0(puVar7,param_5 + 0xd0);
                    /* catch() { ... } // from try @ 00630f70 with catch @ 00631640 */
                    /* catch() { ... } // from try @ 00630d64 with catch @ 0063164c */
    FUN_0063c340(*(undefined8 *)(param_5 + 0xd0),puVar7,lVar4);
                    /* catch() { ... } // from try @ 0063140c with catch @ 00631650 */
    lVar10 = *(long *)(lVar14 + lVar4 * 8);
  }
                    /* try { // try from 00631374 to 0073139b has its CatchHandler @ 00631630 */
  lVar4 = *(long *)(param_5 + 8);
  iVar8 = (int)lVar4;
  if (lVar4 < 0) {
    iVar8 = 6;
    lVar4 = 6;
  }
  FUN_0063c9c4(param_5,auStack_10,param_7);
  iVar3 = iVar8 + 0x42;
  if ((*(uint *)(param_5 + 0x18) >> 2 & 1) != 0) {
    iVar3 = iVar8 + 0x1348;
  }
                    /* try { // try from 006313bc to 007313e3 has its CatchHandler @ 00631628 */
  lVar14 = -((long)iVar3 + 0x1eU & 0xfffffffffffffff0);
  local_18 = FUN_0063be10();
  local_1c = FUN_0062ba00(param_1,&local_18,&stack0xffffffffffffff60 + lVar14,0,auStack_10,lVar4);
                    /* try { // try from 00631400 to 0073140b has its CatchHandler @ 00631620 */
  plVar5 = (long *)FUN_0062d354(param_5 + 0xd0);
  iVar8 = local_1c;
                    /* try { // try from 0063140c to 00731457 has its CatchHandler @ 00631650 */
  sVar11 = (size_t)local_1c;
  lVar4 = -(sVar11 + 0x1e & 0xfffffffffffffff0);
  if ((char)plVar5[7] == '\x01') {
    memcpy(&stack0xffffffffffffff60 + lVar4 + lVar14,&stack0xffffffffffffff60 + lVar14,sVar11);
  }
  else {
    if ((char)plVar5[7] == '\0') {
      FUN_0061fea0();
                    /* try { // try from 006315d0 to 007315f7 has its CatchHandler @ 00631e9c */
    }
    (**(code **)(*plVar5 + 0x38))
              (plVar5,&stack0xffffffffffffff60 + lVar14,&stack0xffffffffffffff60 + sVar11 + lVar14,
               &stack0xffffffffffffff60 + lVar4 + lVar14);
    sVar11 = (size_t)local_1c;
    iVar8 = local_1c;
  }
  pvVar6 = memchr(&stack0xffffffffffffff60 + lVar14,0x2e,sVar11);
  if (pvVar6 == (void *)0x0) {
    puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14;
    if ((*(char *)(lVar10 + 0x20) == '\0') ||
       ((2 < iVar8 &&
        (((puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14,
          0x39 < (byte)(&stack0xffffffffffffff61)[lVar14] ||
          (puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14,
          9 < (byte)((&stack0xffffffffffffff62)[lVar14] - 0x30))) ||
         (puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14,
         (byte)(&stack0xffffffffffffff61)[lVar14] < 0x30)))))) goto LAB_00631480;
    puVar9 = (undefined1 *)0x0;
  }
  else {
                    /* try { // try from 00631468 to 0073146f has its CatchHandler @ 00631614 */
    puVar9 = (undefined1 *)
             ((long)pvVar6 +
             (long)(&stack0xffffffffffffff60 + (lVar4 - (long)&stack0xffffffffffffff60)));
    *(undefined1 *)
     ((long)pvVar6 + (long)(&stack0xffffffffffffff60 + (lVar4 - (long)&stack0xffffffffffffff60))) =
         *(undefined1 *)(lVar10 + 0x48);
    puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14;
    if (*(char *)(lVar10 + 0x20) == '\0') goto LAB_00631480;
  }
  lVar2 = -(sVar11 * 2 + 0x1e & 0xfffffffffffffff0);
  bVar1 = ((&stack0xffffffffffffff60)[lVar14] - 0x2b & 0xfd) == 0;
  if (bVar1) {
    (&stack0xffffffffffffff60)[lVar2 + lVar4 + lVar14] = (&stack0xffffffffffffff60)[lVar4 + lVar14];
    local_1c = iVar8 + -1;
  }
  FUN_0062fe5c(param_2,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),
               *(undefined1 *)(lVar10 + 0x49),puVar9,
               &stack0xffffffffffffff60 + (ulong)bVar1 + lVar2 + lVar4 + lVar14,
               &stack0xffffffffffffff60 + (ulong)bVar1 + lVar4 + lVar14,&local_1c);
                    /* catch() { ... } // from try @ 006305f0 with catch @ 006315ac */
  local_1c = (uint)bVar1 + local_1c;
  sVar11 = (size_t)local_1c;
  puVar13 = &stack0xffffffffffffff60 + lVar2 + lVar4 + lVar14;
LAB_00631480:
  lVar4 = *(long *)(param_5 + 0x10);
  sVar12 = sVar11;
  puVar9 = puVar13;
  if ((long)sVar11 < lVar4) {
                    /* try { // try from 0063148c to 007314b3 has its CatchHandler @ 00631610 */
    lVar10 = -(lVar4 + 0x1eU & 0xfffffffffffffff0);
    puVar9 = puVar13 + lVar10;
    sVar12 = (size_t)(int)lVar4;
    FUN_00630d30(param_5,param_6,(long)puVar13 + lVar10,puVar13,lVar4,sVar11);
    local_1c = (int)lVar4;
  }
  *(undefined8 *)(param_5 + 0x10) = 0;
  if (param_4 == '\0') {
                    /* try { // try from 006314e4 to 0073150b has its CatchHandler @ 00631c60 */
    sVar11 = (**(code **)(*param_3 + 0x60))(param_3,puVar9,sVar12);
    param_4 = sVar11 != sVar12;
  }
  auVar15[8] = param_4;
  auVar15._0_8_ = param_3;
  auVar15._9_7_ = 0;
                    /* try { // try from 0063150c to 007315cf has its CatchHandler @ 006304b8 */
  return auVar15;
}


