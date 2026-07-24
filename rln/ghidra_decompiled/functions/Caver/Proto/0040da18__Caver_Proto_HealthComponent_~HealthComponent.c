/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040da18
 * Function: Caver::Proto::HealthComponent::~HealthComponent
 * Signature: undefined __thiscall ~HealthComponent(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::~HealthComponent() */

void __thiscall Caver::Proto::HealthComponent::~HealthComponent(HealthComponent *this)

{
                    /* catch() { ... } // from try @ 0040d76c with catch @ 0040da2c */
  *(undefined **)this = PTR_vtable_007e57c0 + 0x10;
  if ((*(HealthComponent **)PTR_default_instance__007e6bf0 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


