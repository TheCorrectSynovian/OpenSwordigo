/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f390
 * Function: FUN_0065f390
 * Signature: undefined FUN_0065f390(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0065f390(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0061f654(param_1 + 0x68);
  if (cVar1 != '\0') {
    cVar1 = FUN_0065f224(param_1);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0xc0) = 0;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      if (*(void **)(param_1 + 0x98) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 0x98));
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    if (*(void **)(param_1 + 0xd0) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0xd0));
    }
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0xa9) = 0;
    *(undefined1 *)(param_1 + 0xaa) = 0;
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_1 + 0x7c);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_1 + 0x7c);
    lVar2 = FUN_0061f694(param_1 + 0x68);
    if ((lVar2 != 0) && (cVar1 == '\x01')) {
      return param_1;
    }
  }
  return 0;
}


