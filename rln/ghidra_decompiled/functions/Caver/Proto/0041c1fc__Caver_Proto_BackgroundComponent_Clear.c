/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c1fc
 * Function: Caver::Proto::BackgroundComponent::Clear
 * Signature: undefined __thiscall Clear(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::Clear() */

void __thiscall Caver::Proto::BackgroundComponent::Clear(BackgroundComponent *this)

{
  long *plVar1;
  
                    /* try { // try from 0041c21c to 0051c22f has its CatchHandler @ 0041c400 */
  if ((((byte)this[0x18] & 1) != 0) &&
     (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_texture_name__007e56a8)) {
                    /* try { // try from 0041c230 to 0051c247 has its CatchHandler @ 0041c394 */
    FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


