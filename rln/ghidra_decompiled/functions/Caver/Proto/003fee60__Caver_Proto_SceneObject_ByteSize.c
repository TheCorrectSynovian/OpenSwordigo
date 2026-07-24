/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fee60
 * Function: Caver::Proto::SceneObject::ByteSize
 * Signature: undefined __thiscall ByteSize(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::ByteSize() const */

int __thiscall Caver::Proto::SceneObject::ByteSize(SceneObject *this)

{
  SceneObject *pSVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = *(uint *)(this + 0x88);
  if ((uVar4 & 0xff) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      plVar6 = *(long **)(this + 0x10);
      uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x88);
        uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + uVar3 + 1;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      plVar6 = *(long **)(this + 0x18);
      uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar4 = *(uint *)(this + 0x88);
        uVar3 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar5 + uVar3 + 1;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
      if (*(long *)(this + 0x58) != 0) {
        pSVar1 = this;
      }
      uVar3 = Vector2::ByteSize(*(Vector2 **)(pSVar1 + 0x58));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0x88);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 & 0x10) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar4 & 0x20) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar4 & 0x40) != 0) {
      iVar2 = iVar2 + 5;
    }
    if ((uVar4 >> 7 & 1) != 0) {
      pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
      if (*(long *)(this + 0x70) != 0) {
        pSVar1 = this;
      }
      uVar3 = Rectangle::ByteSize(*(Rectangle **)(pSVar1 + 0x70));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0x88);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
  }
  if ((uVar4 & 0xff00) != 0) {
    if ((uVar4 & 0x100) != 0) {
      iVar2 = iVar2 + 2;
    }
    if ((uVar4 >> 9 & 1) != 0) {
      pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
      if (*(long *)(this + 0x80) != 0) {
        pSVar1 = this;
      }
      uVar4 = Program::ByteSize(*(Program **)(pSVar1 + 0x80));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      iVar2 = iVar2 + uVar4 + iVar5 + 1;
    }
  }
  iVar2 = *(int *)(this + 0x28) + iVar2;
  if (0 < *(int *)(this + 0x28)) {
    lVar7 = 0;
    do {
      uVar4 = Component::ByteSize(*(Component **)(*(long *)(this + 0x20) + lVar7 * 8));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      lVar7 = lVar7 + 1;
      iVar2 = uVar4 + iVar2 + iVar5;
    } while (lVar7 < *(int *)(this + 0x28));
  }
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


