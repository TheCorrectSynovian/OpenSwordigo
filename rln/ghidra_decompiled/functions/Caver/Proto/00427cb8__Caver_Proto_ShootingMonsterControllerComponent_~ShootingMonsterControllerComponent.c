/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427cb8
 * Function: Caver::Proto::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent
 * Signature: undefined __thiscall ~ShootingMonsterControllerComponent(ShootingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent() */

void __thiscall
Caver::Proto::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent
          (ShootingMonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6b18 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


