/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d97c
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
  *(undefined **)this = PTR_vtable_007e57c0 + 0x10;
                    /* catch() { ... } // from try @ 0040d804 with catch @ 0040d9a0 */
                    /* catch() { ... } // from try @ 0040d7e8 with catch @ 0040d9a8 */
                    /* catch() { ... } // from try @ 0040d7b8 with catch @ 0040d9ac */
                    /* catch() { ... } // from try @ 0040d7a0 with catch @ 0040d9b0 */
                    /* catch() { ... } // from try @ 0040d788 with catch @ 0040d9b4 */
  if ((*(HealthComponent **)PTR_default_instance__007e6bf0 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


