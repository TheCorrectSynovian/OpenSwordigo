/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415ac0
 * Function: Caver::Proto::PressureTriggerComponent::~PressureTriggerComponent
 * Signature: undefined __thiscall ~PressureTriggerComponent(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::~PressureTriggerComponent() */

void __thiscall
Caver::Proto::PressureTriggerComponent::~PressureTriggerComponent(PressureTriggerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e5d78 + 0x10;
  if (*(PressureTriggerComponent **)PTR_default_instance__007e4948 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


