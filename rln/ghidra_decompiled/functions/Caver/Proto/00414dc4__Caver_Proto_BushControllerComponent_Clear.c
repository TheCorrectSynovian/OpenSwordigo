/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414dc4
 * Function: Caver::Proto::BushControllerComponent::Clear
 * Signature: undefined __thiscall Clear(BushControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::Clear() */

void __thiscall Caver::Proto::BushControllerComponent::Clear(BushControllerComponent *this)

{
  if (this[0x18] != (BushControllerComponent)0x0) {
                    /* try { // try from 00414dcc to 00514e9f has its CatchHandler @ 00414c88 */
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


