/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f0c8
 * Function: Caver::Proto::TouchableComponent::Clear
 * Signature: undefined __thiscall Clear(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::Clear() */

void __thiscall Caver::Proto::TouchableComponent::Clear(TouchableComponent *this)

{
                    /* try { // try from 0042f0cc to 0052f0d3 has its CatchHandler @ 0042f128 */
  if (((this[0x18] != (TouchableComponent)0x0) &&
      (*(undefined4 *)(this + 0xc) = 0, ((byte)this[0x18] >> 1 & 1) != 0)) &&
     (*(Program **)(this + 0x10) != (Program *)0x0)) {
    Program::Clear(*(Program **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


