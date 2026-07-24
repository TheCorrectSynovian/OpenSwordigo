/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006007a0
 * Function: FUN_006007a0
 * Signature: undefined FUN_006007a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006007a0(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_e8 [80];
  undefined1 auStack_98 [80];
  undefined8 local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(undefined8 *)(lVar7 + 0x28);
  FUN_005ef46c(auStack_e8,*(long *)(param_1 + 0x50) + 0x18,0x50);
  uVar4 = FUN_005ef3d4(*(undefined8 *)(param_1 + 0x38),"%s:%d: %s",auStack_e8,
                       *(undefined4 *)(param_1 + 4),param_2);
  if (param_3 == 0) goto LAB_00600930;
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  if (param_3 - 0x11cU < 3) {
    plVar12 = *(long **)(param_1 + 0x48);
    lVar7 = plVar12[1];
    uVar2 = plVar12[2];
    uVar9 = lVar7 + 1;
    if (uVar2 < uVar9) {
      if (0x7ffffffffffffffd < uVar2) {
        FUN_005ef46c(auStack_98,*(long *)(param_1 + 0x50) + 0x18,0x50);
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0x38),"%s:%d: %s",auStack_98,
                     *(undefined4 *)(param_1 + 4),"lexical element too long");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0x38),3);
      }
      lVar11 = uVar2 * 2;
      if (lVar11 == -2) {
        lVar5 = FUN_005eede0();
      }
      else {
        lVar5 = FUN_005eed74(uVar10,*plVar12,uVar2,lVar11);
      }
      lVar7 = plVar12[1];
      *plVar12 = lVar5;
      plVar12[2] = lVar11;
      uVar9 = lVar7 + 1;
    }
    else {
      lVar5 = *plVar12;
    }
    plVar12[1] = uVar9;
    *(undefined1 *)(lVar5 + lVar7) = 0;
    ppuVar8 = *(undefined ***)(param_1 + 0x48);
LAB_00600918:
    puVar6 = *ppuVar8;
  }
  else {
    if (0x100 < param_3) {
                    /* try { // try from 006008dc to 007008e3 has its CatchHandler @ 006008e8 */
                    /* try { // try from 006008e4 to 00700a7f has its CatchHandler @ 006005d0 */
                    /* catch() { ... } // from try @ 006008dc with catch @ 006008e8 */
      ppuVar8 = &PTR_ByteCount_007d8490 + param_3;
                    /* catch() { ... } // from try @ 00600694 with catch @ 006008ec */
      goto LAB_00600918;
    }
    iVar3 = iscntrl(param_3);
                    /* catch() { ... } // from try @ 006006c4 with catch @ 006008b8 */
    pcVar1 = "%c";
    if (iVar3 != 0) {
      pcVar1 = "char(%d)";
    }
    puVar6 = (undefined *)FUN_005ef3d4(uVar10,pcVar1,param_3);
  }
  FUN_005ef3d4(uVar10,"%s near \'%s\'",uVar4,puVar6);
LAB_00600930:
                    /* WARNING: Subroutine does not return */
  FUN_005eb814(*(undefined8 *)(param_1 + 0x38),3);
}


