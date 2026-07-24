/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660ed8
 * Function: FUN_00660ed8
 * Signature: undefined FUN_00660ed8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660ed8(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x1f;
                    /* try { // try from 00660f00 to 00760f27 has its CatchHandler @ 0066103c */
  FUN_00621e3c(plVar1);
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((long)param_1 + 0x1d9) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
                    /* try { // try from 00660f30 to 00760f3b has its CatchHandler @ 0066108c */
  *param_1 = (long)&DAT_007db4e8;
  param_1[0x1f] = (long)&DAT_007db510;
  FUN_006210e8(plVar1,0);
  plVar2 = param_1 + 1;
  *param_1 = (long)&PTR_FUN_007b7d38;
                    /* try { // try from 00660f54 to 00760f57 has its CatchHandler @ 00661128 */
  param_1[0x1f] = (long)&PTR_FUN_007b7d60;
  FUN_0065edec(plVar2);
                    /* try { // try from 00660f70 to 00760f73 has its CatchHandler @ 00661124 */
  FUN_006210e8(plVar1,plVar2);
  lVar3 = FUN_0065f8c0(plVar2,param_2,param_3 | 0x10);
  if (lVar3 != 0) {
                    /* try { // try from 00660f88 to 00760f93 has its CatchHandler @ 006610e8 */
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
                    /* try { // try from 00660fb4 to 00760fb7 has its CatchHandler @ 00661124 */
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 4);
  return;
}


