/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e108
 * Function: __cxa_throw
 * Signature: noreturn undefined __cxa_throw(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = __cxa_get_globals();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined4 *)(param_1 + -0x80) = 1;
  uVar2 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar2;
  uVar2 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x58) = uVar2;
                    /* catch() { ... } // from try @ 0061e0ac with catch @ 0061e174 */
  *(undefined8 *)(param_1 + -0x20) = 0x474e5543432b2b00;
                    /* catch() { ... } // from try @ 0061df20 with catch @ 0061e178 */
  *(code **)(param_1 + -0x18) = FUN_0061e0a4;
  FUN_00681658(param_1 + -0x20);
  __cxa_begin_catch(param_1 + -0x20);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


