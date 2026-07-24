/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00548158
 * Function: Caver::MeshClipper::ClipWithPlane
 * Signature: undefined __thiscall ClipWithPlane(MeshClipper * this, Vector4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshClipper::ClipWithPlane(Caver::Vector4 const&) */

void __thiscall Caver::MeshClipper::ClipWithPlane(MeshClipper *this,Vector4 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
                    /* try { // try from 00548160 to 00648177 has its CatchHandler @ 00548228 */
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  Vector3::Vector3((Vector3 *)&local_48,param_1);
  iVar4 = *(int *)(this + 0xa0);
  if (0 < iVar4) {
                    /* try { // try from 00548198 to 006481bf has its CatchHandler @ 00548218 */
    fVar15 = *(float *)(param_1 + 0xc);
    lVar9 = *(long *)(this + 0xa8);
    lVar8 = 0;
    pfVar10 = (float *)(*(long *)(this + 0x60) + 4);
    do {
      pfVar2 = pfVar10 + -1;
      fVar18 = *pfVar10;
      pfVar1 = pfVar10 + 1;
      pfVar10 = pfVar10 + 0x11;
                    /* try { // try from 005481c0 to 006481c7 has its CatchHandler @ 0054828c */
                    /* try { // try from 005481c8 to 0064824b has its CatchHandler @ 00548060 */
      *(float *)(lVar9 + lVar8 * 4) =
           (*pfVar2 * local_48 + fVar18 * fStack_44 + *pfVar1 * local_40) - fVar15;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  iVar4 = *(int *)(this + 0xb0);
  if (0 < iVar4) {
    lVar9 = *(long *)(this + 0xa8);
    lVar11 = *(long *)(this + 0xb8);
    lVar8 = 0;
    piVar14 = (int *)(*(long *)(this + 0x80) + 8);
    do {
      fVar18 = *(float *)(lVar9 + (long)piVar14[-2] * 4);
      iVar5 = *piVar14;
                    /* catch() { ... } // from try @ 00548198 with catch @ 00548218 */
      fVar17 = *(float *)(lVar9 + (long)piVar14[-1] * 4);
      piVar14 = piVar14 + 3;
      bVar7 = 0.0 <= fVar18;
      fVar15 = ABS(fVar18);
                    /* catch() { ... } // from try @ 00548160 with catch @ 00548228 */
      if (bVar7) {
        fVar15 = 0.0;
      }
      fVar16 = ABS(fVar18);
      if (fVar18 == 0.0 || !bVar7) {
        fVar16 = fVar15;
      }
      fVar15 = *(float *)(lVar9 + (long)iVar5 * 4);
      uVar12 = 0xffffffff;
      uVar13 = uVar12;
      uVar3 = uVar12;
      if (bVar7) {
        uVar3 = 1;
        uVar13 = 0;
      }
      if (fVar18 <= 0.0) {
        uVar3 = uVar13;
      }
      fVar18 = ABS(fVar17);
      if (0.0 <= fVar17) {
        uVar12 = 1;
      }
                    /* try { // try from 0054824c to 00648273 has its CatchHandler @ 005482e0 */
      fVar17 = fVar18;
      if (fVar18 <= fVar16) {
        fVar17 = fVar16;
      }
      if (fVar18 <= fVar16) {
        uVar12 = uVar3;
      }
      uVar13 = 0xffffffff;
      if (0.0 <= fVar15) {
        uVar13 = 1;
      }
      if (ABS(fVar15) <= fVar17) {
        uVar13 = uVar12;
      }
      *(undefined4 *)(lVar11 + lVar8 * 4) = uVar13;
      lVar8 = lVar8 + 1;
                    /* try { // try from 00548274 to 006482af has its CatchHandler @ 00548060 */
                    /* catch() { ... } // from try @ 005480c8 with catch @ 00548278 */
    } while (lVar8 < iVar4);
  }
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00548114 with catch @ 0054828c
                       catch() { ... } // from try @ 005481c0 with catch @ 0054828c */
  return;
}


