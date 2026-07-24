/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066432c
 * Function: FUN_0066432c
 * Signature: undefined FUN_0066432c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066432c(long *param_1,undefined8 *param_2,uint param_3)

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
                    /* try { // try from 00664394 to 0076439b has its CatchHandler @ 006644d8 */
  FUN_006219c8(plVar1,0);
                    /* try { // try from 0066439c to 007643ff has its CatchHandler @ 006642a8 */
  plVar2 = param_1 + 1;
  *param_1 = (long)&PTR_FUN_007b7ee8;
  param_1[0x1f] = (long)&PTR_FUN_007b7f10;
  FUN_00662010(plVar2);
  FUN_006219c8(plVar1,plVar2);
  lVar3 = FUN_00663bdc(plVar2,*param_2,param_3 | 0x10);
  if (lVar3 != 0) {
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
                    /* try { // try from 00664400 to 00764407 has its CatchHandler @ 006644ac */
    return;
  }
                    /* try { // try from 00664408 to 0076447f has its CatchHandler @ 006642a8 */
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 4);
  return;
}


