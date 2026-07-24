/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004268e4
 * Function: Caver::Proto::LeapingMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(LeapingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::LeapingMonsterControllerComponent::Clear(LeapingMonsterControllerComponent *this)

{
  if (this[0x14] != (LeapingMonsterControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


