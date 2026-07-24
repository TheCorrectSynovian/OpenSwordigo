/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b290
 * Function: Caver::RenderingContext::SetMatrix
 * Signature: undefined __thiscall SetMatrix(RenderingContext * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&) */

void __thiscall Caver::RenderingContext::SetMatrix(RenderingContext *this,Matrix4 *param_1)

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
  
  pRVar1 = this + 0xc4;
                    /* catch() { ... } // from try @ 0058aae4 with catch @ 0058b294
                       catch() { ... } // from try @ 0058abf0 with catch @ 0058b294 */
  pRVar6 = this + 0x88;
  pRVar5 = pRVar1;
  if (pRVar1 <= pRVar6) {
    pRVar5 = pRVar6;
  }
                    /* catch() { ... } // from try @ 0058a97c with catch @ 0058b2a4
                       catch() { ... } // from try @ 0058ac14 with catch @ 0058b2a4 */
                    /* catch() { ... } // from try @ 0058a298 with catch @ 0058b2a8
                       catch() { ... } // from try @ 0058a2dc with catch @ 0058b2a8 */
  uVar2 = ((ulong)(pRVar5 + (-0x85 - (long)this)) >> 2) + 1;
  pRVar5 = this + 0x84;
  pMVar7 = param_1;
  if (7 < uVar2) {
    pRVar3 = pRVar1;
    if (pRVar1 <= pRVar6) {
      pRVar3 = pRVar6;
    }
                    /* catch() { ... } // from try @ 0058a108 with catch @ 0058b2e0
                       catch() { ... } // from try @ 0058a14c with catch @ 0058b2e0 */
    if (((RenderingContext *)
         (param_1 + ((ulong)(pRVar3 + (-0x85 - (long)this)) & 0xfffffffffffffffc) + 4) <= pRVar5) ||
       (this + ((ulong)(pRVar3 + (-0x85 - (long)this) + 0x88) & 0xfffffffffffffffc) <= param_1)) {
      uVar8 = uVar2 & 0x7ffffffffffffff8;
      pRVar6 = this + 0x94;
      pRVar5 = this + uVar8 * 4 + 0x84;
      pMVar7 = param_1 + 0x10;
      uVar9 = uVar8;
      do {
                    /* catch() { ... } // from try @ 0058a72c with catch @ 0058b320
                       catch() { ... } // from try @ 0058a7c0 with catch @ 0058b320 */
        pMVar4 = pMVar7 + -8;
        uVar10 = *(undefined8 *)(pMVar7 + -0x10);
        uVar12 = *(undefined8 *)(pMVar7 + 8);
        uVar11 = *(undefined8 *)pMVar7;
                    /* catch() { ... } // from try @ 0058a5ac with catch @ 0058b324 */
        uVar9 = uVar9 - 8;
        pMVar7 = pMVar7 + 0x20;
        *(undefined8 *)(pRVar6 + -8) = *(undefined8 *)pMVar4;
        *(undefined8 *)(pRVar6 + -0x10) = uVar10;
        *(undefined8 *)(pRVar6 + 8) = uVar12;
        *(undefined8 *)pRVar6 = uVar11;
        pRVar6 = pRVar6 + 0x20;
      } while (uVar9 != 0);
      pMVar7 = param_1 + uVar8 * 4;
      if (uVar2 == uVar8) goto LAB_0058b350;
    }
  }
  do {
    pRVar6 = pRVar5 + 4;
    *(undefined4 *)pRVar5 = *(undefined4 *)pMVar7;
    pRVar5 = pRVar6;
    pMVar7 = pMVar7 + 4;
  } while (pRVar6 < pRVar1);
LAB_0058b350:
  if (*(int *)this == 0) {
    glLoadMatrixf(param_1);
    return;
  }
  this[0x80] = (RenderingContext)0x1;
  return;
}


