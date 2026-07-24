/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434a10
 * Function: Caver::Proto::MagicSpellCastComponent::Clear
 * Signature: undefined __thiscall Clear(MagicSpellCastComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicSpellCastComponent::Clear() */

void __thiscall Caver::Proto::MagicSpellCastComponent::Clear(MagicSpellCastComponent *this)

{
  if (this[0x14] != (MagicSpellCastComponent)0x0) {
                    /* try { // try from 00434a18 to 00534a4b has its CatchHandler @ 00434a18
                       catch() { ... } // from try @ 00434a18 with catch @ 00434a18
                       catch() { ... } // from try @ 00434a64 with catch @ 00434a18
                       catch() { ... } // from try @ 00434b1c with catch @ 00434a18 */
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


