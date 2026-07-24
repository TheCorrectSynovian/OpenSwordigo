/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00664bd4
 * Function: FUN_00664bd4
 * Signature: undefined FUN_00664bd4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00664bd4(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x1f;
  FUN_00621e3c(plVar1);
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((long)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = (long)&DAT_007db728;
  param_1[0x1f] = (long)&DAT_007db750;
  FUN_006219c8(plVar1,0);
  plVar2 = param_1 + 1;
  *param_1 = (long)&PTR_FUN_007b7ee8;
  param_1[0x1f] = (long)&PTR_FUN_007b7f10;
                    /* try { // try from 00664c5c to 00764c6f has its CatchHandler @ 00664c70 */
  FUN_00662010(plVar2);
  FUN_006219c8(plVar1,plVar2);
                    /* catch() { ... } // from try @ 00664950 with catch @ 00664c70
                       catch() { ... } // from try @ 00664c5c with catch @ 00664c70
                       try { // try from 00664c70 to 00764cd3 has its CatchHandler @ 00664844 */
                    /* catch() { ... } // from try @ 0066499c with catch @ 00664c78 */
  lVar3 = FUN_00663bdc(plVar2,param_2,param_3 | 0x10);
  if (lVar3 != 0) {
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
                    /* catch() { ... } // from try @ 00664988 with catch @ 00664cb0 */
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00664960 with catch @ 00664cb8 */
  FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 4);
                    /* try { // try from 00664cd4 to 00764cd7 has its CatchHandler @ 00664d24 */
                    /* try { // try from 00664cd8 to 00764f83 has its CatchHandler @ 00664844 */
  return;
}


