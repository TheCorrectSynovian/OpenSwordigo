/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428fb4
 * Function: Caver::Proto::MonsterDeathControllerComponent::Clear
 * Signature: undefined __thiscall Clear(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::Clear() */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::Clear(MonsterDeathControllerComponent *this)

{
  if (this[0x10] != (MonsterDeathControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


