/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037bf04
 * Function: Caver::MonsterEntityComponent::SetDamageEnabled
 * Signature: undefined __thiscall SetDamageEnabled(MonsterEntityComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::SetDamageEnabled(bool) */

void __thiscall
Caver::MonsterEntityComponent::SetDamageEnabled(MonsterEntityComponent *this,bool param_1)

{
  if (*(long *)(this + 0x188) != 0) {
    *(bool *)(*(long *)(this + 0x188) + 0xbc) = param_1;
    this[0x199] = (MonsterEntityComponent)param_1;
  }
  return;
}


