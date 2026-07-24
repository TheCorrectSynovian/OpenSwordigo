/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405a78
 * Function: Caver::Proto::ModelTransformControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ModelTransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::ByteSize() const */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::ByteSize(ModelTransformControllerComponent *this)

{
  ModelTransformControllerComponent *pMVar1;
  ModelTransformControllerComponent MVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  MVar2 = this[0x28];
  uVar6 = (uint)(byte)MVar2;
  if (MVar2 == (ModelTransformControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_00405b98;
  }
  if (((byte)MVar2 & 1) == 0) {
    iVar3 = 0;
joined_r0x00405acc:
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_00405ae4:
      pMVar1 = *(ModelTransformControllerComponent **)PTR_default_instance__007e6260;
      if (*(long *)(this + 0x10) != 0) {
        pMVar1 = this;
      }
      uVar4 = Vector3::ByteSize(*(Vector3 **)(pMVar1 + 0x10));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x28);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 < 0) {
      iVar3 = 0xb;
      goto joined_r0x00405acc;
    }
    if (uVar4 < 0x80) {
      iVar3 = 2;
      if (((byte)MVar2 >> 1 & 1) == 0) goto LAB_00405b30;
      goto LAB_00405ae4;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    uVar6 = *(uint *)(this + 0x28);
    iVar3 = iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00405ae4;
  }
LAB_00405b30:
  if ((uVar6 >> 2 & 1) != 0) {
    pMVar1 = *(ModelTransformControllerComponent **)PTR_default_instance__007e6260;
    if (*(long *)(this + 0x18) != 0) {
      pMVar1 = this;
    }
    uVar4 = Vector3::ByteSize(*(Vector3 **)(pMVar1 + 0x18));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x28);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 & 8) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar6 & 0x10) != 0) {
    iVar3 = iVar3 + 5;
  }
LAB_00405b98:
  *(int *)(this + 8) = iVar3;
  return;
}


