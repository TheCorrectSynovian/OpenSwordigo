/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423ac0
 * Function: Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent
 * Signature: undefined __thiscall ~MonsterControllerComponent(MonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent() */

void __thiscall
Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent
          (MonsterControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e65d8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


