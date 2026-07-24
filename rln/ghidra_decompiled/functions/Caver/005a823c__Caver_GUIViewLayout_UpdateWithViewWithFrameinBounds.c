/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a823c
 * Function: Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds
 * Signature: undefined __thiscall UpdateWithViewWithFrameinBounds(GUIViewLayout * this, Rectangle * param_1, Rectangle * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds(Caver::Rectangle const&, Caver::Rectangle
   const&) */

void __thiscall
Caver::GUIViewLayout::UpdateWithViewWithFrameinBounds
          (GUIViewLayout *this,Rectangle *param_1,Rectangle *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 4);
  fVar9 = *(float *)param_2;
  fVar7 = *(float *)(param_2 + 4);
                    /* try { // try from 005a8260 to 006a826b has its CatchHandler @ 005a8638 */
  if (fVar9 + *(float *)(param_2 + 8) * 0.5 <= fVar3 + *(float *)(param_1 + 8) * 0.5) {
                    /* try { // try from 005a828c to 006a82b3 has its CatchHandler @ 005a8590 */
    fVar8 = *(float *)(this + 0x6c);
    fVar5 = 0.0;
    fVar4 = ((fVar9 + *(float *)(param_2 + 8)) - (fVar3 + *(float *)(param_1 + 8))) / fVar8;
    uVar1 = 2;
  }
  else {
    fVar8 = *(float *)(this + 0x6c);
    fVar4 = 0.0;
    uVar1 = 1;
    fVar5 = (fVar3 - fVar9) / fVar8;
  }
  if (fVar7 + *(float *)(param_2 + 0xc) * 0.5 <= fVar6 + *(float *)(param_1 + 0xc) * 0.5) {
                    /* try { // try from 005a82c8 to 006a82d7 has its CatchHandler @ 005a869c */
    fVar9 = 0.0;
    fVar3 = ((fVar7 + *(float *)(param_2 + 0xc)) - (fVar6 + *(float *)(param_1 + 0xc))) / fVar8;
    uVar2 = 8;
  }
  else {
                    /* try { // try from 005a82b4 to 006a82c7 has its CatchHandler @ 005a8634 */
    fVar3 = 0.0;
    fVar9 = (fVar6 - fVar7) / fVar8;
    uVar2 = 4;
  }
  *(float *)(this + 0x54) = fVar5;
  *(float *)(this + 0x58) = fVar4;
  *(uint *)(this + 0x50) = uVar2 | uVar1;
  *(float *)(this + 0x5c) = fVar9;
  *(float *)(this + 0x60) = fVar3;
  *(undefined8 *)(this + 100) = *(undefined8 *)(param_1 + 8);
  return;
}


