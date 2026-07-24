/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00664084
 * Function: FUN_00664084
 * Signature: undefined FUN_00664084(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00664084(long *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x20;
  FUN_00621e3c(plVar1);
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
                    /* try { // try from 006640c0 to 007640fb has its CatchHandler @ 006640c0
                       catch() { ... } // from try @ 006640c0 with catch @ 006640c0
                       catch() { ... } // from try @ 00664148 with catch @ 006640c0 */
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *param_1 = (long)&DAT_007db6d8;
  param_1[1] = 0;
  param_1[0x20] = (long)&DAT_007db700;
  FUN_006219c8(plVar1,0);
  plVar2 = param_1 + 2;
                    /* try { // try from 006640fc to 00764147 has its CatchHandler @ 006641e8 */
  *param_1 = (long)&PTR_FUN_007b7e78;
  param_1[0x20] = (long)&PTR_FUN_007b7ea0;
  FUN_00662010(plVar2);
  FUN_006219c8(plVar1,plVar2);
  lVar3 = FUN_00663bdc(plVar2,*param_2,param_3 | 8);
  if (lVar3 != 0) {
                    /* try { // try from 00664148 to 00764257 has its CatchHandler @ 006640c0 */
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 4);
  return;
}


