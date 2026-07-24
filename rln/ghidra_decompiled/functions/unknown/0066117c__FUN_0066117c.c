/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066117c
 * Function: FUN_0066117c
 * Signature: undefined FUN_0066117c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066117c(long *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x1f;
  FUN_00621e3c(plVar1);
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((long)param_1 + 0x1d9) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = (long)&DAT_007db4e8;
  param_1[0x1f] = (long)&DAT_007db510;
  FUN_006210e8(plVar1,0);
  plVar2 = param_1 + 1;
  *param_1 = (long)&PTR_FUN_007b7d38;
  param_1[0x1f] = (long)&PTR_FUN_007b7d60;
                    /* catch() { ... } // from try @ 0066121c with catch @ 00661208 */
  FUN_0065edec(plVar2);
  FUN_006210e8(plVar1,plVar2);
                    /* try { // try from 00661218 to 0076121b has its CatchHandler @ 0066122c */
                    /* try { // try from 0066121c to 0076123f has its CatchHandler @ 00661208 */
  lVar3 = FUN_0065f8c0(plVar2,*param_2,param_3 | 0x10);
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 00661218 with catch @ 0066122c */
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 4);
  return;
}


