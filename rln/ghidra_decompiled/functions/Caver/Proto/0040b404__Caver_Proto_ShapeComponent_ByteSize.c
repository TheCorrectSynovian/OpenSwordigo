/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040b404
 * Function: Caver::Proto::ShapeComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::ByteSize() const */

int __thiscall Caver::Proto::ShapeComponent::ByteSize(ShapeComponent *this)

{
  ShapeComponent *pSVar1;
  ShapeComponent SVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  SVar2 = this[0x28];
  uVar6 = (uint)(byte)SVar2;
  if (SVar2 == (ShapeComponent)0x0) {
    iVar3 = 0;
    goto LAB_0040b51c;
  }
  if (((byte)SVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)SVar2 >> 1 & 1) != 0) {
LAB_0040b484:
      pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
      if (*(long *)(this + 0x18) != 0) {
        pSVar1 = this;
      }
      uVar4 = Circle::ByteSize(*(Circle **)(pSVar1 + 0x18));
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
    pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
    if (*(long *)(this + 0x10) != 0) {
      pSVar1 = this;
    }
    uVar4 = Rectangle::ByteSize(*(Rectangle **)(pSVar1 + 0x10));
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x28);
    iVar3 = uVar4 + iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0040b484;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
    if (*(long *)(this + 0x20) != 0) {
      pSVar1 = this;
    }
    uVar6 = Polygon::ByteSize(*(Polygon **)(pSVar1 + 0x20));
    if (uVar6 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar3 = iVar3 + uVar6 + iVar5 + 1;
  }
LAB_0040b51c:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


