/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006569ec
 * Function: FUN_006569ec
 * Signature: undefined FUN_006569ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x006574e8) */
/* WARNING: Removing unreachable block (ram,0x006576a8) */
/* WARNING: Removing unreachable block (ram,0x006576bc) */
/* WARNING: Removing unreachable block (ram,0x006576c4) */
/* WARNING: Removing unreachable block (ram,0x006576e8) */
/* WARNING: Removing unreachable block (ram,0x006576d4) */
/* WARNING: Removing unreachable block (ram,0x006576e0) */
/* WARNING: Removing unreachable block (ram,0x00657630) */
/* WARNING: Removing unreachable block (ram,0x00657690) */
/* WARNING: Removing unreachable block (ram,0x00657638) */
/* WARNING: Removing unreachable block (ram,0x0065763c) */
/* WARNING: Removing unreachable block (ram,0x0065764c) */
/* WARNING: Removing unreachable block (ram,0x00657674) */
/* WARNING: Removing unreachable block (ram,0x00657680) */
/* WARNING: Removing unreachable block (ram,0x0065768c) */
/* WARNING: Removing unreachable block (ram,0x00657004) */
/* WARNING: Removing unreachable block (ram,0x00657498) */
/* WARNING: Removing unreachable block (ram,0x00657010) */
/* WARNING: Removing unreachable block (ram,0x00657028) */
/* WARNING: Removing unreachable block (ram,0x00657030) */
/* WARNING: Removing unreachable block (ram,0x006574a4) */
/* WARNING: Removing unreachable block (ram,0x00657698) */
/* WARNING: Removing unreachable block (ram,0x00656d1c) */
/* WARNING: Removing unreachable block (ram,0x00656d20) */
/* WARNING: Removing unreachable block (ram,0x006576a4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_006569ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  long local_58;
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
                    /* catch() { ... } // from try @ 006569ac with catch @ 006569fc */
                    /* catch() { ... } // from try @ 0065698c with catch @ 00656a00 */
                    /* catch() { ... } // from try @ 0065696c with catch @ 00656a04 */
  FUN_0064f6ac(param_6 + 0xd0);
  lVar7 = FUN_00654914(auStack_28,param_6 + 0xd0);
  local_10 = PTR_DAT_007e5de8 + 0x18;
  if (*(char *)(lVar7 + 0x20) != '\0') {
    FUN_00667088(&local_10,0x20);
  }
  local_8 = PTR_DAT_007e5de8 + 0x18;
                    /* catch() { ... } // from try @ 00656954 with catch @ 00656aa0 */
  FUN_00667088(&local_8,0x20);
  local_58 = 0;
  local_18 = *(undefined4 *)(lVar7 + 0x68);
  bVar1 = (byte)local_18;
  while( true ) {
    if (bVar1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00656b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*(code *)(&UNK_00656b28 + (long)*(short *)(&DAT_0069f028 + (ulong)bVar1 * 2) * 4))
                          ();
      return auVar10;
    }
    if (3 < (int)local_58 + 1) break;
    bVar1 = *(byte *)((long)&local_18 + local_58 + 1);
    local_58 = local_58 + 1;
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
    if (cVar4 == '\0') {
      *param_7 = *param_7 | 4;
    }
  }
  FUN_00667bd4(param_8,&local_8);
  iVar5 = FUN_00654b08(&local_40);
  iVar6 = FUN_00654b08(&local_50);
  uVar3 = local_38;
  uVar2 = local_40;
  if ((iVar6 == -1) == (iVar5 == -1)) {
    *param_7 = *param_7 | 2;
    if (local_8 + -0x18 != PTR_DAT_007e5de8) goto LAB_0065773c;
LAB_00656d70:
    puVar8 = local_10 + -0x18;
    if (puVar8 == PTR_DAT_007e5de8) goto LAB_00656d84;
  }
  else {
    if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_00656d70;
LAB_0065773c:
    FUN_0064d8e0(local_8 + -0x18,auStack_20);
    puVar8 = local_10 + -0x18;
    if (puVar8 == PTR_DAT_007e5de8) goto LAB_00656d84;
  }
  FUN_0064d8e0(puVar8,&local_8);
LAB_00656d84:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = uVar2;
  return auVar10;
}


