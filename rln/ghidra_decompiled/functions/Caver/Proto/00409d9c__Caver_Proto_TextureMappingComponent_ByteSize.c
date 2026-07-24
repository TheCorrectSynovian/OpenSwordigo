/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00409d9c
 * Function: Caver::Proto::TextureMappingComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(TextureMappingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::ByteSize() const */

int __thiscall Caver::Proto::TextureMappingComponent::ByteSize(TextureMappingComponent *this)

{
  TextureMappingComponent *pTVar1;
  TextureMappingComponent TVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  
  TVar2 = this[0x28];
  uVar6 = (uint)(byte)TVar2;
  if (TVar2 == (TextureMappingComponent)0x0) {
    iVar3 = 0;
  }
  else {
    if (((byte)TVar2 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      plVar7 = *(long **)(this + 0x10);
      uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0x28);
        uVar5 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + uVar5 + 1;
    }
    if ((uVar6 & 2) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 >> 2 & 1) != 0) {
      pTVar1 = *(TextureMappingComponent **)PTR_default_instance__007e7550;
      if (*(long *)(this + 0x20) != 0) {
        pTVar1 = this;
      }
      uVar6 = Vector2::ByteSize(*(Vector2 **)(pTVar1 + 0x20));
      if (uVar6 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
      }
      iVar3 = iVar3 + uVar6 + iVar4 + 1;
    }
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


