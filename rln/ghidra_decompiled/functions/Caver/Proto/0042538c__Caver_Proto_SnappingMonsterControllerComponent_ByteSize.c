/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042538c
 * Function: Caver::Proto::SnappingMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::SnappingMonsterControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::SnappingMonsterControllerComponent::ByteSize(SnappingMonsterControllerComponent *this)

{
  uint uVar1;
  SnappingMonsterControllerComponent SVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  SVar2 = this[0x20];
  uVar5 = (uint)(byte)SVar2;
  if (SVar2 == (SnappingMonsterControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_004254b8;
  }
  if (((byte)SVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x004253e4:
    if (((byte)SVar2 >> 1 & 1) != 0) {
LAB_004253b0:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x20);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
                    /* catch() { ... } // from try @ 00424f28 with catch @ 004253f4 */
      iVar3 = 0xb;
      goto joined_r0x004253e4;
    }
    if (uVar1 < 0x80) {
      iVar3 = 2;
      goto joined_r0x004253e4;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x20);
    iVar3 = iVar3 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_004253b0;
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
      uVar5 = *(uint *)(this + 0x20);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar5 >> 3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00424efc with catch @ 00425450 */
    uVar1 = *(uint *)(this + 0x18);
    if ((int)uVar1 < 0) {
                    /* catch() { ... } // from try @ 00424ed8 with catch @ 00425488 */
                    /* catch() { ... } // from try @ 00424e7c with catch @ 0042548c */
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar3 = iVar3 + 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
                    /* catch() { ... } // from try @ 00424e48 with catch @ 004254e8 */
      uVar5 = *(uint *)(this + 0x20);
      iVar3 = iVar4 + 1 + iVar3;
    }
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar5 = *(uint *)(this + 0x1c);
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
LAB_004254b8:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


