/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426e98
 * Function: Caver::Proto::SkellyMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::SkellyMonsterControllerComponent::Clear(SkellyMonsterControllerComponent *this)

{
  if (this[0x14] != (SkellyMonsterControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


