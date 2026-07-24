/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427cd0
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
                    /* catch() { ... } // from try @ 004270c0 with catch @ 00427cd0 */
                    /* catch() { ... } // from try @ 00427064 with catch @ 00427cd4 */
  *(undefined **)this = PTR_vtable_007e6b18 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


