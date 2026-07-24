/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003daf4c
 * Function: Caver::Proto::EditorViewState::ByteSize
 * Signature: undefined __thiscall ByteSize(EditorViewState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::EditorViewState::ByteSize() const */

int __thiscall Caver::Proto::EditorViewState::ByteSize(EditorViewState *this)

{
  EditorViewState *pEVar1;
  EditorViewState EVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  
  EVar2 = this[0x78];
  uVar7 = (uint)(byte)EVar2;
  if (EVar2 == (EditorViewState)0x0) {
    iVar3 = 0;
    goto LAB_003db134;
  }
  if (((byte)EVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)EVar2 >> 2 & 1) != 0) {
LAB_003dafc0:
      plVar9 = *(long **)(this + 0x50);
      uVar4 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar7 = *(uint *)(this + 0x78);
        uVar4 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar4 + 1;
    }
  }
  else {
    plVar9 = *(long **)(this + 0x10);
    uVar4 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar7 = *(uint *)(this + 0x78);
      uVar4 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    }
    iVar3 = iVar3 + uVar4 + 1;
    if ((uVar7 >> 2 & 1) != 0) goto LAB_003dafc0;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    plVar9 = *(long **)(this + 0x58);
    uVar4 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar7 = *(uint *)(this + 0x78);
      uVar4 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    }
    iVar3 = iVar3 + iVar5 + uVar4 + 1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    uVar4 = *(uint *)(this + 0x60);
    if ((int)uVar4 < 0) {
      iVar3 = iVar3 + 0xb;
    }
    else if (uVar4 < 0x80) {
      iVar3 = iVar3 + 2;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar7 = *(uint *)(this + 0x78);
      iVar3 = iVar5 + 1 + iVar3;
    }
  }
  if ((uVar7 >> 5 & 1) != 0) {
    pEVar1 = *(EditorViewState **)PTR_default_instance__007e4cc8;
    if (*(long *)(this + 0x68) != 0) {
      pEVar1 = this;
    }
    uVar4 = Vector3::ByteSize(*(Vector3 **)(pEVar1 + 0x68));
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar7 = *(uint *)(this + 0x78);
    iVar3 = iVar3 + uVar4 + iVar5 + 1;
  }
  if ((uVar7 >> 6 & 1) != 0) {
    pEVar1 = *(EditorViewState **)PTR_default_instance__007e4cc8;
    if (*(long *)(this + 0x70) != 0) {
      pEVar1 = this;
    }
    uVar7 = Vector3::ByteSize(*(Vector3 **)(pEVar1 + 0x70));
    if (uVar7 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
    }
    iVar3 = iVar3 + uVar7 + iVar5 + 1;
  }
LAB_003db134:
  iVar5 = *(int *)(this + 0x20);
  iVar3 = iVar5 + iVar3;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      plVar9 = *(long **)(*(long *)(this + 0x18) + lVar8 * 8);
      uVar7 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      if (uVar7 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
        iVar5 = *(int *)(this + 0x20);
        uVar7 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      }
      lVar8 = lVar8 + 1;
      iVar3 = iVar3 + iVar6 + uVar7;
    } while (lVar8 < iVar5);
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


