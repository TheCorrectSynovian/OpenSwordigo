/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006219c8
 * Function: FUN_006219c8
 * Signature: undefined FUN_006219c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006219c8(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0xd0;
  FUN_00622c5c();
  cVar2 = FUN_00651634(lVar1);
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    cVar2 = FUN_006517e4(lVar1);
  }
  else {
    uVar3 = FUN_0064f6ac(lVar1);
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
    cVar2 = FUN_006517e4(lVar1);
  }
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    cVar2 = FUN_00651850(lVar1);
  }
  else {
    uVar3 = FUN_006503c0(lVar1);
    *(undefined8 *)(param_1 + 0xf8) = uVar3;
    cVar2 = FUN_00651850(lVar1);
  }
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    uVar3 = FUN_00650428(lVar1);
    *(undefined8 *)(param_1 + 0x100) = uVar3;
  }
  *(long *)(param_1 + 0xe8) = param_2;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = (uint)(param_2 == 0);
  return;
}


