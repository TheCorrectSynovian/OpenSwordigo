/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a860
 * Function: Caver::Proto::WaterMeshComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::ByteSize() const */

int __thiscall Caver::Proto::WaterMeshComponent::ByteSize(WaterMeshComponent *this)

{
  WaterMeshComponent *pWVar1;
  WaterMeshComponent WVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  WVar2 = this[0x28];
  uVar6 = (uint)(byte)WVar2;
  if (WVar2 == (WaterMeshComponent)0x0) {
    iVar5 = 0;
    goto LAB_0040a98c;
  }
  if (((byte)WVar2 & 1) == 0) {
    iVar5 = 0;
joined_r0x0040a8bc:
    if (((byte)WVar2 >> 1 & 1) != 0) {
LAB_0040a888:
      uVar3 = *(uint *)(this + 0x10);
      if ((int)uVar3 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar3 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar6 = *(uint *)(this + 0x28);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar4 + iVar5;
    }
  }
  else {
    uVar3 = *(uint *)(this + 0xc);
    if ((int)uVar3 < 0) {
      iVar5 = 0xb;
      goto joined_r0x0040a8bc;
    }
    if (uVar3 < 0x80) {
      iVar5 = 2;
      goto joined_r0x0040a8bc;
    }
    iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    uVar6 = *(uint *)(this + 0x28);
    iVar5 = iVar5 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0040a888;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pWVar1 = *(WaterMeshComponent **)PTR_default_instance__007e6e28;
    if (*(long *)(this + 0x18) != 0) {
      pWVar1 = this;
    }
    uVar3 = FloatColor::ByteSize(*(FloatColor **)(pWVar1 + 0x18));
    if (uVar3 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
    }
    uVar6 = *(uint *)(this + 0x28);
    iVar5 = iVar5 + uVar3 + iVar4 + 1;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pWVar1 = *(WaterMeshComponent **)PTR_default_instance__007e6e28;
    if (*(long *)(this + 0x20) != 0) {
      pWVar1 = this;
    }
    uVar6 = FloatColor::ByteSize(*(FloatColor **)(pWVar1 + 0x20));
    if (uVar6 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar5 = iVar5 + uVar6 + iVar4 + 1;
  }
LAB_0040a98c:
  *(int *)(this + 8) = iVar5;
  return iVar5;
}


