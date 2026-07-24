/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004364fc
 * Function: Caver::Proto::MagicHookshotComponent::~MagicHookshotComponent
 * Signature: undefined __thiscall ~MagicHookshotComponent(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::~MagicHookshotComponent() */

void __thiscall
Caver::Proto::MagicHookshotComponent::~MagicHookshotComponent(MagicHookshotComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7cf0 + 0x10;
  if ((*(MagicHookshotComponent **)PTR_default_instance__007e6b30 != this) &&
     (*(long **)(this + 0x20) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


