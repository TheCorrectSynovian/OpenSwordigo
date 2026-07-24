/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621f50
 * Function: FUN_00621f50
 * Signature: undefined FUN_00621f50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_00621f50(long param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar7;
  
                    /* catch() { ... } // from try @ 006212b0 with catch @ 00621f6c */
  if (param_2 < 8) {
    iVar10 = 8;
    puVar4 = (undefined8 *)(param_1 + 0x40);
  }
  else {
    if (param_2 == 0x7fffffff) {
                    /* catch() { ... } // from try @ 00621000 with catch @ 0062202c */
      uVar3 = *(uint *)(param_1 + 0x20) | 1;
      *(uint *)(param_1 + 0x20) = uVar3;
      if ((uVar3 & *(uint *)(param_1 + 0x1c)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665ad8("ios_base::_M_grow_words is not valid");
      }
      if (param_3 == '\0') {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
                    /* catch() { ... } // from try @ 00620f54 with catch @ 0062205c */
      return (undefined8 *)(param_1 + 0x30);
    }
    iVar10 = param_2 + 1;
    lVar9 = (long)iVar10;
    puVar4 = operator_new__(lVar9 << 4);
                    /* catch() { ... } // from try @ 00621204 with catch @ 00621f9c */
    puVar5 = puVar4;
    do {
      *puVar5 = 0;
      lVar9 = lVar9 + -1;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    } while (lVar9 != 0);
    iVar2 = *(int *)(param_1 + 0xc0);
    if (iVar2 < 1) {
      puVar5 = *(undefined8 **)(param_1 + 200);
    }
    else {
                    /* catch() { ... } // from try @ 00621158 with catch @ 00621fcc */
      puVar5 = *(undefined8 **)(param_1 + 200);
      puVar6 = puVar5;
      puVar8 = puVar4;
      do {
        puVar7 = puVar6 + 2;
        uVar1 = puVar6[1];
        *puVar8 = *puVar6;
        puVar8[1] = uVar1;
        puVar6 = puVar7;
        puVar8 = puVar8 + 2;
      } while (puVar7 != puVar5 + ((ulong)(iVar2 - 1) + 1) * 2);
    }
    if ((puVar5 != (undefined8 *)0x0) && ((undefined8 *)(param_1 + 0x40) != puVar5)) {
                    /* catch() { ... } // from try @ 006210ac with catch @ 00621ffc */
      operator_delete__(puVar5);
    }
  }
  *(undefined8 **)(param_1 + 200) = puVar4;
  *(int *)(param_1 + 0xc0) = iVar10;
  return puVar4 + (long)param_2 * 2;
}


