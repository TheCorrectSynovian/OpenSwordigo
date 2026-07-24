/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce624
 * Function: Caver::Proto::Vector3::Vector3
 * Signature: undefined __thiscall Vector3(Vector3 * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector3::Vector3(Caver::Proto::Vector3 const&) */

void __thiscall Caver::Proto::Vector3::Vector3(Vector3 *this,Vector3 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e49f8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


