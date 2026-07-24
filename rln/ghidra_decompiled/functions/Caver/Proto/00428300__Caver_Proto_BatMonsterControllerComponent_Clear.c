/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428300
 * Function: Caver::Proto::BatMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(BatMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BatMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::BatMonsterControllerComponent::Clear(BatMonsterControllerComponent *this)

{
  if (this[0x14] != (BatMonsterControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


