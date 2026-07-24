/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae8a4
 * Function: Caver::Matrix4::Determinant3x3
 * Signature: undefined __thiscall Determinant3x3(Matrix4 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::Determinant3x3() const */

float __thiscall Caver::Matrix4::Determinant3x3(Matrix4 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 005ae8b0 to 006ae8d7 has its CatchHandler @ 005ae95c */
                    /* try { // try from 005ae8d8 to 006ae9cb has its CatchHandler @ 005ae86c */
  fVar6 = *(float *)this * *(float *)(this + 0x14) * *(float *)(this + 0x28);
  fVar2 = *(float *)(this + 0x28) * *(float *)(this + 0x10) * *(float *)(this + 4);
  fVar3 = *(float *)this * *(float *)(this + 0x24) * *(float *)(this + 0x18);
  fVar5 = fVar6 + 0.0;
  fVar7 = *(float *)(this + 0x10) * *(float *)(this + 0x24) * *(float *)(this + 8);
  fVar4 = fVar5;
  fVar1 = 0.0;
  if (0.0 <= fVar6) {
    fVar4 = 0.0;
    fVar1 = fVar5;
  }
  fVar6 = *(float *)(this + 8) * *(float *)(this + 0x14) * *(float *)(this + 0x20);
  fVar8 = *(float *)(this + 0x20) * *(float *)(this + 4) * *(float *)(this + 0x18);
  fVar5 = fVar4 + fVar7;
  if (0.0 <= fVar7) {
    fVar5 = fVar4;
    fVar1 = fVar1 + fVar7;
  }
  fVar4 = fVar5 + fVar8;
  if (0.0 <= fVar8) {
    fVar4 = fVar5;
    fVar1 = fVar1 + fVar8;
  }
  fVar5 = fVar4 - fVar6;
  if (fVar6 <= DAT_00695770) {
    fVar5 = fVar4;
    fVar1 = fVar1 - fVar6;
  }
  fVar4 = fVar5 - fVar2;
  if (fVar2 <= DAT_00695770) {
    fVar4 = fVar5;
    fVar1 = fVar1 - fVar2;
  }
                    /* catch() { ... } // from try @ 005ae8b0 with catch @ 005ae95c */
  fVar2 = fVar4 - fVar3;
  if (fVar3 <= DAT_00695770) {
    fVar2 = fVar4;
    fVar1 = fVar1 - fVar3;
  }
  return fVar1 + fVar2;
}


