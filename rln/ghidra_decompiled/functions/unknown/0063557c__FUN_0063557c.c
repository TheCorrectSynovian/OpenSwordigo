/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063557c
 * Function: FUN_0063557c
 * Signature: undefined FUN_0063557c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x0063606c) */
/* WARNING: Removing unreachable block (ram,0x006361f8) */
/* WARNING: Removing unreachable block (ram,0x0063620c) */
/* WARNING: Removing unreachable block (ram,0x00636214) */
/* WARNING: Removing unreachable block (ram,0x00636238) */
/* WARNING: Removing unreachable block (ram,0x00636224) */
/* WARNING: Removing unreachable block (ram,0x00636230) */
/* WARNING: Removing unreachable block (ram,0x00636180) */
/* WARNING: Removing unreachable block (ram,0x006361e0) */
/* WARNING: Removing unreachable block (ram,0x00636188) */
/* WARNING: Removing unreachable block (ram,0x0063618c) */
/* WARNING: Removing unreachable block (ram,0x0063619c) */
/* WARNING: Removing unreachable block (ram,0x006361c4) */
/* WARNING: Removing unreachable block (ram,0x006361d0) */
/* WARNING: Removing unreachable block (ram,0x006361dc) */
/* WARNING: Removing unreachable block (ram,0x00635b5c) */
/* WARNING: Removing unreachable block (ram,0x0063601c) */
/* WARNING: Removing unreachable block (ram,0x00635b68) */
/* WARNING: Removing unreachable block (ram,0x00635b80) */
/* WARNING: Removing unreachable block (ram,0x00635b88) */
/* WARNING: Removing unreachable block (ram,0x00636028) */
/* WARNING: Removing unreachable block (ram,0x006361e8) */
/* WARNING: Removing unreachable block (ram,0x006358f8) */
/* WARNING: Removing unreachable block (ram,0x006358fc) */
/* WARNING: Removing unreachable block (ram,0x006361f4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_0063557c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,uint *param_7,undefined8 param_8)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined *local_10;
  undefined *local_8;
  
  local_50 = param_4;
  uStack_48 = param_5;
  local_40 = param_2;
  local_38 = param_3;
                    /* catch() { ... } // from try @ 00634fb4 with catch @ 006355b0 */
  FUN_0062d354(param_6 + 0xd0);
                    /* catch() { ... } // from try @ 00634f44 with catch @ 006355c0 */
                    /* catch() { ... } // from try @ 00634ec8 with catch @ 006355c4 */
  lVar7 = FUN_00632614(auStack_28,param_6 + 0xd0);
                    /* catch() { ... } // from try @ 006351d4 with catch @ 006355dc
                       catch() { ... } // from try @ 00635268 with catch @ 006355dc */
  local_10 = PTR_DAT_007e5de8 + 0x18;
  if (*(char *)(lVar7 + 0x20) != '\0') {
                    /* catch() { ... } // from try @ 00634fd4 with catch @ 00635614
                       catch() { ... } // from try @ 00635068 with catch @ 00635614 */
    FUN_00667088(&local_10,0x20);
  }
  local_8 = PTR_DAT_007e5de8 + 0x18;
  FUN_00667088(&local_8,0x20);
  local_18 = *(undefined4 *)(lVar7 + 0x60);
  lVar9 = 0;
  bVar1 = (byte)local_18;
                    /* catch() { ... } // from try @ 00634ebc with catch @ 00635684
                       catch() { ... } // from try @ 00634ed0 with catch @ 00635684
                       catch() { ... } // from try @ 00634f4c with catch @ 00635684
                       catch() { ... } // from try @ 0063510c with catch @ 00635684
                       catch() { ... } // from try @ 006352fc with catch @ 00635684 */
  while( true ) {
    if (bVar1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x006356b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*(code *)(&UNK_006356b4 + (long)*(short *)(&DAT_0069de20 + (ulong)bVar1 * 2) * 4))
                          ();
      return auVar10;
    }
    if (3 < (int)lVar9 + 1) break;
    bVar1 = *(byte *)((long)&local_18 + lVar9 + 1);
    lVar9 = lVar9 + 1;
  }
                    /* try { // try from 00635af4 to 00735aff has its CatchHandler @ 006361d4 */
                    /* try { // try from 00635b00 to 00735b8b has its CatchHandler @ 006358dc */
  if ((1 < *(ulong *)(local_8 + -0x18)) && (lVar9 = FUN_0066857c(&local_8,0x30,0), lVar9 != 0)) {
    if (lVar9 == -1) {
      lVar9 = *(long *)(local_8 + -0x18) + -1;
    }
    FUN_00668f74(&local_8,0,lVar9);
  }
                    /* catch() { ... } // from try @ 00635d68 with catch @ 00636054 */
  if (*(long *)(local_10 + -0x18) != 0) {
    FUN_00667890(&local_10,0);
    cVar4 = FUN_0063ca8c(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),&local_10);
                    /* catch() { ... } // from try @ 00635d60 with catch @ 0063608c */
    if (cVar4 == '\0') {
                    /* catch() { ... } // from try @ 00635cfc with catch @ 00636090 */
                    /* catch() { ... } // from try @ 00635bc0 with catch @ 00636094 */
                    /* catch() { ... } // from try @ 00635a38 with catch @ 00636098 */
      *param_7 = *param_7 | 4;
    }
  }
  FUN_00667bd4(param_8,&local_8);
  iVar5 = FUN_00632808(&local_40);
  iVar6 = FUN_00632808(&local_50);
  uVar3 = local_38;
  uVar2 = local_40;
  if ((iVar6 == -1) == (iVar5 == -1)) {
    *param_7 = *param_7 | 2;
    if (local_8 + -0x18 != PTR_DAT_007e5de8) goto LAB_00636284;
LAB_0063594c:
    puVar8 = local_10 + -0x18;
    if (puVar8 == PTR_DAT_007e5de8) goto LAB_00635960;
  }
  else {
    if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_0063594c;
LAB_00636284:
    FUN_0062b45c(local_8 + -0x18,auStack_20);
    puVar8 = local_10 + -0x18;
    if (puVar8 == PTR_DAT_007e5de8) goto LAB_00635960;
  }
  FUN_0062b45c(puVar8,&local_8);
LAB_00635960:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = uVar2;
  return auVar10;
}


