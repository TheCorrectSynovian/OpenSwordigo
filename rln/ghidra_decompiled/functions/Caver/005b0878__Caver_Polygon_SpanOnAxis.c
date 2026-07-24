/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b0878
 * Function: Caver::Polygon::SpanOnAxis
 * Signature: undefined __thiscall SpanOnAxis(Polygon * this, Vector2 * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Polygon::SpanOnAxis(Caver::Vector2 const&, float*, float*) const */

void __thiscall
Caver::Polygon::SpanOnAxis(Polygon *this,Vector2 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)this;
  fVar6 = DAT_00689974;
  fVar5 = DAT_0068431c;
  if (0 < iVar1) {
    puVar2 = *(undefined8 **)(this + 8);
    fVar3 = DAT_00689974;
    fVar4 = DAT_0068431c;
    do {
      fVar6 = (float)*puVar2 * (float)*(undefined8 *)param_1 +
              (float)((ulong)*puVar2 >> 0x20) * (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      fVar5 = fVar6;
      if (fVar4 <= fVar6) {
        fVar5 = fVar4;
      }
      if (fVar6 <= fVar3) {
        fVar6 = fVar3;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      fVar3 = fVar6;
      fVar4 = fVar5;
    } while (iVar1 != 0);
  }
                    /* try { // try from 005b08cc to 006b08d7 has its CatchHandler @ 005b0aec */
  *param_2 = fVar5;
  *param_3 = fVar6;
  return;
}


