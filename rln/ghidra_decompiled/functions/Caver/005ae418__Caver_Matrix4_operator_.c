/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae418
 * Function: Caver::Matrix4::operator*
 * Signature: undefined __thiscall operator*(Matrix4 * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::TEMPNAMEPLACEHOLDERVALUE(float) const */

void __thiscall Caver::Matrix4::operator*(Matrix4 *this,float param_1)

{
  float *pfVar1;
  ulong uVar2;
  float *in_x8;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 005ae3dc with catch @ 005ae418 */
  uVar6 = *(undefined8 *)(this + 0x30);
                    /* catch() { ... } // from try @ 005ae3a4 with catch @ 005ae41c */
  pfVar1 = in_x8 + 0x10;
                    /* catch() { ... } // from try @ 005ae298 with catch @ 005ae420 */
                    /* catch() { ... } // from try @ 005ae33c with catch @ 005ae424 */
                    /* catch() { ... } // from try @ 005ae270 with catch @ 005ae428 */
  *(undefined8 *)(in_x8 + 0xe) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(in_x8 + 0xc) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x20);
  pfVar3 = pfVar1;
  if (pfVar1 <= in_x8 + 1) {
    pfVar3 = in_x8 + 1;
  }
  *(undefined8 *)(in_x8 + 10) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(in_x8 + 8) = uVar6;
  uVar6 = *(undefined8 *)(this + 0x10);
  uVar2 = ((long)pfVar3 + ~(ulong)in_x8 >> 2) + 1;
  *(undefined8 *)(in_x8 + 6) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(in_x8 + 4) = uVar6;
  uVar6 = *(undefined8 *)this;
  *(undefined8 *)(in_x8 + 2) = *(undefined8 *)(this + 8);
  *(undefined8 *)in_x8 = uVar6;
                    /* catch() { ... } // from try @ 005ae2b0 with catch @ 005ae460 */
  if (7 < uVar2) {
    uVar4 = uVar2 & 0x7ffffffffffffff8;
                    /* catch() { ... } // from try @ 005ae23c with catch @ 005ae46c */
    pfVar3 = in_x8 + 4;
    uVar5 = uVar4;
    do {
      uVar5 = uVar5 - 8;
      *(ulong *)(pfVar3 + -2) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + -2) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pfVar3 + -2) * param_1);
      *(ulong *)(pfVar3 + -4) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + -4) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pfVar3 + -4) * param_1);
      *(ulong *)(pfVar3 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pfVar3 + 2) * param_1);
      *(ulong *)pfVar3 =
           CONCAT44((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * param_1,
                    (float)*(undefined8 *)pfVar3 * param_1);
      pfVar3 = pfVar3 + 8;
    } while (uVar5 != 0);
    in_x8 = in_x8 + uVar4;
    if (uVar2 == uVar4) {
      return;
    }
  }
  do {
    pfVar3 = in_x8 + 1;
                    /* catch() { ... } // from try @ 005ae200 with catch @ 005ae4a4 */
    *in_x8 = *in_x8 * param_1;
    in_x8 = pfVar3;
  } while (pfVar3 < pfVar1);
  return;
}


