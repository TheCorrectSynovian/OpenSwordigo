/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435858
 * Function: Caver::Proto::ProjectileControllerComponent::~ProjectileControllerComponent
 * Signature: undefined __thiscall ~ProjectileControllerComponent(ProjectileControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProjectileControllerComponent::~ProjectileControllerComponent() */

void __thiscall
Caver::Proto::ProjectileControllerComponent::~ProjectileControllerComponent
          (ProjectileControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e5f00 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


