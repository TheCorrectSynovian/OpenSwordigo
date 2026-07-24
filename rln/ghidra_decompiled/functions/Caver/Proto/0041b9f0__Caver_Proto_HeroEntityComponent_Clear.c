/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b9f0
 * Function: Caver::Proto::HeroEntityComponent::Clear
 * Signature: undefined __thiscall Clear(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::Clear() */

void __thiscall Caver::Proto::HeroEntityComponent::Clear(HeroEntityComponent *this)

{
  if ((((byte)this[0x18] & 1) != 0) && (*(Program **)(this + 0x10) != (Program *)0x0)) {
    Program::Clear(*(Program **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x18) = 0;
                    /* catch() { ... } // from try @ 0041b9bc with catch @ 0041ba20 */
  return;
}


