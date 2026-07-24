/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415098
 * Function: Caver::Proto::BushControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(BushControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::ByteSize() const */

int __thiscall Caver::Proto::BushControllerComponent::ByteSize(BushControllerComponent *this)

{
  uint uVar1;
  BushControllerComponent BVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
                    /* try { // try from 00415098 to 0051509b has its CatchHandler @ 004150a0 */
                    /* catch() { ... } // from try @ 00415098 with catch @ 004150a0 */
  BVar2 = this[0x18];
  uVar5 = (uint)(byte)BVar2;
  if (BVar2 == (BushControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_00415160;
  }
  if (((byte)BVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x00415104:
    if (((byte)BVar2 >> 1 & 1) != 0) {
LAB_004150bc:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x18);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
      goto joined_r0x00415104;
    }
    if (uVar1 < 0x80) {
      iVar3 = 2;
      if (((byte)BVar2 >> 1 & 1) == 0) goto LAB_0041511c;
      goto LAB_004150bc;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x18);
    iVar3 = iVar3 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_004150bc;
  }
LAB_0041511c:
  if ((uVar5 >> 2 & 1) != 0) {
    uVar5 = *(uint *)(this + 0x14);
    if ((int)uVar5 < 0) {
                    /* catch() { ... } // from try @ 004151c8 with catch @ 00415138
                       catch() { ... } // from try @ 00415244 with catch @ 00415138 */
      iVar4 = 0xb;
    }
    else if (uVar5 < 0x80) {
      iVar4 = 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar4 + iVar3;
  }
LAB_00415160:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


