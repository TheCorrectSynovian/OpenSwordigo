/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae4b4
 * Function: Caver::Matrix4::operator*=
 * Signature: undefined __thiscall operator*=(Matrix4 * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Caver::Matrix4::operator*=(Matrix4 *this,float param_1)

{
  Matrix4 *pMVar1;
  ulong uVar2;
  Matrix4 *pMVar3;
  ulong uVar4;
  ulong uVar5;
  
  pMVar1 = this + 0x40;
  pMVar3 = pMVar1;
  if (pMVar1 <= this + 4) {
    pMVar3 = this + 4;
  }
  uVar2 = ((ulong)(pMVar3 + ~(ulong)this) >> 2) + 1;
  if (7 < uVar2) {
    uVar4 = uVar2 & 0x7ffffffffffffff8;
    pMVar3 = this + 0x10;
    uVar5 = uVar4;
    do {
      uVar5 = uVar5 - 8;
      *(ulong *)(pMVar3 + -8) =
           CONCAT44((float)((ulong)*(undefined8 *)(pMVar3 + -8) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pMVar3 + -8) * param_1);
      *(ulong *)(pMVar3 + -0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(pMVar3 + -0x10) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pMVar3 + -0x10) * param_1);
      *(ulong *)(pMVar3 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(pMVar3 + 8) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pMVar3 + 8) * param_1);
      *(ulong *)pMVar3 =
           CONCAT44((float)((ulong)*(undefined8 *)pMVar3 >> 0x20) * param_1,
                    (float)*(undefined8 *)pMVar3 * param_1);
      pMVar3 = pMVar3 + 0x20;
    } while (uVar5 != 0);
    this = this + uVar4 * 4;
    if (uVar2 == uVar4) {
      return;
    }
  }
  do {
                    /* try { // try from 005ae518 to 006ae553 has its CatchHandler @ 005ae518
                       catch() { ... } // from try @ 005ae518 with catch @ 005ae518
                       catch() { ... } // from try @ 005ae564 with catch @ 005ae518
                       catch() { ... } // from try @ 005ae5a0 with catch @ 005ae518
                       catch() { ... } // from try @ 005ae744 with catch @ 005ae518 */
    pMVar3 = this + 4;
    *(float *)this = *(float *)this * param_1;
    this = pMVar3;
  } while (pMVar3 < pMVar1);
  return;
}


