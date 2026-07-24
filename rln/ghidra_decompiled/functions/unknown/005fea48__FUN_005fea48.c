/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fea48
 * Function: FUN_005fea48
 * Signature: undefined FUN_005fea48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fea48(long param_1,int *param_2)

{
  int iVar1;
  
  FUN_005fe488();
                    /* try { // try from 005fea64 to 006fea8b has its CatchHandler @ 005fede0 */
  if (*param_2 == 0xc) {
    iVar1 = param_2[2];
    if (param_2[4] == param_2[5]) {
      return iVar1;
    }
    if ((int)(uint)*(byte *)(param_1 + 0x4a) <= iVar1) {
      FUN_005fe674(param_1,param_2,iVar1);
      goto LAB_005feab4;
    }
  }
  FUN_005fe5c0(param_1,param_2);
LAB_005feab4:
                    /* try { // try from 005feac4 to 006fead7 has its CatchHandler @ 005fede4 */
  return param_2[2];
}


