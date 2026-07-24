/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621a9c
 * Function: FUN_00621a9c
 * Signature: undefined FUN_00621a9c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00621a9c(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00651634(param_2);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    cVar1 = FUN_006517e4(param_2);
  }
  else {
    uVar2 = FUN_0064f6ac(param_2);
    *(undefined8 *)(param_1 + 0xf0) = uVar2;
    cVar1 = FUN_006517e4(param_2);
  }
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    cVar1 = FUN_00651850(param_2);
  }
  else {
    uVar2 = FUN_006503c0(param_2);
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    cVar1 = FUN_00651850(param_2);
  }
  if (cVar1 != '\0') {
    uVar2 = FUN_00650428(param_2);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}


