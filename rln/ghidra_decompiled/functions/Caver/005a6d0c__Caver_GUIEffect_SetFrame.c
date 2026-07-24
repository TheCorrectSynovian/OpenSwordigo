/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a6d0c
 * Function: Caver::GUIEffect::SetFrame
 * Signature: undefined __thiscall SetFrame(GUIEffect * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffect::SetFrame(Caver::Rectangle const&) */

void __thiscall Caver::GUIEffect::SetFrame(GUIEffect *this,Rectangle *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
                    /* try { // try from 005a6d10 to 006a6d37 has its CatchHandler @ 005a6da4 */
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x50) = uVar1;
  CreateVertices(this);
  return;
}


