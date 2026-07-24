/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435e7c
 * Function: Caver::Proto::MagicBombComponent::~MagicBombComponent
 * Signature: undefined __thiscall ~MagicBombComponent(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::~MagicBombComponent() */

void __thiscall Caver::Proto::MagicBombComponent::~MagicBombComponent(MagicBombComponent *this)

{
  *(undefined **)this = PTR_vtable_007e5940 + 0x10;
  if ((*(MagicBombComponent **)PTR_default_instance__007e7bd0 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


