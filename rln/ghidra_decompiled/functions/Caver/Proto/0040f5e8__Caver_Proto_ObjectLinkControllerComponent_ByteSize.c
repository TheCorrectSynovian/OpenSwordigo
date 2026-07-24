/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040f5e8
 * Function: Caver::Proto::ObjectLinkControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::ObjectLinkControllerComponent::ByteSize(ObjectLinkControllerComponent *this)

{
  ObjectLinkControllerComponent *pOVar1;
  ObjectLinkControllerComponent OVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  
  OVar2 = this[0x38];
  uVar6 = (uint)(byte)OVar2;
  if (OVar2 == (ObjectLinkControllerComponent)0x0) {
    iVar3 = 0;
    goto LAB_0040f794;
  }
  if (((byte)OVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)OVar2 >> 1 & 1) != 0) {
LAB_0040f65c:
      plVar7 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0x38);
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
      uVar6 = *(uint *)(this + 0x38);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
    iVar3 = iVar3 + uVar4 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0040f65c;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(this + 0x20) != 0) {
      pOVar1 = this;
    }
    uVar4 = Vector3::ByteSize(*(Vector3 **)(pOVar1 + 0x20));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x38);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(this + 0x28) != 0) {
      pOVar1 = this;
    }
    uVar4 = Vector3::ByteSize(*(Vector3 **)(pOVar1 + 0x28));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x38);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    pOVar1 = *(ObjectLinkControllerComponent **)PTR_default_instance__007e4830;
    if (*(long *)(this + 0x30) != 0) {
      pOVar1 = this;
    }
    uVar6 = Vector3::ByteSize(*(Vector3 **)(pOVar1 + 0x30));
    if (uVar6 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar3 = iVar3 + uVar6 + iVar5 + 1;
  }
LAB_0040f794:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


