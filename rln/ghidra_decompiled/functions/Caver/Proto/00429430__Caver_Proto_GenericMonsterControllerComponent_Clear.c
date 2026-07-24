/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429430
 * Function: Caver::Proto::GenericMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::Clear(GenericMonsterControllerComponent *this)

{
  if (this[0x10] != (GenericMonsterControllerComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


