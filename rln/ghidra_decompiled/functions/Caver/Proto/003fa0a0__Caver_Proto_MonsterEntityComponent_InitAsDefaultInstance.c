/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa0a0
 * Function: Caver::Proto::MonsterEntityComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::MonsterEntityComponent::InitAsDefaultInstance(MonsterEntityComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


