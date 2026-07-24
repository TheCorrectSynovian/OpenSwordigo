/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b36c
 * Function: Caver::RenderingContext::SetIdentityMatrix
 * Signature: undefined __thiscall SetIdentityMatrix(RenderingContext * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetIdentityMatrix() */

void __thiscall Caver::RenderingContext::SetIdentityMatrix(RenderingContext *this)

{
  RenderingContext *pRVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  RenderingContext *pRVar5;
  RenderingContext *pRVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_70 [7];
  undefined8 uStack_38;
  long local_28;
  
                    /* catch() { ... } // from try @ 0058a43c with catch @ 0058b374
                       catch() { ... } // from try @ 0058a4e4 with catch @ 0058b374 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  pRVar1 = this + 0xc4;
  pRVar6 = pRVar1;
  if (pRVar1 <= this + 0x88) {
    pRVar6 = this + 0x88;
  }
  uVar2 = ((ulong)(pRVar6 + (-0x85 - (long)this)) >> 2) + 1;
  local_70[5] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  local_70[4] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_38 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  local_70[6] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  local_70[1] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  local_70[0] = *(undefined8 *)PTR_identityMatrix_007e74c8;
  local_70[3] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  local_70[2] = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  if (uVar2 < 8) {
                    /* catch() { ... } // from try @ 0058a690 with catch @ 0058b3d0 */
    pRVar5 = this + 0x84;
    puVar7 = local_70;
  }
  else {
    uVar8 = uVar2 & 0x7ffffffffffffff8;
    puVar7 = (undefined8 *)((long)local_70 + uVar8 * 4);
    pRVar6 = this + 0x94;
    pRVar5 = this + uVar8 * 4 + 0x84;
    puVar9 = local_70 + 2;
    uVar10 = uVar8;
    do {
      puVar4 = puVar9 + -1;
      uVar11 = puVar9[-2];
      uVar13 = puVar9[1];
      uVar12 = *puVar9;
      uVar10 = uVar10 - 8;
      puVar9 = puVar9 + 4;
      *(undefined8 *)(pRVar6 + -8) = *puVar4;
      *(undefined8 *)(pRVar6 + -0x10) = uVar11;
      *(undefined8 *)(pRVar6 + 8) = uVar13;
      *(undefined8 *)pRVar6 = uVar12;
      pRVar6 = pRVar6 + 0x20;
    } while (uVar10 != 0);
    if (uVar2 == uVar8) goto LAB_0058b42c;
  }
  do {
    pRVar6 = pRVar5 + 4;
    *(undefined4 *)pRVar5 = *(undefined4 *)puVar7;
    pRVar5 = pRVar6;
    puVar7 = (undefined8 *)((long)puVar7 + 4);
  } while (pRVar6 < pRVar1);
LAB_0058b42c:
  if (*(int *)this == 0) {
                    /* catch() { ... } // from try @ 0058a530 with catch @ 0058b440
                       catch() { ... } // from try @ 0058a55c with catch @ 0058b440
                       catch() { ... } // from try @ 0058a5fc with catch @ 0058b440 */
    glLoadIdentity();
  }
  else {
    this[0x80] = (RenderingContext)0x1;
                    /* catch() { ... } // from try @ 0058a900 with catch @ 0058b43c
                       catch() { ... } // from try @ 0058a914 with catch @ 0058b43c */
  }
                    /* catch() { ... } // from try @ 0058a9c0 with catch @ 0058b450
                       catch() { ... } // from try @ 0058aa68 with catch @ 0058b450
                       catch() { ... } // from try @ 0058aa7c with catch @ 0058b450 */
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


