/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f1098
 * Function: FUN_005f1098
 * Signature: undefined FUN_005f1098(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f1098(long param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 005f10a0 to 006f10ab has its CatchHandler @ 005f1c34 */
  if (*(int *)(param_1 + 0x10) == param_2) {
                    /* try { // try from 005f10c8 to 006f10ef has its CatchHandler @ 005f1cb4 */
    FUN_00600a74(param_1);
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = FUN_0060072c(param_1);
                    /* try { // try from 005f10f0 to 006f1457 has its CatchHandler @ 005f08ec */
  if (iVar1 == param_4) {
    uVar2 = FUN_005ef3d4(uVar4,"\'%s\' expected",uVar2);
  }
  else {
    uVar3 = FUN_0060072c(param_1,param_3);
    uVar2 = FUN_005ef3d4(uVar4,"\'%s\' expected (to close \'%s\' at line %d)",uVar2,uVar3,param_4);
  }
  FUN_00600968(param_1,uVar2);
  return;
}


