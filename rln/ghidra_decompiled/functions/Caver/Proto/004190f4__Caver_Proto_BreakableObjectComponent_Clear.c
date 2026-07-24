/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004190f4
 * Function: Caver::Proto::BreakableObjectComponent::Clear
 * Signature: undefined __thiscall Clear(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::Clear() */

void __thiscall Caver::Proto::BreakableObjectComponent::Clear(BreakableObjectComponent *this)

{
  if (this[0x20] != (BreakableObjectComponent)0x0) {
                    /* catch() { ... } // from try @ 004188b0 with catch @ 0041910c */
    this[0xc] = (BreakableObjectComponent)0x0;
                    /* catch() { ... } // from try @ 00418854 with catch @ 00419110 */
    *(undefined8 *)(this + 0x10) = 0;
    if ((((byte)this[0x20] >> 3 & 1) != 0) && (*(Program **)(this + 0x18) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x18));
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


