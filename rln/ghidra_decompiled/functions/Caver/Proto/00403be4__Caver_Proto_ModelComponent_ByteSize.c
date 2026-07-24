/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00403be4
 * Function: Caver::Proto::ModelComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::ByteSize() const */

int __thiscall Caver::Proto::ModelComponent::ByteSize(ModelComponent *this)

{
  ModelComponent *pMVar1;
  ModelComponent MVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  
  MVar2 = this[0x48];
  uVar6 = (uint)(byte)MVar2;
  if (MVar2 == (ModelComponent)0x0) {
    iVar3 = 0;
    goto LAB_00403d70;
  }
  if (((byte)MVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_00403c58:
      pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
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
      uVar6 = *(uint *)(this + 0x48);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar6 = *(uint *)(this + 0x48);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
    iVar3 = iVar3 + uVar4 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00403c58;
  }
  if ((uVar6 & 4) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar6 & 8) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar6 & 0x10) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((uVar6 >> 5 & 1) != 0) {
    pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
    if (*(long *)(this + 0x30) != 0) {
      pMVar1 = this;
    }
    uVar4 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x30));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x48);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 & 0x40) != 0) {
    iVar3 = iVar3 + 2;
  }
  if ((uVar6 >> 7 & 1) != 0) {
    pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
    if (*(long *)(this + 0x40) != 0) {
      pMVar1 = this;
    }
    uVar6 = FloatColor::ByteSize(*(FloatColor **)(pMVar1 + 0x40));
    if (uVar6 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar3 = iVar3 + uVar6 + iVar5 + 1;
  }
LAB_00403d70:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


