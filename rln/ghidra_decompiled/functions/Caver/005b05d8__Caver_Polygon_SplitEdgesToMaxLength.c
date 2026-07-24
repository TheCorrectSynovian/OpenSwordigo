/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b05d8
 * Function: Caver::Polygon::SplitEdgesToMaxLength
 * Signature: undefined __thiscall SplitEdgesToMaxLength(Polygon * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Polygon::SplitEdgesToMaxLength(float) */

void __thiscall Caver::Polygon::SplitEdgesToMaxLength(Polygon *this,float param_1)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  Polygon PVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  PVar6 = this[0x21];
  iVar5 = *(int *)this;
  if (0 < (int)(iVar5 + (uint)(byte)PVar6 + -1)) {
    iVar7 = 0;
    do {
      uVar9 = (long)iVar7 + 1;
      pfVar1 = (float *)(*(long *)(this + 8) + (long)iVar7 * 8);
      pfVar3 = (float *)(*(long *)(this + 8) + uVar9 * 8);
      fVar13 = *pfVar1;
      fVar14 = pfVar1[1];
      fVar15 = *pfVar3 - fVar13;
      fVar16 = pfVar3[1] - fVar14;
      fVar11 = fVar15 * fVar15 + fVar16 * fVar16;
                    /* try { // try from 005b066c to 006b066f has its CatchHandler @ 005b0760 */
                    /* try { // try from 005b0670 to 006b070b has its CatchHandler @ 005b040c */
      if (param_1 * param_1 < fVar11) {
        fVar12 = SQRT(fVar11);
        if (NAN(fVar12)) {
          fVar12 = sqrtf(fVar11);
        }
        local_a0 = fVar15;
        fStack_9c = fVar16;
        Vector2::Normalize((Vector2 *)&local_a0);
        uVar8 = (uint)(fVar12 / param_1);
        if ((int)uVar8 < 1) {
          iVar5 = *(int *)this;
        }
        else {
          uVar9 = 0;
          lVar10 = (long)iVar7 << 3;
          do {
            uVar9 = uVar9 + 1;
            fVar11 = (fVar12 / (float)(int)(uVar8 + 1)) * (float)(int)uVar9;
            lVar2 = *(long *)(this + 8) + lVar10 + 8;
            local_a8 = fVar13 + fVar11 * local_a0;
            fStack_a4 = fVar14 + fVar11 * fStack_9c;
            if ((lVar2 == *(long *)(this + 0x10)) &&
               (*(long *)(this + 0x10) != *(long *)(this + 0x18))) {
              lVar2 = *(long *)(this + 8) + lVar10;
              *(float *)(lVar2 + 8) = local_a8;
              *(float *)(lVar2 + 0xc) = fStack_a4;
                    /* try { // try from 005b070c to 006b070f has its CatchHandler @ 005b0754 */
              *(long *)(this + 0x10) = lVar2 + 0x10;
                    /* try { // try from 005b0710 to 006b0787 has its CatchHandler @ 005b040c */
            }
            else {
              std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux
                        ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(this + 8),lVar2,
                         &local_a8);
            }
            lVar10 = lVar10 + 8;
            iVar5 = *(int *)this + 1;
            *(int *)this = iVar5;
          } while (uVar8 != uVar9);
        }
        PVar6 = this[0x21];
        uVar9 = (ulong)(iVar7 + uVar8 + 1);
      }
                    /* catch() { ... } // from try @ 005b070c with catch @ 005b0754 */
      iVar7 = (int)uVar9;
    } while (iVar7 < iVar5 + (char)((char)PVar6 - 1));
  }
                    /* catch() { ... } // from try @ 005b066c with catch @ 005b0760 */
                    /* catch() { ... } // from try @ 005b05d0 with catch @ 005b0764 */
                    /* catch() { ... } // from try @ 005b0538 with catch @ 005b0768 */
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005b0498 with catch @ 005b0774 */
  return;
}


