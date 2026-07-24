/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fdfc8
 * Function: FUN_005fdfc8
 * Signature: undefined FUN_005fdfc8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fdfc8(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 005fdfd0 to 006fdff7 has its CatchHandler @ 005fed3c */
  param_3 = ~param_2 + param_3;
  lVar2 = *(long *)(*param_1 + 0x18);
  iVar1 = -param_3;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  if (0x1ffff < iVar1) {
    FUN_00600968(param_1[3],"control structure too long");
  }
                    /* try { // try from 005fe018 to 006fe03f has its CatchHandler @ 005fee58 */
  *(uint *)(lVar2 + (long)(int)param_2 * 4) =
       param_3 * 0x4000 + 0x7fffc000U | *(uint *)(lVar2 + (long)(int)param_2 * 4) & 0x3fff;
  return;
}


