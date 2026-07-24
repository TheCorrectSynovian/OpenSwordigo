/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429a0c
 * Function: Caver::Proto::SwingableWeaponComponent::~SwingableWeaponComponent
 * Signature: undefined __thiscall ~SwingableWeaponComponent(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::~SwingableWeaponComponent() */

void __thiscall
Caver::Proto::SwingableWeaponComponent::~SwingableWeaponComponent(SwingableWeaponComponent *this)

{
                    /* try { // try from 00429a1c to 00529a27 has its CatchHandler @ 00429ba0 */
  *(undefined **)this = PTR_vtable_007e4a48 + 0x10;
  if ((*(SwingableWeaponComponent **)PTR_default_instance__007e4b88 != this) &&
     (*(long **)(this + 0x20) != (long *)0x0)) {
                    /* try { // try from 00429a48 to 00529a6f has its CatchHandler @ 00429b4c */
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


