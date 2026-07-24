/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042aba0
 * Function: Caver::Proto::SwingableWeaponControllerComponent::~SwingableWeaponControllerComponent
 * Signature: undefined __thiscall ~SwingableWeaponControllerComponent(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::~SwingableWeaponControllerComponent() */

void __thiscall
Caver::Proto::SwingableWeaponControllerComponent::~SwingableWeaponControllerComponent
          (SwingableWeaponControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6528 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


