/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005abcd4
 * Function: Caver::BezierSegment::MovePathLocation
 * Signature: undefined __thiscall MovePathLocation(BezierSegment * this, float param_1, int param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BezierSegment::MovePathLocation(float, int, float) const */

undefined1  [16] __thiscall
Caver::BezierSegment::MovePathLocation(BezierSegment *this,float param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 in_register_00005004;
  ulong uVar5;
  undefined8 in_register_00005008;
  undefined1 auVar6 [16];
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar5 = CONCAT44(in_register_00005004,param_1);
                    /* try { // try from 005abce8 to 006abcf3 has its CatchHandler @ 005abf0c */
                    /* try { // try from 005abcfc to 006abd77 has its CatchHandler @ 005abf18 */
  if (_LAB_00688900 <= param_3) {
    fVar2 = (*(float *)(this + 8) - *(float *)this) * (*(float *)(this + 8) - *(float *)this) +
            (*(float *)(this + 0xc) - *(float *)(this + 4)) *
            (*(float *)(this + 0xc) - *(float *)(this + 4));
    fVar18 = SQRT(fVar2);
    if (NAN(fVar18)) {
      fVar18 = sqrtf(fVar2);
    }
    fVar7 = (*(float *)(this + 0x10) - *(float *)(this + 8)) *
            (*(float *)(this + 0x10) - *(float *)(this + 8)) +
            (*(float *)(this + 0x14) - *(float *)(this + 0xc)) *
            (*(float *)(this + 0x14) - *(float *)(this + 0xc));
    fVar2 = SQRT(fVar7);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar7);
    }
    fVar9 = (*(float *)(this + 0x18) - *(float *)(this + 0x10)) *
            (*(float *)(this + 0x18) - *(float *)(this + 0x10)) +
            (*(float *)(this + 0x1c) - *(float *)(this + 0x14)) *
            (*(float *)(this + 0x1c) - *(float *)(this + 0x14));
    fVar7 = SQRT(fVar9);
    if (NAN(fVar7)) {
                    /* try { // try from 005abdb8 to 006abddf has its CatchHandler @ 005abe9c */
      fVar7 = sqrtf(fVar9);
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar9 = *(float *)this;
    fVar10 = *(float *)(this + 4);
    fVar11 = *(float *)(this + 8);
    fVar12 = *(float *)(this + 0xc);
                    /* try { // try from 005abde0 to 006abf3b has its CatchHandler @ 005abbf8 */
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    fVar15 = 1.0 - param_1;
    fVar3 = param_1 * param_1 * param_1;
    fVar20 = fVar15 * fVar15 * fVar15;
    fVar21 = fVar15 * param_1 * 3.0 * fVar15;
    fVar13 = *(float *)(this + 0x10);
    fVar14 = *(float *)(this + 0x14);
    fVar15 = fVar15 * param_1 * param_1 * 3.0;
    fVar16 = *(float *)(this + 0x18);
    fVar19 = *(float *)(this + 0x1c);
    iVar1 = 1;
    fVar24 = 0.0;
    fVar8 = fVar20 * fVar10 + fVar21 * fVar12 + fVar15 * fVar14 + fVar3 * fVar19;
    fVar3 = fVar20 * fVar9 + fVar21 * fVar11 + fVar15 * fVar13 + fVar3 * fVar16;
    while( true ) {
      fVar21 = ((param_3 - fVar24) * ((float)iVar1 / 7.0)) / (fVar18 + fVar2 + fVar7);
                    /* catch() { ... } // from try @ 005abdb8 with catch @ 005abe9c */
      fVar20 = (float)uVar5 + fVar21 * (float)param_2;
      fVar15 = fVar20;
      if (fVar20 <= 0.0) {
        fVar15 = 0.0;
      }
      if (1.0 < fVar15) {
        fVar15 = 1.0;
      }
      in_register_00005008 = 0;
      uVar5 = (ulong)(uint)fVar15;
      fVar4 = 1.0 - fVar15;
      fVar22 = fVar4 * fVar4 * fVar4;
      fVar23 = fVar4 * fVar15 * 3.0 * fVar4;
      fVar4 = fVar4 * fVar15 * fVar15 * 3.0;
      fVar15 = fVar15 * fVar15 * fVar15;
      fVar17 = fVar22 * fVar9 + fVar23 * fVar11 + fVar4 * fVar13 + fVar15 * fVar16;
                    /* catch() { ... } // from try @ 005abce8 with catch @ 005abf0c */
      fVar15 = fVar22 * fVar10 + fVar23 * fVar12 + fVar4 * fVar14 + fVar15 * fVar19;
      fVar3 = fVar3 - fVar17;
      fVar8 = fVar8 - fVar15;
                    /* catch() { ... } // from try @ 005abcfc with catch @ 005abf18 */
      fVar9 = fVar3 * fVar3 + fVar8 * fVar8;
      fVar8 = SQRT(fVar9);
      if (NAN(fVar8)) {
                    /* try { // try from 005abf3c to 006abf63 has its CatchHandler @ 005abfd0 */
        fVar8 = sqrtf(fVar9);
                    /* try { // try from 005abf64 to 006ac03f has its CatchHandler @ 005abbf8 */
      }
      if (iVar1 == 7) break;
      uVar5 = (ulong)(uint)fVar20;
      fVar9 = *(float *)this;
      fVar10 = *(float *)(this + 4);
      fVar11 = *(float *)(this + 8);
      fVar12 = *(float *)(this + 0xc);
      fVar13 = *(float *)(this + 0x10);
      fVar14 = *(float *)(this + 0x14);
      fVar16 = *(float *)(this + 0x18);
      fVar19 = *(float *)(this + 0x1c);
      fVar3 = -fVar8;
      if (0.0 <= fVar21) {
        fVar3 = fVar8;
      }
      iVar1 = iVar1 + 1;
      fVar24 = fVar24 + fVar3;
      fVar8 = fVar15;
      fVar3 = fVar17;
    }
  }
  auVar6._8_8_ = in_register_00005008;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


