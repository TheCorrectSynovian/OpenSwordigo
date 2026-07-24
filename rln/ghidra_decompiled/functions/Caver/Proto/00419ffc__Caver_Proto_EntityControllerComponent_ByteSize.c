/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419ffc
 * Function: Caver::Proto::EntityControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::ByteSize() const */

int __thiscall Caver::Proto::EntityControllerComponent::ByteSize(EntityControllerComponent *this)

{
  uint uVar1;
  EntityControllerComponent EVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  EVar2 = this[0x2c];
  uVar5 = (uint)(byte)EVar2;
  if (EVar2 == (EntityControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_0041a168;
  }
  if (((byte)EVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x0041a054:
                    /* try { // try from 0041a054 to 0051a08f has its CatchHandler @ 0041a054
                       catch() { ... } // from try @ 0041a054 with catch @ 0041a054
                       catch() { ... } // from try @ 0041a124 with catch @ 0041a054
                       catch() { ... } // from try @ 0041a1f4 with catch @ 0041a054 */
    if (((byte)EVar2 >> 1 & 1) != 0) {
LAB_0041a020:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x2c);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
      goto joined_r0x0041a054;
    }
    if (uVar1 < 0x80) {
      iVar3 = 2;
      goto joined_r0x0041a054;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x2c);
    iVar3 = iVar3 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_0041a020;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x14);
    if ((int)uVar1 < 0) {
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar3 = iVar3 + 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      uVar5 = *(uint *)(this + 0x2c);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x18);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
    }
    else {
                    /* try { // try from 0041a090 to 0051a097 has its CatchHandler @ 0041a200 */
      if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x2c);
        iVar4 = iVar4 + 1;
      }
    }
    iVar3 = iVar4 + iVar3;
  }
                    /* try { // try from 0041a0fc to 0051a123 has its CatchHandler @ 0041a1a8 */
  if ((uVar5 & 0x10) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar5 & 0x20) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar5 & 0x40) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar5 >> 7 & 1) != 0) {
                    /* try { // try from 0041a124 to 0051a1cb has its CatchHandler @ 0041a054 */
    uVar5 = *(uint *)(this + 0x28);
    if ((int)uVar5 < 0) {
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
LAB_0041a168:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


