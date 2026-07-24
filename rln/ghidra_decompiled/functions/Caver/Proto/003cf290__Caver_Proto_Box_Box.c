/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf290
 * Function: Caver::Proto::Box::Box
 * Signature: undefined __thiscall Box(Box * this, Box * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Box::Box(Caver::Proto::Box const&) */

void __thiscall Caver::Proto::Box::Box(Box *this,Box *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6f08;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


