/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00400f78
 * Function: Caver::Proto::SceneObjectGroup::ByteSize
 * Signature: undefined __thiscall ByteSize(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::ByteSize() const */

int __thiscall Caver::Proto::SceneObjectGroup::ByteSize(SceneObjectGroup *this)

{
  SceneObjectGroup *pSVar1;
  SceneObjectGroup SVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  
  SVar2 = this[0x60];
  uVar7 = (uint)(byte)SVar2;
  if (SVar2 == (SceneObjectGroup)0x0) {
    iVar3 = 0;
  }
  else {
    if (((byte)SVar2 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      plVar9 = *(long **)(this + 0x10);
      uVar6 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      if (uVar6 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
        uVar7 = *(uint *)(this + 0x60);
        uVar6 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      }
      iVar3 = iVar3 + uVar6 + 1;
    }
    if ((uVar7 & 4) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar7 & 8) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar7 & 0x10) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar7 >> 5 & 1) != 0) {
      pSVar1 = *(SceneObjectGroup **)PTR_default_instance__007e48f0;
      if (*(long *)(this + 0x58) != 0) {
        pSVar1 = this;
      }
      uVar7 = Program::ByteSize(*(Program **)(pSVar1 + 0x58));
      if (uVar7 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
      }
      iVar3 = iVar3 + uVar7 + iVar4 + 1;
    }
  }
  iVar4 = *(int *)(this + 0x20);
  iVar3 = iVar4 + iVar3;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      plVar9 = *(long **)(*(long *)(this + 0x18) + lVar8 * 8);
      uVar7 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      if (uVar7 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
        iVar4 = *(int *)(this + 0x20);
        uVar7 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      }
      lVar8 = lVar8 + 1;
      iVar3 = iVar3 + iVar5 + uVar7;
    } while (lVar8 < iVar4);
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


