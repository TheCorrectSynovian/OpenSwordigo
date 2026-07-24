/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00587a0c
 * Function: Caver::BindingValue::ProgramValue
 * Signature: undefined __cdecl ProgramValue(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ProgramValue() const */

void Caver::BindingValue::ProgramValue(void)

{
  long in_x0;
  long in_x8;
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(in_x0 + 8);
  FUN_0066a528();
  *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(lVar2 + 8);
  lVar1 = *(long *)(lVar2 + 0x10);
  *(long *)(in_x8 + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  *(undefined8 *)(in_x8 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x20);
  *(long *)(in_x8 + 0x20) = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  return;
}


