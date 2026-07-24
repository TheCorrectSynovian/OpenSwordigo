/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423b3c
 * Function: Caver::Proto::MonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(MonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::Clear() */

void __thiscall Caver::Proto::MonsterControllerComponent::Clear(MonsterControllerComponent *this)

{
  if (this[0x1c] != (MonsterControllerComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


