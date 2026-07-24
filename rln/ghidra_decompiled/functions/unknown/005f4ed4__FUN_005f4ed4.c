/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4ed4
 * Function: FUN_005f4ed4
 * Signature: undefined FUN_005f4ed4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_005f4ed4(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = (int)param_2[1];
  if ((iVar1 == 7) || (iVar1 == 5)) {
    lVar3 = *(long *)(*param_2 + 0x10);
  }
  else {
                    /* try { // try from 005f4f10 to 006f50df has its CatchHandler @ 005f4e04 */
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 8 + 0xe0);
  }
  if (lVar3 != 0) {
                    /* try { // try from 005f4efc to 006f4f03 has its CatchHandler @ 005f517c */
                    /* try { // try from 005f4f08 to 006f4f0f has its CatchHandler @ 005f510c */
    puVar2 = (undefined8 *)
             FUN_005f40c4(lVar3,*(undefined8 *)
                                 (*(long *)(param_1 + 0x20) + (ulong)param_3 * 8 + 0x128));
    return puVar2;
  }
  return &DAT_00699bc8;
}


