/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00662f10
 * Function: FUN_00662f10
 * Signature: undefined FUN_00662f10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00662f10(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00662e0c with catch @ 00662f2c */
  cVar1 = FUN_0061f654(param_1 + 0x68);
                    /* catch() { ... } // from try @ 00662de8 with catch @ 00662f30 */
  if (cVar1 != '\0') {
    cVar1 = FUN_00662468(param_1);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0xc0) = 0;
    if (*(char *)(param_1 + 0xa8) != '\0') {
      if (*(void **)(param_1 + 0x98) != (void *)0x0) {
                    /* try { // try from 00662fdc to 00762fdf has its CatchHandler @ 006633a4 */
        operator_delete__(*(void **)(param_1 + 0x98));
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
                    /* try { // try from 00662fe4 to 00762fe7 has its CatchHandler @ 0066339c */
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    if (*(void **)(param_1 + 0xd0) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0xd0));
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined1 *)(param_1 + 0xa9) = 0;
    *(undefined1 *)(param_1 + 0xaa) = 0;
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
                    /* catch() { ... } // from try @ 00662dd0 with catch @ 00662fa0 */
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* catch() { ... } // from try @ 00663284 with catch @ 00662fa4
                       catch() { ... } // from try @ 00663518 with catch @ 00662fa4 */
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


