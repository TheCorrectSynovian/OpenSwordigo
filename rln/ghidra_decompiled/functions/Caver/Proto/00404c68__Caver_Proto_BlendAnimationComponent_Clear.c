/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404c68
 * Function: Caver::Proto::BlendAnimationComponent::Clear
 * Signature: undefined __thiscall Clear(BlendAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BlendAnimationComponent::Clear() */

void __thiscall Caver::Proto::BlendAnimationComponent::Clear(BlendAnimationComponent *this)

{
                    /* catch() { ... } // from try @ 00404b38 with catch @ 00404c68 */
  if (this[0x1c] != (BlendAnimationComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


