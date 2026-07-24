/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b184
 * Function: Caver::RenderingContext::SetProjectionMatrix
 * Signature: undefined __thiscall SetProjectionMatrix(RenderingContext * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&) */

void __thiscall
Caver::RenderingContext::SetProjectionMatrix(RenderingContext *this,Matrix4 *param_1)

{
  RenderingContext *pRVar1;
  ulong uVar2;
  RenderingContext *pRVar3;
  Matrix4 *pMVar4;
  RenderingContext *pRVar5;
  RenderingContext *pRVar6;
  Matrix4 *pMVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  pRVar1 = this + 0x104;
  pRVar6 = this + 200;
  pRVar5 = pRVar1;
  if (pRVar1 <= pRVar6) {
    pRVar5 = pRVar6;
  }
                    /* catch() { ... } // from try @ 0058a300 with catch @ 0058b1b0 */
  uVar2 = ((ulong)(pRVar5 + (-0xc5 - (long)this)) >> 2) + 1;
                    /* catch() { ... } // from try @ 0058a2ac with catch @ 0058b1b4 */
  pRVar5 = this + 0xc4;
  pMVar7 = param_1;
  if (7 < uVar2) {
    pRVar3 = pRVar1;
    if (pRVar1 <= pRVar6) {
      pRVar3 = pRVar6;
    }
                    /* catch() { ... } // from try @ 0058a284 with catch @ 0058b1e4 */
                    /* catch() { ... } // from try @ 0058a27c with catch @ 0058b1e8 */
                    /* catch() { ... } // from try @ 0058a208 with catch @ 0058b1ec */
                    /* catch() { ... } // from try @ 0058a1a8 with catch @ 0058b1f0 */
    if (((RenderingContext *)
         (param_1 + ((ulong)(pRVar3 + (-0xc5 - (long)this)) & 0xfffffffffffffffc) + 4) <= pRVar5) ||
       (this + ((ulong)(pRVar3 + (-0xc5 - (long)this) + 200) & 0xfffffffffffffffc) <= param_1)) {
      uVar8 = uVar2 & 0x7ffffffffffffff8;
      pRVar6 = this + 0xd4;
      pRVar5 = this + uVar8 * 4 + 0xc4;
      pMVar7 = param_1 + 0x10;
      uVar9 = uVar8;
      do {
        pMVar4 = pMVar7 + -8;
        uVar10 = *(undefined8 *)(pMVar7 + -0x10);
        uVar12 = *(undefined8 *)(pMVar7 + 8);
        uVar11 = *(undefined8 *)pMVar7;
        uVar9 = uVar9 - 8;
        pMVar7 = pMVar7 + 0x20;
        *(undefined8 *)(pRVar6 + -8) = *(undefined8 *)pMVar4;
        *(undefined8 *)(pRVar6 + -0x10) = uVar10;
        *(undefined8 *)(pRVar6 + 8) = uVar12;
        *(undefined8 *)pRVar6 = uVar11;
        pRVar6 = pRVar6 + 0x20;
      } while (uVar9 != 0);
      pMVar7 = param_1 + uVar8 * 4;
                    /* catch() { ... } // from try @ 0058a178 with catch @ 0058b240 */
      if (uVar2 == uVar8) goto LAB_0058b254;
    }
  }
  do {
                    /* catch() { ... } // from try @ 0058a11c with catch @ 0058b244 */
    pRVar6 = pRVar5 + 4;
    *(undefined4 *)pRVar5 = *(undefined4 *)pMVar7;
    pRVar5 = pRVar6;
    pMVar7 = pMVar7 + 4;
  } while (pRVar6 < pRVar1);
LAB_0058b254:
  if (*(int *)this == 0) {
                    /* catch() { ... } // from try @ 0058a0f4 with catch @ 0058b274 */
    glMatrixMode(0x1701);
                    /* catch() { ... } // from try @ 0058a0ec with catch @ 0058b278 */
                    /* catch() { ... } // from try @ 0058a078 with catch @ 0058b27c */
    glLoadMatrixf(param_1);
    glMatrixMode(0x1700);
    return;
  }
  this[0x80] = (RenderingContext)0x1;
  return;
}


