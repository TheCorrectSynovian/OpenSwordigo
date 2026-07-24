/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042be50
 * Function: Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent
 * Signature: undefined __thiscall ~WeaponGlowComponent(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent() */

void __thiscall Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent(WeaponGlowComponent *this)

{
                    /* try { // try from 0042be50 to 0052bef7 has its CatchHandler @ 0042bdb0 */
  *(undefined **)this = PTR_vtable_007e6f60 + 0x10;
  if (*(WeaponGlowComponent **)PTR_default_instance__007e5698 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


