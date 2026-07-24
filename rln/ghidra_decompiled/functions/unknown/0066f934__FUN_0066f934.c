/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f934
 * Function: FUN_0066f934
 * Signature: undefined FUN_0066f934(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066f934(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  long *plVar8;
  char local_8 [8];
  
  if (param_2 == 1) {
    plVar8 = (long *)FUN_00626d40();
    return plVar8;
  }
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
                    /* try { // try from 0066f970 to 0076f977 has its CatchHandler @ 0066f9c8 */
                    /* try { // try from 0066f978 to 0076f9eb has its CatchHandler @ 0066f8fc */
  if ((param_2 < 1) || (local_8[0] == '\0')) {
                    /* try { // try from 0066fa5c to 0076fa5f has its CatchHandler @ 0066fcec */
    return param_1;
  }
  plVar8 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((int *)plVar8[2] < (int *)plVar8[3]) {
    iVar3 = *(int *)plVar8[2];
  }
  else {
                    /* try { // try from 0066fb3c to 0076fb4b has its CatchHandler @ 0066fc64 */
    iVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
  }
  lVar5 = param_1[1];
  bVar2 = false;
  while( true ) {
    while (param_2 <= lVar5) {
      if ((iVar3 == -1) || (param_2 != 0x7fffffffffffffff)) goto LAB_0066fa70;
      param_1[1] = -0x8000000000000000;
      bVar2 = true;
      lVar5 = -0x8000000000000000;
    }
    if (iVar3 == -1) break;
    piVar7 = (int *)plVar8[3];
                    /* catch() { ... } // from try @ 0066f970 with catch @ 0066f9c8 */
    piVar6 = (int *)plVar8[2];
    lVar4 = (long)piVar7 - (long)piVar6 >> 2;
    lVar1 = param_2 - lVar5;
    if (lVar4 < param_2 - lVar5) {
      lVar1 = lVar4;
    }
    if (lVar1 < 2) {
                    /* try { // try from 0066fabc to 0076fac7 has its CatchHandler @ 0066fc98 */
      param_1[1] = lVar5 + 1;
      if (piVar6 < piVar7) {
        iVar3 = *piVar6;
        plVar8[2] = (long)(piVar6 + 1);
      }
      else {
        iVar3 = (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      if (iVar3 == -1) goto LAB_0066fb04;
      if ((int *)plVar8[3] <= (int *)plVar8[2]) goto LAB_0066faf4;
                    /* try { // try from 0066fae8 to 0076faeb has its CatchHandler @ 0066fce4 */
      iVar3 = *(int *)plVar8[2];
      lVar5 = param_1[1];
    }
    else {
                    /* try { // try from 0066f9ec to 0076f9f3 has its CatchHandler @ 0066f9fc */
      plVar8[2] = (long)(piVar6 + lVar1);
      lVar5 = lVar5 + lVar1;
                    /* try { // try from 0066f9f4 to 0076f9ff has its CatchHandler @ 0066f8fc */
      param_1[1] = lVar5;
                    /* catch() { ... } // from try @ 0066f9ec with catch @ 0066f9fc */
      if (piVar6 + lVar1 < piVar7) {
                    /* catch() { ... } // from try @ 0066fc10 with catch @ 0066fa00
                       catch() { ... } // from try @ 0066fcc4 with catch @ 0066fa00 */
        iVar3 = piVar6[lVar1];
      }
      else {
LAB_0066faf4:
        iVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
LAB_0066fb04:
        lVar5 = param_1[1];
      }
    }
  }
LAB_0066fa70:
                    /* try { // try from 0066fa70 to 0076fa73 has its CatchHandler @ 0066fce4 */
  if (bVar2) {
    param_1[1] = 0x7fffffffffffffff;
  }
  if (iVar3 == -1) {
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_006215c0(lVar5,*(uint *)(lVar5 + 0x20) | 2);
    return param_1;
  }
  return param_1;
}


