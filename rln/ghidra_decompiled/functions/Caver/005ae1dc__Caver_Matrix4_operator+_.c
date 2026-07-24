/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae1dc
 * Function: Caver::Matrix4::operator+=
 * Signature: undefined __thiscall operator+=(Matrix4 * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::TEMPNAMEPLACEHOLDERVALUE(Caver::Matrix4 const&) */

void __thiscall Caver::Matrix4::operator+=(Matrix4 *this,Matrix4 *param_1)

{
  Matrix4 *pMVar1;
  ulong uVar2;
  long lVar3;
  Matrix4 *pMVar4;
  Matrix4 *pMVar5;
  ulong uVar6;
  Matrix4 *pMVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pMVar1 = this + 0x40;
  pMVar5 = this + 4;
  pMVar7 = pMVar1;
  if (pMVar1 <= pMVar5) {
    pMVar7 = pMVar5;
  }
  uVar2 = ((ulong)(pMVar7 + ~(ulong)this) >> 2) + 1;
                    /* try { // try from 005ae200 to 006ae20f has its CatchHandler @ 005ae4a4 */
  if (7 < uVar2) {
    pMVar7 = pMVar1;
    if (pMVar1 <= pMVar5) {
      pMVar7 = pMVar5;
    }
                    /* try { // try from 005ae210 to 006ae23b has its CatchHandler @ 005ae1c4 */
    lVar3 = ((ulong)(pMVar7 + ~(ulong)this) & 0xfffffffffffffffc) + 4;
    if ((param_1 + lVar3 <= this) || (this + lVar3 <= param_1)) {
      uVar6 = uVar2 & 0x7ffffffffffffff8;
      pMVar5 = this + 0x10;
      this = this + uVar6 * 4;
      pMVar7 = param_1 + 0x10;
      uVar8 = uVar6;
      do {
                    /* try { // try from 005ae270 to 006ae283 has its CatchHandler @ 005ae428 */
        pMVar4 = pMVar7 + -8;
        uVar9 = *(undefined8 *)(pMVar7 + -0x10);
        uVar11 = *(undefined8 *)(pMVar7 + 8);
        uVar10 = *(undefined8 *)pMVar7;
        uVar8 = uVar8 - 8;
        pMVar7 = pMVar7 + 0x20;
        *(ulong *)(pMVar5 + -8) =
             CONCAT44((float)((ulong)*(undefined8 *)pMVar4 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(pMVar5 + -8) >> 0x20),
                      (float)*(undefined8 *)pMVar4 + (float)*(undefined8 *)(pMVar5 + -8));
        *(ulong *)(pMVar5 + -0x10) =
             CONCAT44((float)((ulong)uVar9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(pMVar5 + -0x10) >> 0x20),
                      (float)uVar9 + (float)*(undefined8 *)(pMVar5 + -0x10));
        *(ulong *)(pMVar5 + 8) =
             CONCAT44((float)((ulong)uVar11 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(pMVar5 + 8) >> 0x20),
                      (float)uVar11 + (float)*(undefined8 *)(pMVar5 + 8));
        *(ulong *)pMVar5 =
             CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)*(undefined8 *)pMVar5 >> 0x20)
                      ,(float)uVar10 + (float)*(undefined8 *)pMVar5);
        pMVar5 = pMVar5 + 0x20;
      } while (uVar8 != 0);
      param_1 = param_1 + uVar6 * 4;
                    /* try { // try from 005ae298 to 006ae2ab has its CatchHandler @ 005ae420 */
      if (uVar2 == uVar6) {
        return;
      }
    }
  }
  do {
                    /* try { // try from 005ae23c to 006ae24b has its CatchHandler @ 005ae46c */
    pMVar5 = this + 4;
    *(float *)this = *(float *)param_1 + *(float *)this;
    param_1 = param_1 + 4;
    this = pMVar5;
                    /* try { // try from 005ae24c to 006ae26f has its CatchHandler @ 005ae1c4 */
  } while (pMVar5 < pMVar1);
  return;
}


