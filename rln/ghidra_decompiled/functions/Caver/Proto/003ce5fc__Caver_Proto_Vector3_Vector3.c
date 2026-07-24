/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce5fc
 * Function: Caver::Proto::Vector3::Vector3
 * Signature: undefined __thiscall Vector3(Vector3 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector3::Vector3() */

void __thiscall Caver::Proto::Vector3::Vector3(Vector3 *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e49f8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


