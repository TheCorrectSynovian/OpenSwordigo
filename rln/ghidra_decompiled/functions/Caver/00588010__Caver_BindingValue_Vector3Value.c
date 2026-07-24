/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588010
 * Function: Caver::BindingValue::Vector3Value
 * Signature: undefined __cdecl Vector3Value(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::Vector3Value() const */

void Caver::BindingValue::Vector3Value(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(in_x0 + 8);
  *in_x8 = *puVar1;
  *(undefined4 *)(in_x8 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}


