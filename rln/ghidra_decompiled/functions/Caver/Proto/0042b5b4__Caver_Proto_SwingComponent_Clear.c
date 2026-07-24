/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b5b4
 * Function: Caver::Proto::SwingComponent::Clear
 * Signature: undefined __thiscall Clear(SwingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingComponent::Clear() */

void __thiscall Caver::Proto::SwingComponent::Clear(SwingComponent *this)

{
  if (this[0x1c] != (SwingComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined2 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


