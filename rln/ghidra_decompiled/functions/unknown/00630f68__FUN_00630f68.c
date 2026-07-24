/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00630f68
 * Function: FUN_00630f68
 * Signature: undefined FUN_00630f68(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00630f68(undefined8 param_1,undefined8 param_2,long *param_3,char param_4,long param_5,
            undefined1 param_6,undefined1 param_7)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  size_t sVar10;
  size_t sVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  int local_1c;
  undefined8 local_18;
  undefined1 auStack_10 [16];
  
                    /* try { // try from 00630f70 to 00730f83 has its CatchHandler @ 00631640 */
  lVar4 = FUN_0063c4d0(&DAT_007fbdd0);
  lVar14 = *(long *)(*(long *)(param_5 + 0xd0) + 0x18);
  lVar12 = *(long *)(lVar14 + lVar4 * 8);
  if (lVar12 == 0) {
    puVar7 = operator_new(0x90);
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_007b70c0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    *(undefined1 *)(puVar7 + 9) = 0;
    *(undefined1 *)((long)puVar7 + 0x49) = 0;
    *(undefined1 *)(puVar7 + 0x11) = 0;
    FUN_0062dbf0(puVar7,param_5 + 0xd0);
    FUN_0063c340(*(undefined8 *)(param_5 + 0xd0),puVar7,lVar4);
                    /* try { // try from 006312b4 to 007312e3 has its CatchHandler @ 00631638 */
    lVar12 = *(long *)(lVar14 + lVar4 * 8);
  }
  lVar4 = *(long *)(param_5 + 8);
  iVar8 = (int)lVar4;
  if (lVar4 < 0) {
    iVar8 = 6;
    lVar4 = 6;
  }
  FUN_0063c9c4(param_5,auStack_10,param_7);
  iVar2 = iVar8 + 0x1e;
  if ((*(uint *)(param_5 + 0x18) & 4) != 0) {
    iVar2 = iVar8 + 0x138;
  }
  lVar14 = -((long)iVar2 + 0x1eU & 0xfffffffffffffff0);
  local_18 = FUN_0063be10();
  local_1c = FUN_0062ba00(param_1,&local_18,&stack0xffffffffffffff60 + lVar14,0,auStack_10,lVar4);
  plVar5 = (long *)FUN_0062d354(param_5 + 0xd0);
  iVar8 = local_1c;
  sVar10 = (size_t)local_1c;
  lVar4 = -(sVar10 + 0x1e & 0xfffffffffffffff0);
  if ((char)plVar5[7] == '\x01') {
    memcpy(&stack0xffffffffffffff60 + lVar4 + lVar14,&stack0xffffffffffffff60 + lVar14,sVar10);
  }
  else {
    if ((char)plVar5[7] == '\0') {
      FUN_0061fea0();
    }
    (**(code **)(*plVar5 + 0x38))
              (plVar5,&stack0xffffffffffffff60 + lVar14,&stack0xffffffffffffff60 + sVar10 + lVar14,
               &stack0xffffffffffffff60 + lVar4 + lVar14);
    sVar10 = (size_t)local_1c;
    iVar8 = local_1c;
  }
  pvVar6 = memchr(&stack0xffffffffffffff60 + lVar14,0x2e,sVar10);
  if (pvVar6 == (void *)0x0) {
    puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14;
    if ((*(char *)(lVar12 + 0x20) == '\0') ||
       ((2 < iVar8 &&
        (((puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14,
          0x39 < (byte)(&stack0xffffffffffffff61)[lVar14] ||
          (puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14,
          9 < (byte)((&stack0xffffffffffffff62)[lVar14] - 0x30))) ||
         (puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14,
         (byte)(&stack0xffffffffffffff61)[lVar14] < 0x30)))))) goto LAB_006310e0;
    puVar9 = (undefined1 *)0x0;
  }
  else {
                    /* try { // try from 006310cc to 007310d3 has its CatchHandler @ 00631998 */
    puVar9 = (undefined1 *)
             ((long)pvVar6 +
             (long)(&stack0xffffffffffffff60 + (lVar4 - (long)&stack0xffffffffffffff60)));
                    /* try { // try from 006310d4 to 007310e7 has its CatchHandler @ 00631938 */
    *(undefined1 *)
     ((long)pvVar6 + (long)(&stack0xffffffffffffff60 + (lVar4 - (long)&stack0xffffffffffffff60))) =
         *(undefined1 *)(lVar12 + 0x48);
    puVar13 = &stack0xffffffffffffff60 + lVar4 + lVar14;
    if (*(char *)(lVar12 + 0x20) == '\0') goto LAB_006310e0;
  }
  lVar3 = -(sVar10 * 2 + 0x1e & 0xfffffffffffffff0);
  bVar1 = ((&stack0xffffffffffffff60)[lVar14] - 0x2b & 0xfd) == 0;
  if (bVar1) {
    (&stack0xffffffffffffff60)[lVar3 + lVar4 + lVar14] = (&stack0xffffffffffffff60)[lVar4 + lVar14];
    local_1c = iVar8 + -1;
  }
  FUN_0062fe5c(param_2,*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),
               *(undefined1 *)(lVar12 + 0x49),puVar9,
               &stack0xffffffffffffff60 + (ulong)bVar1 + lVar3 + lVar4 + lVar14,
               &stack0xffffffffffffff60 + (ulong)bVar1 + lVar4 + lVar14,&local_1c);
  local_1c = (uint)bVar1 + local_1c;
  sVar10 = (size_t)local_1c;
  puVar13 = &stack0xffffffffffffff60 + lVar3 + lVar4 + lVar14;
LAB_006310e0:
  lVar4 = *(long *)(param_5 + 0x10);
                    /* try { // try from 006310e8 to 007310f3 has its CatchHandler @ 006318a8 */
  sVar11 = sVar10;
  puVar9 = puVar13;
  if ((long)sVar10 < lVar4) {
                    /* try { // try from 006310f4 to 00731107 has its CatchHandler @ 0063181c */
    lVar12 = -(lVar4 + 0x1eU & 0xfffffffffffffff0);
    puVar9 = puVar13 + lVar12;
    sVar11 = (size_t)(int)lVar4;
                    /* try { // try from 00631118 to 0073112b has its CatchHandler @ 006317c0 */
    FUN_00630d30(param_5,param_6,(long)puVar13 + lVar12,puVar13,lVar4,sVar10);
    local_1c = (int)lVar4;
  }
  *(undefined8 *)(param_5 + 0x10) = 0;
  if (param_4 == '\0') {
    sVar10 = (**(code **)(*param_3 + 0x60))(param_3,puVar9,sVar11);
    param_4 = sVar10 != sVar11;
  }
  auVar15[8] = param_4;
  auVar15._0_8_ = param_3;
  auVar15._9_7_ = 0;
                    /* try { // try from 0063116c to 00731203 has its CatchHandler @ 00631b34 */
  return auVar15;
}


