/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428f20
 * Function: Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent
 * Signature: undefined __thiscall ~MonsterDeathControllerComponent(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent() */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent
          (MonsterDeathControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4ca0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


