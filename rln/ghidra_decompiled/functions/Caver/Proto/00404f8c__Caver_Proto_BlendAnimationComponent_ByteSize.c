/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404f8c
 * Function: Caver::Proto::BlendAnimationComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(BlendAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BlendAnimationComponent::ByteSize() const */

void __thiscall Caver::Proto::BlendAnimationComponent::ByteSize(BlendAnimationComponent *this)

{
  uint uVar1;
  BlendAnimationComponent BVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  BVar2 = this[0x1c];
  uVar5 = (uint)(byte)BVar2;
  if (BVar2 == (BlendAnimationComponent)0x0) {
    iVar4 = 0;
    goto LAB_00405028;
  }
  if (((byte)BVar2 & 1) == 0) {
    iVar4 = 0;
joined_r0x00404ff8:
    if (((byte)BVar2 >> 1 & 1) != 0) {
LAB_00404fb0:
      uVar1 = *(uint *)(this + 0x10);
      if ((int)uVar1 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar5 = *(uint *)(this + 0x1c);
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar3 + iVar4;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    if ((int)uVar1 < 0) {
      iVar4 = 0xb;
      goto joined_r0x00404ff8;
    }
    if (uVar1 < 0x80) {
      iVar4 = 2;
      if (((byte)BVar2 >> 1 & 1) == 0) goto LAB_00405010;
      goto LAB_00404fb0;
    }
    iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
    uVar5 = *(uint *)(this + 0x1c);
    iVar4 = iVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_00404fb0;
  }
LAB_00405010:
  if ((uVar5 & 4) != 0) {
    iVar4 = iVar4 + 5;
  }
  if ((uVar5 & 8) != 0) {
    iVar4 = iVar4 + 5;
  }
LAB_00405028:
  *(int *)(this + 8) = iVar4;
  return;
}


