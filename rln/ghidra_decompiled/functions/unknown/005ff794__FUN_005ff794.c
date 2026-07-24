/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ff794
 * Function: FUN_005ff794
 * Signature: undefined FUN_005ff794(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005ff794(long param_1,uint param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double __y;
  double __x;
  
                    /* try { // try from 005ff7b4 to 006ff7db has its CatchHandler @ 005ffa80 */
                    /* try { // try from 005ff7fc to 006ff823 has its CatchHandler @ 005ffa70 */
  if (((((*param_3 == 5) && (param_3[4] == -1)) && (param_3[5] == -1)) &&
      ((*param_4 == 5 && (param_4[4] == -1)))) && (param_4[5] == -1)) {
    dVar4 = 0.0;
    if (8 < param_2 - 0xc) goto switchD_005ff938_caseD_13;
                    /* try { // try from 005ff91c to 006ff943 has its CatchHandler @ 005ffa30 */
    __x = *(double *)(param_3 + 2);
    __y = *(double *)(param_4 + 2);
    iVar2 = 0;
    switch(param_2) {
    case 0xc:
      dVar4 = __x + __y;
      break;
    case 0xd:
      dVar4 = __x - __y;
      break;
    case 0xe:
      dVar4 = __x * __y;
      break;
    case 0xf:
      if (__y != 0.0) {
        dVar4 = __x / __y;
        break;
      }
      goto LAB_005ff814;
    case 0x10:
      if (__y == 0.0) goto LAB_005ff814;
                    /* try { // try from 005ff98c to 006ffaeb has its CatchHandler @ 005ff5e8 */
      dVar4 = __x - __y * (double)(long)(__x / __y);
      break;
    case 0x11:
      dVar4 = pow(__x,__y);
      break;
    case 0x12:
      dVar4 = -__x;
      break;
    case 0x13:
      goto switchD_005ff938_caseD_13;
    case 0x14:
      goto switchD_005ff938_caseD_14;
    }
    if (!NAN(dVar4)) {
switchD_005ff938_caseD_13:
      *(double *)(param_3 + 2) = dVar4;
      return;
    }
  }
  iVar2 = 0;
  if ((param_2 != 0x12) && (param_2 != 0x14)) {
LAB_005ff814:
    iVar2 = FUN_005feb5c(param_1,param_4);
  }
switchD_005ff938_caseD_14:
  iVar3 = FUN_005feb5c(param_1,param_3);
  if (iVar2 < iVar3) {
                    /* try { // try from 005ff844 to 006ff86b has its CatchHandler @ 005ffa60 */
    if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)(param_1 + 0x4a) <= param_3[2])) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    }
    if (*param_4 != 0xc) goto LAB_005ff8d4;
    uVar1 = param_4[2];
  }
  else {
                    /* try { // try from 005ff88c to 006ff8b3 has its CatchHandler @ 005ffa50 */
    if (((*param_4 == 0xc) && (((uint)param_4[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)(param_1 + 0x4a) <= param_4[2])) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    }
    if (*param_3 != 0xc) goto LAB_005ff8d4;
    uVar1 = param_3[2];
  }
  if (((uVar1 >> 8 & 1) == 0) && ((int)(uint)*(byte *)(param_1 + 0x4a) <= (int)uVar1)) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
LAB_005ff8d4:
                    /* try { // try from 005ff8d4 to 006ff8fb has its CatchHandler @ 005ffa40 */
  iVar2 = FUN_006001e8(param_1,param_2 | iVar2 << 0xe | iVar3 << 0x17,
                       *(undefined4 *)(*(long *)(param_1 + 0x18) + 8));
  param_3[2] = iVar2;
  *param_3 = 0xb;
  return;
}


