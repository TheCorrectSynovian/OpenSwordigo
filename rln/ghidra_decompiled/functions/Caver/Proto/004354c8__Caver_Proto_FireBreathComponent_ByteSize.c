/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004354c8
 * Function: Caver::Proto::FireBreathComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(FireBreathComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::ByteSize() const */

int __thiscall Caver::Proto::FireBreathComponent::ByteSize(FireBreathComponent *this)

{
  FireBreathComponent *pFVar1;
  uint uVar2;
  FireBreathComponent FVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  FVar3 = this[0x20];
  uVar6 = (uint)(byte)FVar3;
  if (FVar3 == (FireBreathComponent)0x0) {
    iVar5 = 0;
    goto LAB_0043559c;
  }
                    /* try { // try from 004354e4 to 00535563 has its CatchHandler @ 004354e4
                       catch() { ... } // from try @ 004354e4 with catch @ 004354e4
                       catch() { ... } // from try @ 004355f0 with catch @ 004354e4
                       catch() { ... } // from try @ 004356a8 with catch @ 004354e4 */
  if (((byte)FVar3 & 1) == 0) {
    iVar5 = 0;
joined_r0x00435538:
    if (((byte)FVar3 >> 1 & 1) != 0) {
LAB_004354f0:
      uVar2 = *(uint *)(this + 0x10);
      if ((int)uVar2 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar2 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
        uVar6 = *(uint *)(this + 0x20);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar4 + iVar5;
    }
  }
  else {
    uVar2 = *(uint *)(this + 0xc);
    if ((int)uVar2 < 0) {
      iVar5 = 0xb;
      goto joined_r0x00435538;
    }
    if (uVar2 < 0x80) {
      iVar5 = 2;
      if (((byte)FVar3 >> 1 & 1) == 0) goto LAB_00435550;
      goto LAB_004354f0;
    }
    iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    uVar6 = *(uint *)(this + 0x20);
    iVar5 = iVar5 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_004354f0;
  }
LAB_00435550:
  if ((uVar6 >> 2 & 1) != 0) {
                    /* try { // try from 00435564 to 00535577 has its CatchHandler @ 004356b0 */
    pFVar1 = *(FireBreathComponent **)PTR_default_instance__007e77e8;
    if (*(long *)(this + 0x18) != 0) {
      pFVar1 = this;
    }
    uVar6 = FloatColor::ByteSize(*(FloatColor **)(pFVar1 + 0x18));
                    /* try { // try from 00435578 to 005355db has its CatchHandler @ 004356b4 */
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar5 = iVar5 + uVar6 + iVar4 + 1;
  }
LAB_0043559c:
  *(int *)(this + 8) = iVar5;
  return iVar5;
}


