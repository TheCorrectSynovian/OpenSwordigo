/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c7ac
 * Function: Caver::Proto::WeaponTrailComponent::~WeaponTrailComponent
 * Signature: undefined __thiscall ~WeaponTrailComponent(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::~WeaponTrailComponent() */

void __thiscall
Caver::Proto::WeaponTrailComponent::~WeaponTrailComponent(WeaponTrailComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7db8 + 0x10;
                    /* catch() { ... } // from try @ 0042c930 with catch @ 0042c7cc
                       catch() { ... } // from try @ 0042caa0 with catch @ 0042c7cc */
  if ((*(WeaponTrailComponent **)PTR_default_instance__007e5120 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


