/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fdaec
 * Function: FUN_005fdaec
 * Signature: undefined FUN_005fdaec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fdaec(long *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (int)param_1[6];
  if (*(int *)((long)param_1 + 0x34) < iVar1) {
    if (iVar1 == 0) {
                    /* try { // try from 005fdb54 to 006fdd53 has its CatchHandler @ 005fd9b0 */
      if (param_2 < (int)(uint)*(byte *)((long)param_1 + 0x4a)) goto LAB_005fdb60;
    }
    else {
                    /* try { // try from 005fdb00 to 006fdb13 has its CatchHandler @ 005fdcdc */
      uVar2 = *(uint *)(*(long *)(*param_1 + 0x18) + ((long)iVar1 + -1) * 4);
                    /* try { // try from 005fdb14 to 006fdb1f has its CatchHandler @ 005fdca4 */
                    /* try { // try from 005fdb34 to 006fdb47 has its CatchHandler @ 005fdca0 */
      if ((((uVar2 & 0x3f) != 3) || (param_2 < (int)(uVar2 >> 6 & 0xff))) ||
         ((int)((uVar2 >> 0x17) + 1) < param_2)) goto LAB_005fdb60;
      iVar3 = param_2 + param_3 + -1;
      if ((int)(uVar2 >> 0x17) < iVar3) {
                    /* try { // try from 005fdb48 to 006fdb53 has its CatchHandler @ 005fdc68 */
        *(uint *)(*(long *)(*param_1 + 0x18) + ((long)iVar1 + -1) * 4) =
             uVar2 & 0x7fffff | iVar3 * 0x800000;
      }
    }
    return;
  }
LAB_005fdb60:
  FUN_006001e8(param_1,(param_3 + param_2) * 0x800000 - 0x800000U | param_2 << 6 | 3,
               *(undefined4 *)(param_1[3] + 8));
  return;
}


