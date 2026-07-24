/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005abf8c
 * Function: Caver::BezierSegment::IntersectsWithX
 * Signature: undefined __thiscall IntersectsWithX(BezierSegment * this, float param_1, int * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BezierSegment::IntersectsWithX(float, int*, float*) */

void __thiscall
Caver::BezierSegment::IntersectsWithX(BezierSegment *this,float param_1,int *param_2,float *param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_44 [3];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar8 = *(float *)this;
  fVar9 = *(float *)(this + 8) * 3.0;
                    /* catch() { ... } // from try @ 005abf3c with catch @ 005abfd0 */
  uVar3 = RootsForCubicEquation
                    (*(float *)(this + 0x18) + ((fVar9 - fVar8) - *(float *)(this + 0x10) * 3.0),
                     fVar8 * 3.0 + *(float *)(this + 8) * -6.0 + *(float *)(this + 0x10) * 3.0,
                     fVar9 - fVar8 * 3.0,fVar8 - param_1,local_44);
  fVar9 = DAT_006972e8;
  fVar8 = DAT_006972e4;
  if ((int)uVar3 < 1) {
    bVar2 = false;
  }
  else {
    iVar4 = 0;
    uVar5 = (ulong)uVar3;
    pfVar6 = local_44;
    do {
      fVar7 = *pfVar6;
      if ((fVar8 < fVar7) && (fVar7 < fVar9)) {
        if (param_3 != (float *)0x0) {
                    /* try { // try from 005ac040 to 006ac18b has its CatchHandler @ 005ac040
                       catch() { ... } // from try @ 005ac040 with catch @ 005ac040
                       catch() { ... } // from try @ 005ac190 with catch @ 005ac040
                       catch() { ... } // from try @ 005ac1e4 with catch @ 005ac040
                       catch() { ... } // from try @ 005ac2ec with catch @ 005ac040
                       catch() { ... } // from try @ 005ac35c with catch @ 005ac040
                       catch() { ... } // from try @ 005ac3cc with catch @ 005ac040
                       catch() { ... } // from try @ 005ac43c with catch @ 005ac040
                       catch() { ... } // from try @ 005ac4ac with catch @ 005ac040 */
          param_3[iVar4] = fVar7;
        }
        iVar4 = iVar4 + 1;
      }
      uVar5 = uVar5 - 1;
      pfVar6 = pfVar6 + 1;
    } while (uVar5 != 0);
    if (param_2 != (int *)0x0) {
      *param_2 = iVar4;
    }
    bVar2 = 0 < iVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


