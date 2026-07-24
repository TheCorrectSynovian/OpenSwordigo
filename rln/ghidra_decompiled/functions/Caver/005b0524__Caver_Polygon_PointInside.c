/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b0524
 * Function: Caver::Polygon::PointInside
 * Signature: undefined __thiscall PointInside(Polygon * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Polygon::PointInside(Caver::Vector2 const&) const */

uint __thiscall Caver::Polygon::PointInside(Polygon *this,Vector2 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(uint *)this;
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(this + 8);
    fVar8 = *(float *)(param_1 + 4);
                    /* try { // try from 005b0538 to 006b053b has its CatchHandler @ 005b0768 */
    uVar4 = 0;
                    /* try { // try from 005b053c to 006b05cf has its CatchHandler @ 005b040c */
    uVar2 = 0;
    iVar3 = uVar1 - 1;
    pfVar6 = (float *)(lVar5 + 4);
    do {
      lVar7 = (long)iVar3;
      if ((int)uVar1 <= iVar3) {
        lVar7 = 0;
      }
      fVar9 = *pfVar6;
      fVar10 = *(float *)(lVar5 + lVar7 * 8 + 4);
      if ((((fVar9 <= fVar8) && (fVar8 < fVar10)) || ((fVar8 < fVar9 && (fVar10 <= fVar8)))) &&
         (*(float *)param_1 <
          pfVar6[-1] +
          ((fVar8 - fVar9) * (*(float *)(lVar5 + lVar7 * 8) - pfVar6[-1])) / (fVar10 - fVar9))) {
        uVar2 = uVar2 ^ 1;
      }
      iVar3 = (int)uVar4;
      uVar4 = uVar4 + 1;
      pfVar6 = pfVar6 + 2;
    } while (uVar1 != uVar4);
    return uVar2;
  }
                    /* try { // try from 005b05d0 to 006b05d3 has its CatchHandler @ 005b0764 */
                    /* try { // try from 005b05d4 to 006b066b has its CatchHandler @ 005b040c */
  return 0;
}


