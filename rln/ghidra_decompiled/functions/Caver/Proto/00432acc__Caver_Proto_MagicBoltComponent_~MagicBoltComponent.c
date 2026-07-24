/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432acc
 * Function: Caver::Proto::MagicBoltComponent::~MagicBoltComponent
 * Signature: undefined __thiscall ~MagicBoltComponent(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::~MagicBoltComponent() */

void __thiscall Caver::Proto::MagicBoltComponent::~MagicBoltComponent(MagicBoltComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4cb0 + 0x10;
  if ((*(MagicBoltComponent **)PTR_default_instance__007e4db8 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


