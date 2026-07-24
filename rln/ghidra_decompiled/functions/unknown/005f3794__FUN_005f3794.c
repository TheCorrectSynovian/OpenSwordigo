/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3794
 * Function: FUN_005f3794
 * Signature: undefined FUN_005f3794(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005f3794(undefined8 param_1,long param_2,double *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  double *pdVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  
  iVar4 = -1;
  switch(*(uint *)(param_3 + 1)) {
  case 0:
    goto switchD_005f37d4_caseD_0;
  case 1:
    lVar10 = *(long *)(param_2 + 0x20) +
             (long)(int)((1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U & *(uint *)param_3) *
             0x28;
    break;
  default:
    uVar8 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U | 1;
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = *(uint *)param_3 / uVar8;
    }
    lVar10 = *(long *)(param_2 + 0x20) + (ulong)(*(uint *)param_3 - uVar2 * uVar8) * 0x28;
    break;
  case 3:
    dVar11 = *param_3;
    iVar5 = (int)dVar11;
    iVar4 = iVar5 + -1;
    if (((0 < iVar5) && (dVar11 == (double)iVar5)) && (iVar5 <= *(int *)(param_2 + 0x38)))
    goto switchD_005f37d4_caseD_0;
    if (dVar11 == 0.0) {
      lVar10 = *(long *)(param_2 + 0x20);
    }
    else {
      uVar8 = (int)((ulong)dVar11 >> 0x20) + SUB84(dVar11,0);
      uVar2 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U | 1;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar8 / uVar2;
      }
      lVar10 = *(long *)(param_2 + 0x20) + (ulong)(uVar8 - uVar3 * uVar2) * 0x28;
    }
    break;
  case 4:
    lVar10 = *(long *)(param_2 + 0x20) +
             (long)(int)((1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U &
                        *(uint *)((long)*param_3 + 0xc)) * 0x28;
  }
  do {
    iVar4 = FUN_005eee84((double *)(lVar10 + 0x10),param_3);
                    /* catch() { ... } // from try @ 005f36f4 with catch @ 005f38e0 */
    if ((iVar4 != 0) ||
       (((*(int *)(lVar10 + 0x18) == 0xb && (3 < (int)*(uint *)(param_3 + 1))) &&
        (*(double *)(lVar10 + 0x10) == *param_3)))) {
      iVar4 = *(int *)(param_2 + 0x38) +
              (int)((ulong)(lVar10 - *(long *)(param_2 + 0x20)) >> 3) * -0x33333333;
      goto switchD_005f37d4_caseD_0;
    }
    lVar10 = *(long *)(lVar10 + 0x20);
  } while (lVar10 != 0);
  FUN_005eb320(param_1,"invalid key to \'next\'");
  iVar4 = 0;
switchD_005f37d4_caseD_0:
  iVar5 = *(int *)(param_2 + 0x38);
  uVar8 = iVar4 + 1;
  if ((int)uVar8 < iVar5) {
                    /* catch() { ... } // from try @ 005f36e0 with catch @ 005f3950 */
                    /* catch() { ... } // from try @ 005f3634 with catch @ 005f3954 */
    lVar10 = (long)(int)uVar8;
                    /* catch() { ... } // from try @ 005f35a8 with catch @ 005f3958
                       catch() { ... } // from try @ 005f35ec with catch @ 005f3958 */
    uVar9 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4;
    uVar2 = iVar4 + 2;
    do {
      uVar8 = uVar2;
                    /* catch() { ... } // from try @ 005f35c8 with catch @ 005f3968 */
      if (*(int *)(*(long *)(param_2 + 0x18) + uVar9 + 8) != 0) {
        *param_3 = (double)(int)uVar8;
        *(uint *)(param_3 + 1) = 3;
        pdVar7 = (double *)(*(long *)(param_2 + 0x18) + uVar9);
        goto LAB_005f3a0c;
      }
      lVar10 = lVar10 + 1;
      uVar9 = uVar9 + 0x10;
      uVar2 = uVar8 + 1;
    } while (lVar10 < iVar5);
  }
                    /* try { // try from 005f3988 to 006f39f7 has its CatchHandler @ 005f39fc */
  iVar4 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
  if ((int)(uVar8 - iVar5) < iVar4) {
    lVar10 = (long)(int)(uVar8 - iVar5);
    lVar6 = (long)(int)uVar8 * 0x28 + (long)iVar5 * -0x28;
    do {
      lVar1 = *(long *)(param_2 + 0x20) + lVar6;
      if (*(int *)(lVar1 + 8) != 0) {
                    /* try { // try from 005f39f8 to 006f3c3f has its CatchHandler @ 005f3374 */
        *param_3 = *(double *)(lVar1 + 0x10);
                    /* catch() { ... } // from try @ 005f3988 with catch @ 005f39fc */
                    /* catch() { ... } // from try @ 005f3568 with catch @ 005f3a00 */
        *(uint *)(param_3 + 1) = *(uint *)(lVar1 + 0x18);
        pdVar7 = (double *)(*(long *)(param_2 + 0x20) + lVar6);
LAB_005f3a0c:
        param_3[2] = *pdVar7;
        *(uint *)(param_3 + 3) = *(uint *)(pdVar7 + 1);
        return 1;
      }
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar10 < iVar4);
  }
  return 0;
}


