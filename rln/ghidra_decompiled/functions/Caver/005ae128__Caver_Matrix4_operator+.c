/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae128
 * Function: Caver::Matrix4::operator+
 * Signature: undefined __thiscall operator+(Matrix4 * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::TEMPNAMEPLACEHOLDERVALUE(Caver::Matrix4 const&) const */

void __thiscall Caver::Matrix4::operator+(Matrix4 *this,Matrix4 *param_1)

{
  float *pfVar1;
  ulong uVar2;
  Matrix4 *pMVar3;
  float *in_x8;
  ulong uVar4;
  float *pfVar5;
  Matrix4 *pMVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(this + 0x30);
  pfVar1 = in_x8 + 0x10;
  *(undefined8 *)(in_x8 + 0xe) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(in_x8 + 0xc) = uVar8;
  uVar8 = *(undefined8 *)(this + 0x20);
  pfVar5 = pfVar1;
  if (pfVar1 <= in_x8 + 1) {
    pfVar5 = in_x8 + 1;
  }
  *(undefined8 *)(in_x8 + 10) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(in_x8 + 8) = uVar8;
                    /* catch() { ... } // from try @ 005adeac with catch @ 005ae150 */
  uVar8 = *(undefined8 *)(this + 0x10);
  uVar2 = ((long)pfVar5 + ~(ulong)in_x8 >> 2) + 1;
  *(undefined8 *)(in_x8 + 6) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(in_x8 + 4) = uVar8;
  uVar8 = *(undefined8 *)this;
  *(undefined8 *)(in_x8 + 2) = *(undefined8 *)(this + 8);
  *(undefined8 *)in_x8 = uVar8;
  if (7 < uVar2) {
    uVar4 = uVar2 & 0x7ffffffffffffff8;
    pfVar5 = in_x8 + 4;
    in_x8 = in_x8 + uVar4;
    pMVar6 = param_1 + 0x10;
    uVar7 = uVar4;
    do {
      pMVar3 = pMVar6 + -8;
      uVar8 = *(undefined8 *)(pMVar6 + -0x10);
      uVar10 = *(undefined8 *)(pMVar6 + 8);
      uVar9 = *(undefined8 *)pMVar6;
      uVar7 = uVar7 - 8;
      pMVar6 = pMVar6 + 0x20;
      *(ulong *)(pfVar5 + -2) =
           CONCAT44((float)((ulong)*(undefined8 *)pMVar3 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20),
                    (float)*(undefined8 *)pMVar3 + (float)*(undefined8 *)(pfVar5 + -2));
      *(ulong *)(pfVar5 + -4) =
           CONCAT44((float)((ulong)uVar8 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(pfVar5 + -4) >> 0x20),
                    (float)uVar8 + (float)*(undefined8 *)(pfVar5 + -4));
      *(ulong *)(pfVar5 + 2) =
           CONCAT44((float)((ulong)uVar10 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20),
                    (float)uVar10 + (float)*(undefined8 *)(pfVar5 + 2));
      *(ulong *)pfVar5 =
           CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)*(undefined8 *)pfVar5 >> 0x20),
                    (float)uVar9 + (float)*(undefined8 *)pfVar5);
      pfVar5 = pfVar5 + 8;
    } while (uVar7 != 0);
    param_1 = param_1 + uVar4 * 4;
    if (uVar2 == uVar4) {
      return;
    }
  }
  do {
                    /* try { // try from 005ae1c4 to 006ae1ff has its CatchHandler @ 005ae1c4
                       catch() { ... } // from try @ 005ae1c4 with catch @ 005ae1c4
                       catch() { ... } // from try @ 005ae210 with catch @ 005ae1c4
                       catch() { ... } // from try @ 005ae24c with catch @ 005ae1c4
                       catch() { ... } // from try @ 005ae3f0 with catch @ 005ae1c4 */
    pfVar5 = in_x8 + 1;
    *in_x8 = *(float *)param_1 + *in_x8;
    in_x8 = pfVar5;
    param_1 = param_1 + 4;
  } while (pfVar5 < pfVar1);
  return;
}


