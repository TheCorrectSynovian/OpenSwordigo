/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427584
 * Function: Caver::Proto::StaticMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(StaticMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::Clear(StaticMonsterControllerComponent *this)

{
  if (this[0x30] != (StaticMonsterControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


