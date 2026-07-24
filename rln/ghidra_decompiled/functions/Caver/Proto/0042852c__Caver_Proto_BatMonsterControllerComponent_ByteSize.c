/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042852c
 * Function: Caver::Proto::BatMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(BatMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BatMonsterControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::BatMonsterControllerComponent::ByteSize(BatMonsterControllerComponent *this)

{
  uint uVar1;
  BatMonsterControllerComponent BVar2;
  int iVar3;
  int iVar4;
  
  BVar2 = this[0x14];
  if (BVar2 == (BatMonsterControllerComponent)0x0) {
    iVar4 = 0;
    goto LAB_004285ac;
  }
  if (((byte)BVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x00428584:
                    /* catch() { ... } // from try @ 00428508 with catch @ 00428584 */
    if (((byte)BVar2 >> 1 & 1) == 0) goto LAB_004285ac;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
                    /* try { // try from 00428598 to 005285f7 has its CatchHandler @ 00428598
                       catch() { ... } // from try @ 00428598 with catch @ 00428598
                       catch() { ... } // from try @ 004285fc with catch @ 00428598 */
      goto joined_r0x00428584;
    }
    if (uVar1 < 0x80) {
      iVar4 = 2;
      goto joined_r0x00428584;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar4 = iVar4 + 1;
    if ((*(uint *)(this + 0x14) >> 1 & 1) == 0) goto LAB_004285ac;
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
LAB_004285ac:
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


