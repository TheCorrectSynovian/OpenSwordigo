/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ad998
 * Function: Caver::LineSegment::Bounds
 * Signature: undefined __cdecl Bounds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LineSegment::Bounds() const */

void Caver::LineSegment::Bounds(void)

{
  float *pfVar1;
  float fVar2;
  float *in_x0;
  float *in_x8;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = in_x0[1];
  pfVar3 = in_x0 + 2;
  fVar6 = in_x0[3];
  pfVar1 = pfVar3;
  fVar2 = *in_x0;
  if (*pfVar3 <= *in_x0) {
    pfVar1 = in_x0;
    fVar2 = *pfVar3;
  }
  if (fVar6 <= fVar5) {
    pfVar3 = in_x0;
  }
  fVar4 = *pfVar1;
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  fVar6 = pfVar3[1];
  *in_x8 = fVar2;
  in_x8[1] = fVar5;
  in_x8[2] = fVar4 - fVar2;
  in_x8[3] = fVar6 - fVar5;
  return;
}


