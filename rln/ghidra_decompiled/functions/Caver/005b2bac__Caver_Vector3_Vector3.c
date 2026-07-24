/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2bac
 * Function: Caver::Vector3::Vector3
 * Signature: undefined __thiscall Vector3(Vector3 * this, Vector4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Vector3::Vector3(Caver::Vector4 const&) */

void __thiscall Caver::Vector3::Vector3(Vector3 *this,Vector4 *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


