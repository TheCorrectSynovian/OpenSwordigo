/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428900
 * Function: Caver::Proto::BouncingMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::Clear(BouncingMonsterControllerComponent *this)

{
  if (this[0x1c] != (BouncingMonsterControllerComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


