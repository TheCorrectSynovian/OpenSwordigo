/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004023a4
 * Function: Caver::Proto::Scene::ByteSize
 * Signature: undefined __thiscall ByteSize(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::ByteSize() const */

int __thiscall Caver::Proto::Scene::ByteSize(Scene *this)

{
  Scene *pSVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  uVar4 = *(uint *)(this + 0x98);
  if ((uVar4 & 0x3fc) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar4 >> 2 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      pSVar1 = *(Scene **)PTR_default_instance__007e7a20;
      if (*(long *)(this + 0x80) != 0) {
        pSVar1 = this;
      }
      uVar3 = ObjectLibrary::ByteSize(*(ObjectLibrary **)(pSVar1 + 0x80));
      if (uVar3 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0x98);
      iVar2 = uVar3 + iVar2 + 1;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      pSVar1 = *(Scene **)PTR_default_instance__007e7a20;
      if (*(long *)(this + 0x88) != 0) {
        pSVar1 = this;
      }
      uVar3 = Rectangle::ByteSize(*(Rectangle **)(pSVar1 + 0x88));
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar4 = *(uint *)(this + 0x98);
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    if ((uVar4 >> 4 & 1) != 0) {
      pSVar1 = *(Scene **)PTR_default_instance__007e7a20;
      if (*(long *)(this + 0x90) != 0) {
        pSVar1 = this;
      }
      uVar4 = Program::ByteSize(*(Program **)(pSVar1 + 0x90));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      iVar2 = iVar2 + uVar4 + iVar5 + 1;
    }
  }
  iVar2 = *(int *)(this + 0x18) + iVar2;
  if (0 < *(int *)(this + 0x18)) {
    lVar6 = 0;
    do {
      uVar4 = SceneObject::ByteSize(*(SceneObject **)(*(long *)(this + 0x10) + lVar6 * 8));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      lVar6 = lVar6 + 1;
      iVar2 = uVar4 + iVar2 + iVar5;
    } while (lVar6 < *(int *)(this + 0x18));
  }
  iVar2 = *(int *)(this + 0x50) + iVar2;
  if (0 < *(int *)(this + 0x50)) {
    lVar6 = 0;
    do {
      uVar4 = SceneObjectGroup::ByteSize(*(SceneObjectGroup **)(*(long *)(this + 0x48) + lVar6 * 8))
      ;
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      lVar6 = lVar6 + 1;
      iVar2 = uVar4 + iVar2 + iVar5;
    } while (lVar6 < *(int *)(this + 0x50));
  }
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


