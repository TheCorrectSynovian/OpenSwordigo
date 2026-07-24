/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a72f0
 * Function: Caver::GUIEffect::ShowBars
 * Signature: undefined __thiscall ShowBars(GUIEffect * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffect::ShowBars(float) */

void __thiscall Caver::GUIEffect::ShowBars(GUIEffect *this,float param_1)

{
  float fVar1;
  
  fVar1 = DAT_00683734;
  *this = (GUIEffect)0x0;
  *(undefined4 *)(this + 0x38) = 2;
                    /* try { // try from 005a7308 to 006a73af has its CatchHandler @ 005a7308
                       catch() { ... } // from try @ 005a7308 with catch @ 005a7308
                       catch() { ... } // from try @ 005a73e8 with catch @ 005a7308 */
  this[0x40] = (GUIEffect)0x0;
  *(float *)(this + 0x44) = param_1;
  if (param_1 < fVar1) {
    *(undefined4 *)(this + 0x4c) = 0x3f800000;
  }
  Update(this,0.0);
  return;
}


