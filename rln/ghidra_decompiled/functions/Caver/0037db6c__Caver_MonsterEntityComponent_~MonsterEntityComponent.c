/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037db6c
 * Function: Caver::MonsterEntityComponent::~MonsterEntityComponent
 * Signature: undefined __thiscall ~MonsterEntityComponent(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::~MonsterEntityComponent() */

void __thiscall Caver::MonsterEntityComponent::~MonsterEntityComponent(MonsterEntityComponent *this)

{
  ~MonsterEntityComponent(this);
  operator_delete(this);
  return;
}


