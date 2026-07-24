/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005881f8
 * Function: Caver::BindingValue::RectangleValue
 * Signature: undefined __cdecl RectangleValue(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::RectangleValue() const */

void Caver::BindingValue::RectangleValue(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(in_x0 + 8);
  in_x8[1] = (*(undefined8 **)(in_x0 + 8))[1];
  *in_x8 = uVar1;
  return;
}


