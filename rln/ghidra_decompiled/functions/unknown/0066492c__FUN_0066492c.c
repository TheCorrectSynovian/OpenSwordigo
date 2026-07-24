/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066492c
 * Function: FUN_0066492c
 * Signature: undefined FUN_0066492c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066492c(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x20;
                    /* try { // try from 00664950 to 0076495f has its CatchHandler @ 00664c70 */
  FUN_00621e3c(plVar1);
  param_1[0x3b] = 0;
                    /* try { // try from 00664960 to 00764973 has its CatchHandler @ 00664cb8 */
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *param_1 = (long)&DAT_007db6d8;
                    /* try { // try from 00664988 to 0076499b has its CatchHandler @ 00664cb0 */
  param_1[1] = 0;
  param_1[0x20] = (long)&DAT_007db700;
  FUN_006219c8(plVar1,0);
                    /* try { // try from 0066499c to 007649a7 has its CatchHandler @ 00664c78 */
  plVar2 = param_1 + 2;
  *param_1 = (long)&PTR_FUN_007b7e78;
  param_1[0x20] = (long)&PTR_FUN_007b7ea0;
  FUN_00662010(plVar2);
  FUN_006219c8(plVar1,plVar2);
                    /* try { // try from 006649d8 to 007649e3 has its CatchHandler @ 00664e10 */
  lVar3 = FUN_00663bdc(plVar2,param_2,param_3 | 8);
  if (lVar3 != 0) {
                    /* try { // try from 006649e4 to 007649f3 has its CatchHandler @ 00664dd8 */
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
                    /* try { // try from 00664a00 to 00764a37 has its CatchHandler @ 00664e74 */
    return;
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 4);
  return;
}


