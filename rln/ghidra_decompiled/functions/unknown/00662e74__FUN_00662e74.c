/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00662e74
 * Function: FUN_00662e74
 * Signature: undefined FUN_00662e74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00662e74(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x78) = 0;
  *(undefined1 *)(lVar3 + 0xc0) = 0;
  if (*(char *)(lVar3 + 0xa8) != '\0') {
    if (*(void **)(lVar3 + 0x98) != (void *)0x0) {
      operator_delete__(*(void **)(lVar3 + 0x98));
    }
    *(undefined8 *)(lVar3 + 0x98) = 0;
    *(undefined1 *)(lVar3 + 0xa8) = 0;
  }
  if (*(void **)(lVar3 + 0xd0) != (void *)0x0) {
    operator_delete__(*(void **)(lVar3 + 0xd0));
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar3 + 0xd0) = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  *(undefined8 *)(lVar3 + 0xe0) = 0;
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0x84) = *(undefined8 *)(lVar1 + 0x7c);
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  lVar3 = *param_1;
  *(undefined1 *)(lVar1 + 0xa9) = 0;
  *(undefined1 *)(lVar1 + 0xaa) = 0;
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    /* catch() { ... } // from try @ 00662e24 with catch @ 00662ef4 */
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x8c) = *(undefined8 *)(lVar3 + 0x84);
  return;
}


