/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00653630
 * Function: FUN_00653630
 * Signature: undefined FUN_00653630(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00653630(undefined8 param_1,undefined8 param_2,long *param_3,char param_4,long param_5,
            undefined4 param_6,undefined1 param_7)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
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
  
  lVar5 = FUN_0063c4d0(&DAT_007fd2a8);
  lVar15 = *(long *)(*(long *)(param_5 + 0xd0) + 0x18);
  lVar16 = *(long *)(lVar15 + lVar5 * 8);
  if (lVar16 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00653904 with catch @ 006538e4
                       catch(type#1 @ 00000000) { ... } // from try @ 00653964 with catch @ 006538e4
                        */
    puVar8 = operator_new(0x150);
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR_FUN_007b7c80;
                    /* try { // try from 006538fc to 00753903 has its CatchHandler @ 00653940 */
    puVar8[2] = 0;
                    /* try { // try from 00653904 to 0075394f has its CatchHandler @ 006538e4 */
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
    lVar16 = *(long *)(lVar15 + lVar5 * 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006538fc with catch @ 00653940
                        */
  }
  lVar5 = *(long *)(param_5 + 8);
  iVar9 = (int)lVar5;
  if (lVar5 < 0) {
    iVar9 = 6;
    lVar5 = 6;
  }
  FUN_0063c9c4(param_5,auStack_10,param_7);
  iVar4 = iVar9 + 0x42;
  if ((*(uint *)(param_5 + 0x18) >> 2 & 1) != 0) {
    iVar4 = iVar9 + 0x1348;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006536f4 with catch @ 006536d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00653754 with catch @ 006536d4
                        */
  lVar15 = -((long)iVar4 + 0x1eU & 0xfffffffffffffff0);
  local_18 = FUN_0063be10();
                    /* try { // try from 006536ec to 007536f3 has its CatchHandler @ 00653730 */
                    /* try { // try from 006536f4 to 0075373f has its CatchHandler @ 006536d4 */
  local_1c = FUN_0062ba00(param_1,&local_18,&stack0xffffffffffffff60 + lVar15,0,auStack_10,lVar5);
  plVar6 = (long *)FUN_0064f6ac(param_5 + 0xd0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006536ec with catch @ 00653730
                        */
  lVar5 = -((long)local_1c * 4 + 0x1eU & 0xfffffffffffffff0);
                    /* try { // try from 00653740 to 0075374b has its CatchHandler @ 0065374c */
  (**(code **)(*plVar6 + 0x58))
            (plVar6,&stack0xffffffffffffff60 + lVar15,&stack0xffffffffffffff60 + local_1c + lVar15,
             &stack0xffffffffffffff60 + lVar5 + lVar15);
  iVar9 = local_1c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00653740 with catch @ 0065374c
                        */
                    /* try { // try from 00653750 to 00753753 has its CatchHandler @ 0065375c */
                    /* try { // try from 00653754 to 0075375f has its CatchHandler @ 006536d4 */
  sVar12 = (size_t)local_1c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00653750 with catch @ 0065375c
                        */
  pvVar7 = memchr(&stack0xffffffffffffff60 + lVar15,0x2e,sVar12);
  if (pvVar7 == (void *)0x0) {
    puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar15;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00653854 with catch @ 00653834
                       catch(type#1 @ 00000000) { ... } // from try @ 006538b4 with catch @ 00653834
                        */
                    /* try { // try from 0065384c to 00753853 has its CatchHandler @ 00653890 */
    if ((*(char *)(lVar16 + 0x20) == '\0') ||
       ((2 < iVar9 &&
        (((puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar15,
          0x39 < (byte)(&stack0xffffffffffffff61)[lVar15] ||
          (puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar15,
          9 < (byte)((&stack0xffffffffffffff62)[lVar15] - 0x30))) ||
         (puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar15,
         (byte)(&stack0xffffffffffffff61)[lVar15] < 0x30)))))) goto LAB_00653780;
                    /* try { // try from 00653854 to 0075389f has its CatchHandler @ 00653834 */
    puVar10 = (undefined1 *)0x0;
  }
  else {
    cVar2 = *(char *)(lVar16 + 0x20);
    puVar10 = &stack0xffffffffffffff60 +
              ((long)pvVar7 - (long)(&stack0xffffffffffffff60 + lVar15)) * 4 + lVar5 + lVar15;
    *(undefined4 *)
     (&stack0xffffffffffffff60 +
     ((long)pvVar7 - (long)(&stack0xffffffffffffff60 + lVar15)) * 4 + lVar5 + lVar15) =
         *(undefined4 *)(lVar16 + 0x48);
    puVar14 = &stack0xffffffffffffff60 + lVar5 + lVar15;
    if (cVar2 == '\0') goto LAB_00653780;
  }
  lVar3 = -(sVar12 * 8 + 0x1e & 0xfffffffffffffff0);
  bVar1 = ((&stack0xffffffffffffff60)[lVar15] - 0x2b & 0xfd) == 0;
  if (bVar1) {
    *(undefined4 *)(&stack0xffffffffffffff60 + lVar3 + lVar5 + lVar15) =
         *(undefined4 *)(&stack0xffffffffffffff60 + lVar5 + lVar15);
    lVar11 = 4;
    local_1c = iVar9 + -1;
  }
  else {
    lVar11 = 0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065384c with catch @ 00653890
                        */
                    /* try { // try from 006538a0 to 007538ab has its CatchHandler @ 006538ac */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006538a0 with catch @ 006538ac
                        */
  FUN_00651f08(param_2,*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18),
               *(undefined4 *)(lVar16 + 0x4c),puVar10,
               &stack0xffffffffffffff60 + lVar11 + lVar3 + lVar5 + lVar15,
               &stack0xffffffffffffff60 + lVar11 + lVar5 + lVar15,&local_1c);
                    /* try { // try from 006538b0 to 007538b3 has its CatchHandler @ 006538bc */
                    /* try { // try from 006538b4 to 007538bf has its CatchHandler @ 00653834 */
  local_1c = (uint)bVar1 + local_1c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006538b0 with catch @ 006538bc
                        */
  sVar12 = (size_t)local_1c;
  puVar14 = &stack0xffffffffffffff60 + lVar3 + lVar5 + lVar15;
LAB_00653780:
  lVar5 = *(long *)(param_5 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006537a4 with catch @ 00653784
                       catch(type#1 @ 00000000) { ... } // from try @ 00653804 with catch @ 00653784
                        */
  sVar13 = sVar12;
  puVar10 = puVar14;
  if ((long)sVar12 < lVar5) {
                    /* try { // try from 0065379c to 007537a3 has its CatchHandler @ 006537e0 */
                    /* try { // try from 006537a4 to 007537ef has its CatchHandler @ 00653784 */
    lVar15 = -(lVar5 * 4 + 0x1eU & 0xfffffffffffffff0);
    puVar10 = puVar14 + lVar15;
    sVar13 = (size_t)(int)lVar5;
    FUN_006530a4(param_5,param_6,(long)puVar14 + lVar15,puVar14,lVar5,sVar12);
    local_1c = (int)lVar5;
  }
  *(undefined8 *)(param_5 + 0x10) = 0;
  if (param_4 == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065379c with catch @ 006537e0
                        */
    sVar12 = (**(code **)(*param_3 + 0x60))(param_3,puVar10,sVar13);
    param_4 = sVar13 != sVar12;
                    /* try { // try from 006537f0 to 007537fb has its CatchHandler @ 006537fc */
  }
  auVar17[8] = param_4;
  auVar17._0_8_ = param_3;
  auVar17._9_7_ = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006537f0 with catch @ 006537fc
                        */
                    /* try { // try from 00653800 to 00753803 has its CatchHandler @ 0065380c */
                    /* try { // try from 00653804 to 0075380f has its CatchHandler @ 00653784 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00653800 with catch @ 0065380c
                        */
  return auVar17;
}


