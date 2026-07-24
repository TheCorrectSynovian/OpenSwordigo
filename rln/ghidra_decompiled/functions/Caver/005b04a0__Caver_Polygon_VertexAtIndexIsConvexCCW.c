/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b04a0
 * Function: Caver::Polygon::VertexAtIndexIsConvexCCW
 * Signature: undefined __thiscall VertexAtIndexIsConvexCCW(Polygon * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Polygon::VertexAtIndexIsConvexCCW(int) const */

bool __thiscall Caver::Polygon::VertexAtIndexIsConvexCCW(Polygon *this,int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 < 1) {
    if (this[0x21] == (Polygon)0x0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)this + -1;
    }
  }
  else {
    iVar3 = param_1 + -1;
  }
  lVar4 = *(long *)(this + 8);
  pfVar1 = (float *)(lVar4 + (long)iVar3 * 8);
  pfVar2 = (float *)(lVar4 + (long)param_1 * 8);
  fVar6 = *pfVar2;
  fVar5 = pfVar2[1];
  iVar3 = param_1 + 1;
  if (*(int *)this <= iVar3) {
    iVar3 = (byte)this[0x21] - 1;
  }
  pfVar2 = (float *)(lVar4 + (long)iVar3 * 8);
  return 0.0 <= (fVar6 - *pfVar1) * (pfVar2[1] - fVar5) - (fVar5 - pfVar1[1]) * (*pfVar2 - fVar6);
}


