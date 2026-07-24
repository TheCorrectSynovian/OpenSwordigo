/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411c94
 * Function: Caver::Proto::AnimationControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::ByteSize() const */

void __thiscall
Caver::Proto::AnimationControllerComponent::ByteSize(AnimationControllerComponent *this)

{
  uint uVar1;
  AnimationControllerComponent AVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
                    /* try { // try from 00411c94 to 00511c97 has its CatchHandler @ 00411cf4 */
                    /* try { // try from 00411c98 to 00511d13 has its CatchHandler @ 00411c28 */
  AVar2 = this[0x18];
  uVar5 = (uint)(byte)AVar2;
  if (AVar2 == (AnimationControllerComponent)0x0) {
    iVar4 = 0;
    goto LAB_00411d24;
  }
  if (((byte)AVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x00411d00:
    if (((byte)AVar2 >> 1 & 1) != 0) {
LAB_00411cb8:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
                    /* catch() { ... } // from try @ 00411c94 with catch @ 00411cf4 */
        iVar3 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x18);
        iVar3 = iVar3 + 1;
      }
                    /* try { // try from 00411d14 to 00511d3b has its CatchHandler @ 00411d44 */
      iVar4 = iVar3 + iVar4;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
      goto joined_r0x00411d00;
    }
    if (uVar1 < 0x80) {
      iVar4 = 2;
      if (((byte)AVar2 >> 1 & 1) == 0) goto LAB_00411d18;
      goto LAB_00411cb8;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x18);
                    /* try { // try from 00411d3c to 00511d47 has its CatchHandler @ 00411c28 */
    iVar4 = iVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00411cb8;
  }
LAB_00411d18:
  if ((uVar5 & 4) != 0) {
    iVar4 = iVar4 + 2;
  }
LAB_00411d24:
  *(int *)(this + 8) = iVar4;
  return;
}


