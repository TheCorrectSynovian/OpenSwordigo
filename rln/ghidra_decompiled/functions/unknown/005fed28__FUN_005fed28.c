/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fed28
 * Function: FUN_005fed28
 * Signature: undefined FUN_005fed28(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fed28(long param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* catch() { ... } // from try @ 005fdfd0 with catch @ 005fed3c */
  switch(*param_2) {
  case 6:
    if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)(param_1 + 0x4a) <= param_3[2])) {
                    /* catch() { ... } // from try @ 005fdf10 with catch @ 005fed8c */
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    }
    FUN_005fe674(param_1,param_3,param_2[2]);
    return;
  case 7:
    FUN_005fe488(param_1,param_3);
    if (*param_3 == 0xc) {
      iVar2 = param_3[2];
                    /* catch() { ... } // from try @ 005fe468 with catch @ 005fee4c
                       catch() { ... } // from try @ 005fe4f8 with catch @ 005fee4c */
                    /* catch() { ... } // from try @ 005fe1c4 with catch @ 005fee50
                       catch() { ... } // from try @ 005fe258 with catch @ 005fee50 */
                    /* catch() { ... } // from try @ 005fe100 with catch @ 005fee54
                       catch() { ... } // from try @ 005fe198 with catch @ 005fee54 */
      if (param_3[4] != param_3[5]) {
                    /* catch() { ... } // from try @ 005fdf84 with catch @ 005fee58
                       catch() { ... } // from try @ 005fe018 with catch @ 005fee58 */
                    /* catch() { ... } // from try @ 005fdec0 with catch @ 005fee5c
                       catch() { ... } // from try @ 005fdf58 with catch @ 005fee5c */
                    /* catch() { ... } // from try @ 005fe54c with catch @ 005fee60 */
        if (iVar2 < (int)(uint)*(byte *)(param_1 + 0x4a)) goto LAB_005feea8;
                    /* catch() { ... } // from try @ 005fe2ac with catch @ 005fee64 */
        FUN_005fe674(param_1,param_3);
        goto LAB_005feeb4;
      }
    }
    else {
LAB_005feea8:
      FUN_005fe5c0(param_1,param_3);
LAB_005feeb4:
                    /* catch() { ... } // from try @ 005fe06c with catch @ 005feeb4 */
      iVar2 = param_3[2];
    }
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 8);
    uVar1 = iVar2 << 6 | param_2[2] << 0x17 | 8;
    break;
  case 8:
    FUN_005fe488(param_1,param_3);
    if (*param_3 == 0xc) {
      iVar2 = param_3[2];
      if (param_3[4] != param_3[5]) {
                    /* catch() { ... } // from try @ 005fe89c with catch @ 005feddc */
                    /* catch() { ... } // from try @ 005fe9d4 with catch @ 005fede0
                       catch() { ... } // from try @ 005fea64 with catch @ 005fede0 */
                    /* catch() { ... } // from try @ 005feac4 with catch @ 005fede4 */
        if (iVar2 < (int)(uint)*(byte *)(param_1 + 0x4a)) goto LAB_005fee78;
                    /* catch() { ... } // from try @ 005fe340 with catch @ 005fede8 */
                    /* catch() { ... } // from try @ 005fe0cc with catch @ 005fedec */
                    /* catch() { ... } // from try @ 005fde8c with catch @ 005fedf0 */
        FUN_005fe674(param_1,param_3);
        goto LAB_005fee84;
      }
    }
    else {
LAB_005fee78:
      FUN_005fe5c0(param_1,param_3);
LAB_005fee84:
      iVar2 = param_3[2];
    }
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 8);
    uVar1 = iVar2 << 6 | param_2[2] << 0xe | 7;
    break;
  case 9:
                    /* catch() { ... } // from try @ 005fe900 with catch @ 005fedfc
                       catch() { ... } // from try @ 005fe9a0 with catch @ 005fedfc */
    iVar2 = FUN_005feb5c(param_1,param_3);
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 8);
    uVar1 = iVar2 << 0xe | param_2[2] << 6 | param_2[3] << 0x17 | 9;
    break;
  default:
    goto switchD_005fed64_default;
  }
  FUN_006001e8(param_1,uVar1,uVar3);
switchD_005fed64_default:
  if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)(param_1 + 0x4a) <= param_3[2])) {
                    /* catch() { ... } // from try @ 005fe394 with catch @ 005fef04
                       catch() { ... } // from try @ 005fe434 with catch @ 005fef04 */
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
  return;
}


