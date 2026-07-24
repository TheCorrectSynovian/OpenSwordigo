/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006577b8
 * Function: FUN_006577b8
 * Signature: undefined FUN_006577b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x006582b4) */
/* WARNING: Removing unreachable block (ram,0x00658474) */
/* WARNING: Removing unreachable block (ram,0x00658488) */
/* WARNING: Removing unreachable block (ram,0x00658490) */
/* WARNING: Removing unreachable block (ram,0x006584b4) */
/* WARNING: Removing unreachable block (ram,0x006584a0) */
/* WARNING: Removing unreachable block (ram,0x006584ac) */
/* WARNING: Removing unreachable block (ram,0x006583fc) */
/* WARNING: Removing unreachable block (ram,0x0065845c) */
/* WARNING: Removing unreachable block (ram,0x00658404) */
/* WARNING: Removing unreachable block (ram,0x00658408) */
/* WARNING: Removing unreachable block (ram,0x00658418) */
/* WARNING: Removing unreachable block (ram,0x00658440) */
/* WARNING: Removing unreachable block (ram,0x0065844c) */
/* WARNING: Removing unreachable block (ram,0x00658458) */
/* WARNING: Removing unreachable block (ram,0x00657dd0) */
/* WARNING: Removing unreachable block (ram,0x00658264) */
/* WARNING: Removing unreachable block (ram,0x00657ddc) */
/* WARNING: Removing unreachable block (ram,0x00657df4) */
/* WARNING: Removing unreachable block (ram,0x00657dfc) */
/* WARNING: Removing unreachable block (ram,0x00658270) */
/* WARNING: Removing unreachable block (ram,0x00658464) */
/* WARNING: Removing unreachable block (ram,0x00657ae8) */
/* WARNING: Removing unreachable block (ram,0x00657aec) */
/* WARNING: Removing unreachable block (ram,0x00658470) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_006577b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_0064f6ac(param_6 + 0xd0);
  lVar7 = FUN_00654804(auStack_28,param_6 + 0xd0);
  local_10 = PTR_DAT_007e5de8 + 0x18;
  if (*(char *)(lVar7 + 0x20) != '\0') {
    FUN_00667088(&local_10,0x20);
  }
  local_8 = PTR_DAT_007e5de8 + 0x18;
  FUN_00667088(&local_8,0x20);
  local_58 = 0;
  local_18 = *(undefined4 *)(lVar7 + 0x68);
  bVar1 = (byte)local_18;
  while( true ) {
    if (bVar1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x006578f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*(code *)(&UNK_006578f4 + (long)*(short *)(&DAT_0069f034 + (ulong)bVar1 * 2) * 4))
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
    if (local_8 + -0x18 != PTR_DAT_007e5de8) goto LAB_00658500;
LAB_00657b3c:
    puVar8 = local_10 + -0x18;
    if (puVar8 == PTR_DAT_007e5de8) goto LAB_00657b50;
  }
  else {
    if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_00657b3c;
LAB_00658500:
    FUN_0064d8e0(local_8 + -0x18,auStack_20);
    puVar8 = local_10 + -0x18;
    if (puVar8 == PTR_DAT_007e5de8) goto LAB_00657b50;
  }
  FUN_0064d8e0(puVar8,&local_8);
LAB_00657b50:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = uVar2;
  return auVar10;
}


