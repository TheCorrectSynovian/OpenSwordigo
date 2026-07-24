/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426b10
 * Function: Caver::Proto::LeapingMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(LeapingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::LeapingMonsterControllerComponent::ByteSize(LeapingMonsterControllerComponent *this)

{
  uint uVar1;
  LeapingMonsterControllerComponent LVar2;
  int iVar3;
  int iVar4;
  
  LVar2 = this[0x14];
  if (LVar2 == (LeapingMonsterControllerComponent)0x0) {
    iVar4 = 0;
    goto LAB_00426b90;
  }
  if (((byte)LVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x00426b68:
    if (((byte)LVar2 >> 1 & 1) == 0) goto LAB_00426b90;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
      goto joined_r0x00426b68;
    }
    if (uVar1 < 0x80) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00426acc with catch @ 00426b64
                        */
      iVar4 = 2;
      goto joined_r0x00426b68;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar4 = iVar4 + 1;
    if ((*(uint *)(this + 0x14) >> 1 & 1) == 0) goto LAB_00426b90;
  }
  uVar1 = *(uint *)(this + 0x10);
  if ((int)uVar1 < 0) {
    iVar3 = 0xb;
  }
  else if (uVar1 < 0x80) {
    iVar3 = 2;
  }
  else {
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar3 = iVar3 + 1;
  }
  iVar4 = iVar3 + iVar4;
LAB_00426b90:
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


