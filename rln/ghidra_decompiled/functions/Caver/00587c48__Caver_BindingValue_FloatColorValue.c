/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00587c48
 * Function: Caver::BindingValue::FloatColorValue
 * Signature: undefined __cdecl FloatColorValue(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::FloatColorValue() const */

void Caver::BindingValue::FloatColorValue(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(in_x0 + 8);
  in_x8[1] = (*(undefined8 **)(in_x0 + 8))[1];
  *in_x8 = uVar1;
  return;
}


