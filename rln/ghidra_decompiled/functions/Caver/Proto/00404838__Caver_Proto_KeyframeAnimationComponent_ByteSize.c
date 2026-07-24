/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404838
 * Function: Caver::Proto::KeyframeAnimationComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(KeyframeAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::KeyframeAnimationComponent::ByteSize() const */

void __thiscall Caver::Proto::KeyframeAnimationComponent::ByteSize(KeyframeAnimationComponent *this)

{
  KeyframeAnimationComponent KVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  KVar1 = this[0x20];
  uVar5 = (uint)(byte)KVar1;
  if (KVar1 == (KeyframeAnimationComponent)0x0) {
    iVar2 = 0;
    goto LAB_00404908;
  }
  if (((byte)KVar1 & 1) == 0) {
    iVar2 = 0;
joined_r0x0040488c:
    if (((byte)KVar1 >> 1 & 1) != 0) {
LAB_004048a4:
      plVar6 = *(long **)(this + 0x10);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x20);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar4 + 1;
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 < 0) {
      iVar2 = 0xb;
      goto joined_r0x0040488c;
    }
    if (uVar4 < 0x80) {
      iVar2 = 2;
      if (((byte)KVar1 >> 1 & 1) == 0) goto LAB_004048e4;
      goto LAB_004048a4;
    }
    iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    uVar5 = *(uint *)(this + 0x20);
    iVar2 = iVar2 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_004048a4;
  }
LAB_004048e4:
  if ((uVar5 & 4) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar5 & 8) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar5 & 0x10) != 0) {
    iVar2 = iVar2 + 5;
  }
LAB_00404908:
  *(int *)(this + 8) = iVar2;
  return;
}


