/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006347f0
 * Function: FUN_006347f0
 * Signature: undefined FUN_006347f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x006352e0) */
/* WARNING: Removing unreachable block (ram,0x0063546c) */
/* WARNING: Removing unreachable block (ram,0x00635480) */
/* WARNING: Removing unreachable block (ram,0x00635488) */
/* WARNING: Removing unreachable block (ram,0x006354ac) */
/* WARNING: Removing unreachable block (ram,0x00635498) */
/* WARNING: Removing unreachable block (ram,0x006354a4) */
/* WARNING: Removing unreachable block (ram,0x006353f4) */
/* WARNING: Removing unreachable block (ram,0x00635454) */
/* WARNING: Removing unreachable block (ram,0x006353fc) */
/* WARNING: Removing unreachable block (ram,0x00635400) */
/* WARNING: Removing unreachable block (ram,0x00635410) */
/* WARNING: Removing unreachable block (ram,0x00635438) */
/* WARNING: Removing unreachable block (ram,0x00635444) */
/* WARNING: Removing unreachable block (ram,0x00635450) */
/* WARNING: Removing unreachable block (ram,0x00634dd0) */
/* WARNING: Removing unreachable block (ram,0x00635290) */
/* WARNING: Removing unreachable block (ram,0x00634ddc) */
/* WARNING: Removing unreachable block (ram,0x00634df4) */
/* WARNING: Removing unreachable block (ram,0x00634dfc) */
/* WARNING: Removing unreachable block (ram,0x0063529c) */
/* WARNING: Removing unreachable block (ram,0x0063545c) */
/* WARNING: Removing unreachable block (ram,0x00634b6c) */
/* WARNING: Removing unreachable block (ram,0x00634b70) */
/* WARNING: Removing unreachable block (ram,0x00635468) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_006347f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                    /* try { // try from 00634814 to 007348ab has its CatchHandler @ 00634510 */
  FUN_0062d354(param_6 + 0xd0);
  lVar7 = FUN_00632504(auStack_28,param_6 + 0xd0);
  local_10 = PTR_DAT_007e5de8 + 0x18;
  if (*(char *)(lVar7 + 0x20) != '\0') {
    FUN_00667088(&local_10,0x20);
  }
  local_8 = PTR_DAT_007e5de8 + 0x18;
  FUN_00667088(&local_8,0x20);
                    /* try { // try from 006348ac to 007348e7 has its CatchHandler @ 00634960 */
  local_18 = *(undefined4 *)(lVar7 + 0x60);
  lVar9 = 0;
  bVar1 = (byte)local_18;
                    /* try { // try from 006348e8 to 00734973 has its CatchHandler @ 00634510 */
  while( true ) {
    if (bVar1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00634924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*(code *)(&UNK_00634928 + (long)*(short *)(&DAT_0069de14 + (ulong)bVar1 * 2) * 4))
                          ();
      return auVar10;
    }
    if (3 < (int)lVar9 + 1) break;
    bVar1 = *(byte *)((long)&local_18 + lVar9 + 1);
    lVar9 = lVar9 + 1;
  }
  if ((1 < *(ulong *)(local_8 + -0x18)) && (lVar9 = FUN_0066857c(&local_8,0x30,0), lVar9 != 0)) {
    if (lVar9 == -1) {
      lVar9 = *(long *)(local_8 + -0x18) + -1;
    }
    FUN_00668f74(&local_8,0,lVar9);
  }
  if (*(long *)(local_10 + -0x18) != 0) {
    FUN_00667890(&local_10,0);
    cVar4 = FUN_0063ca8c(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),&local_10);
                    /* try { // try from 006352fc to 0073532b has its CatchHandler @ 00635684 */
    if (cVar4 == '\0') {
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
    if (local_8 + -0x18 != PTR_DAT_007e5de8) goto LAB_00635500;
LAB_00634bc0:
    puVar8 = local_10 + -0x18;
    if (puVar8 == PTR_DAT_007e5de8) goto LAB_00634bd4;
  }
  else {
    if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_00634bc0;
LAB_00635500:
    FUN_0062b45c(local_8 + -0x18,auStack_20);
                    /* catch() { ... } // from try @ 00635350 with catch @ 0063550c */
    puVar8 = local_10 + -0x18;
    if (puVar8 == PTR_DAT_007e5de8) goto LAB_00634bd4;
  }
  FUN_0062b45c(puVar8,&local_8);
LAB_00634bd4:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = uVar2;
  return auVar10;
}


