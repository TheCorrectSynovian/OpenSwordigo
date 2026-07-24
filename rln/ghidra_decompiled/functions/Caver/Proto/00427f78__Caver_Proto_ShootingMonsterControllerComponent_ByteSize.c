/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427f78
 * Function: Caver::Proto::ShootingMonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ShootingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::ShootingMonsterControllerComponent::ByteSize(ShootingMonsterControllerComponent *this)

{
  uint uVar1;
  ShootingMonsterControllerComponent SVar2;
  int iVar3;
  int iVar4;
  
  SVar2 = this[0x14];
  if (SVar2 == (ShootingMonsterControllerComponent)0x0) {
    iVar4 = 0;
    goto LAB_00427ff8;
  }
  if (((byte)SVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x00427fd0:
    if (((byte)SVar2 >> 1 & 1) == 0) goto LAB_00427ff8;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
      goto joined_r0x00427fd0;
    }
    if (uVar1 < 0x80) {
      iVar4 = 2;
      goto joined_r0x00427fd0;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    iVar4 = iVar4 + 1;
    if ((*(uint *)(this + 0x14) >> 1 & 1) == 0) goto LAB_00427ff8;
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
LAB_00427ff8:
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


