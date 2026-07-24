/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004370f8
 * Function: Caver::Proto::SpellComponent::Clear
 * Signature: undefined __thiscall Clear(SpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::Clear() */

void __thiscall Caver::Proto::SpellComponent::Clear(SpellComponent *this)

{
                    /* try { // try from 004370fc to 00537123 has its CatchHandler @ 004371a4 */
  if ((((byte)this[0x18] & 1) != 0) && (*(Program **)(this + 0x10) != (Program *)0x0)) {
    Program::Clear(*(Program **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 00437124 to 005371c7 has its CatchHandler @ 00437084 */
  return;
}


