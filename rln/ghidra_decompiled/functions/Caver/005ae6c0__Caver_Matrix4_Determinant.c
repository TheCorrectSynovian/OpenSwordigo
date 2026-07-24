/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae6c0
 * Function: Caver::Matrix4::Determinant
 * Signature: undefined __thiscall Determinant(Matrix4 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::Determinant() const */

float __thiscall Caver::Matrix4::Determinant(Matrix4 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0x10);
  fVar4 = *(float *)(this + 0x14);
  fVar5 = *(float *)(this + 0x20);
  fVar6 = *(float *)(this + 0x24);
  fVar7 = *(float *)(this + 0x30);
  fVar8 = *(float *)(this + 0x34);
  fVar9 = *(float *)(this + 8);
  fVar10 = *(float *)(this + 0xc);
  fVar11 = *(float *)(this + 0x18);
  fVar12 = *(float *)(this + 0x1c);
  fVar13 = *(float *)(this + 0x28);
  fVar14 = *(float *)(this + 0x2c);
  fVar15 = *(float *)(this + 0x38);
  fVar16 = *(float *)(this + 0x3c);
                    /* try { // try from 005ae6f8 to 006ae70b has its CatchHandler @ 005ae770 */
                    /* try { // try from 005ae730 to 006ae743 has its CatchHandler @ 005ae76c */
                    /* try { // try from 005ae744 to 006ae86b has its CatchHandler @ 005ae518 */
                    /* catch() { ... } // from try @ 005ae730 with catch @ 005ae76c */
                    /* catch() { ... } // from try @ 005ae6f8 with catch @ 005ae770 */
                    /* catch() { ... } // from try @ 005ae5ec with catch @ 005ae774 */
                    /* catch() { ... } // from try @ 005ae690 with catch @ 005ae778 */
                    /* catch() { ... } // from try @ 005ae5c4 with catch @ 005ae77c */
  return (fVar5 * fVar8 - fVar7 * fVar6) * (fVar9 * fVar12 - fVar11 * fVar10) +
         (((fVar3 * fVar6 - fVar5 * fVar4) * (fVar9 * fVar16 - fVar15 * fVar10) +
          (fVar1 * fVar8 - fVar7 * fVar2) * (fVar11 * fVar14 - fVar13 * fVar12) +
          ((fVar1 * fVar4 - fVar3 * fVar2) * (fVar13 * fVar16 - fVar15 * fVar14) -
          (fVar1 * fVar6 - fVar5 * fVar2) * (fVar11 * fVar16 - fVar15 * fVar12))) -
         (fVar3 * fVar8 - fVar7 * fVar4) * (fVar9 * fVar14 - fVar13 * fVar10));
}


