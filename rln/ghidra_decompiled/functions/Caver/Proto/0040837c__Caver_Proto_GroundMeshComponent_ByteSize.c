/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040837c
 * Function: Caver::Proto::GroundMeshComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::ByteSize() const */

int __thiscall Caver::Proto::GroundMeshComponent::ByteSize(GroundMeshComponent *this)

{
  GroundMeshComponent *pGVar1;
  GroundMeshComponent GVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  
  GVar2 = this[0xdc];
  uVar6 = (uint)(byte)GVar2;
  if (GVar2 == (GroundMeshComponent)0x0) {
    iVar3 = 0;
    goto LAB_004084e4;
  }
  if (((byte)GVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)GVar2 >> 1 & 1) != 0) {
LAB_004083f0:
      plVar7 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0xdc);
        uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar4 + 1;
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
      uVar6 = *(uint *)(this + 0xdc);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
    iVar3 = iVar3 + uVar4 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_004083f0;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pGVar1 = *(GroundMeshComponent **)PTR_default_instance__007e5600;
    if (*(long *)(this + 0x58) != 0) {
      pGVar1 = this;
    }
    uVar4 = Rectangle::ByteSize(*(Rectangle **)(pGVar1 + 0x58));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0xdc);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 >> 6 & 1) != 0) {
    pGVar1 = *(GroundMeshComponent **)PTR_default_instance__007e5600;
    if (*(long *)(this + 0xd0) != 0) {
      pGVar1 = this;
    }
    uVar4 = FloatColor::ByteSize(*(FloatColor **)(pGVar1 + 0xd0));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0xdc);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 & 0x80) != 0) {
    iVar3 = iVar3 + 2;
  }
LAB_004084e4:
  iVar3 = *(int *)(this + 0x28) + iVar3;
  if (0 < *(int *)(this + 0x28)) {
    lVar8 = 0;
    do {
      uVar6 = Mesh::ByteSize(*(Mesh **)(*(long *)(this + 0x20) + lVar8 * 8));
      if (uVar6 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
      }
      lVar8 = lVar8 + 1;
      iVar3 = uVar6 + iVar3 + iVar5;
    } while (lVar8 < *(int *)(this + 0x28));
  }
  iVar3 = *(int *)(this + 0x68) + iVar3;
  if (0 < *(int *)(this + 0x68)) {
    lVar8 = 0;
    do {
      uVar6 = Mesh::ByteSize(*(Mesh **)(*(long *)(this + 0x60) + lVar8 * 8));
      if (uVar6 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
      }
      lVar8 = lVar8 + 1;
      iVar3 = uVar6 + iVar3 + iVar5;
    } while (lVar8 < *(int *)(this + 0x68));
  }
  iVar3 = *(int *)(this + 0xa0) + iVar3;
  if (0 < *(int *)(this + 0xa0)) {
    lVar8 = 0;
    do {
      uVar6 = Mesh::ByteSize(*(Mesh **)(*(long *)(this + 0x98) + lVar8 * 8));
      if (uVar6 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
      }
      lVar8 = lVar8 + 1;
      iVar3 = uVar6 + iVar3 + iVar5;
    } while (lVar8 < *(int *)(this + 0xa0));
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


