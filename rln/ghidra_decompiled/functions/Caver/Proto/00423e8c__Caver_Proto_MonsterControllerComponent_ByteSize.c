/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423e8c
 * Function: Caver::Proto::MonsterControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(MonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::ByteSize() const */

void __thiscall Caver::Proto::MonsterControllerComponent::ByteSize(MonsterControllerComponent *this)

{
  uint uVar1;
  MonsterControllerComponent MVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  MVar2 = this[0x1c];
  uVar5 = (uint)(byte)MVar2;
  if (MVar2 == (MonsterControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_00423f64;
  }
  if (((byte)MVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x00423ef8:
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_00423eb0:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x1c);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar3 = 0xb;
      goto joined_r0x00423ef8;
    }
    if (uVar1 < 0x80) {
      iVar3 = 2;
      if (((byte)MVar2 >> 1 & 1) == 0) goto LAB_00423f10;
      goto LAB_00423eb0;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x1c);
    iVar3 = iVar3 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00423eb0;
  }
LAB_00423f10:
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x14);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
    }
    else if (uVar1 < 0x80) {
      iVar4 = 2;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
      uVar5 = *(uint *)(this + 0x1c);
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar4 + iVar3;
  }
  if ((uVar5 & 8) != 0) {
    iVar3 = iVar3 + 5;
  }
LAB_00423f64:
  *(int *)(this + 8) = iVar3;
  return;
}


