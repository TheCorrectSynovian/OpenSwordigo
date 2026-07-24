/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc9d4
 * Function: Caver::Proto::ObjectLibrary::ObjectLibrary
 * Signature: undefined __thiscall ObjectLibrary(ObjectLibrary * this, ObjectLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&) */

void __thiscall
Caver::Proto::ObjectLibrary::ObjectLibrary(ObjectLibrary *this,ObjectLibrary *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6ec8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 4;
  *(undefined4 *)(this + 0x60) = 4;
  *(undefined4 *)(this + 0x98) = 4;
  *(undefined4 *)(this + 0xd0) = 4;
  *(undefined **)(this + 0x10) = PTR__default_name__007e6d40;
  *(ObjectLibrary **)(this + 0x18) = this + 0x30;
  *(undefined8 *)(this + 0x20) = 0;
  *(ObjectLibrary **)(this + 0x50) = this + 0x68;
  *(undefined8 *)(this + 0x58) = 0;
  *(ObjectLibrary **)(this + 0x88) = this + 0xa0;
  *(undefined8 *)(this + 0x90) = 0;
  *(ObjectLibrary **)(this + 0xc0) = this + 0xd8;
  *(undefined8 *)(this + 200) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0xf8) = 0;
  MergeFrom(this,param_1);
  return;
}


