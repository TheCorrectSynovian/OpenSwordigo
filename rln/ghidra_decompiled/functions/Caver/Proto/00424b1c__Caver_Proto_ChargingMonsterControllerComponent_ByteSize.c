/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424b1c
 * Function: Caver::Proto::ChargingMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::ByteSize() const */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::ByteSize(ChargingMonsterControllerComponent *this)

{
  uint uVar1;
  ChargingMonsterControllerComponent CVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  CVar2 = this[0x20];
  uVar5 = (uint)(byte)CVar2;
  if (CVar2 == (ChargingMonsterControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_00424c00;
  }
  if (((byte)CVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x00424b88:
                    /* try { // try from 00424b88 to 00524b93 has its CatchHandler @ 00425748 */
    if (((byte)CVar2 >> 1 & 1) != 0) {
LAB_00424b40:
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
                    /* try { // try from 00424b64 to 00524b77 has its CatchHandler @ 00425780 */
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
      goto joined_r0x00424b88;
    }
    if (uVar1 < 0x80) {
      iVar3 = 2;
      if (((byte)CVar2 >> 1 & 1) == 0) goto LAB_00424ba0;
      goto LAB_00424b40;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x20);
    iVar3 = iVar3 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00424b40;
  }
LAB_00424ba0:
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x14);
    if ((int)uVar1 < 0) {
                    /* try { // try from 00424bbc to 00524bf7 has its CatchHandler @ 004256ec */
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
  if ((uVar5 & 8) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar5 & 0x10) != 0) {
    iVar3 = iVar3 + 5;
  }
LAB_00424c00:
  *(int *)(this + 8) = iVar3;
  return;
}


