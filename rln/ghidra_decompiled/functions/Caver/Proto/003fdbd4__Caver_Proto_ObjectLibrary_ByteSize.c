/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fdbd4
 * Function: Caver::Proto::ObjectLibrary::ByteSize
 * Signature: undefined __thiscall ByteSize(ObjectLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::ByteSize() const */

int __thiscall Caver::Proto::ObjectLibrary::ByteSize(ObjectLibrary *this)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  if (((byte)this[0xf8] & 1) == 0) {
    iVar4 = 0;
  }
  else {
    plVar10 = *(long **)(this + 0x10);
    uVar8 = (uint)*(undefined8 *)(*plVar10 + -0x18);
    if (uVar8 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar8);
      uVar8 = (uint)*(undefined8 *)(*plVar10 + -0x18);
    }
    iVar4 = iVar4 + uVar8 + 1;
  }
  puVar3 = PTR_default_instance__007e4a98;
  iVar4 = *(int *)(this + 0x20) + iVar4;
  if (0 < *(int *)(this + 0x20)) {
    lVar9 = 0;
    do {
      lVar11 = *(long *)(*(long *)(this + 0x18) + lVar9 * 8);
      bVar2 = *(byte *)(lVar11 + 0x1c);
      uVar8 = (uint)bVar2;
      if (bVar2 == 0) {
        uVar5 = 0;
        *(undefined4 *)(lVar11 + 8) = 0;
        iVar7 = 1;
      }
      else {
        if ((bVar2 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          lVar1 = *(long *)puVar3;
          if (*(long *)(lVar11 + 0x10) != 0) {
            lVar1 = lVar11;
          }
          uVar5 = SceneObject::ByteSize(*(SceneObject **)(lVar1 + 0x10));
          if (uVar5 < 0x80) {
            iVar7 = 1;
          }
          else {
            iVar7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
          }
          uVar8 = *(uint *)(lVar11 + 0x1c);
          uVar5 = uVar5 + iVar7 + 1;
        }
        if ((uVar8 & 2) != 0) {
          uVar5 = uVar5 + 5;
        }
        *(uint *)(lVar11 + 8) = uVar5;
        if (uVar5 < 0x80) {
          iVar7 = 1;
        }
        else {
          iVar7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        }
      }
      lVar9 = lVar9 + 1;
      iVar4 = uVar5 + iVar4 + iVar7;
    } while (lVar9 < *(int *)(this + 0x20));
  }
  iVar7 = *(int *)(this + 0x58);
  iVar4 = iVar7 + iVar4;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      plVar10 = *(long **)(*(long *)(this + 0x50) + lVar9 * 8);
      uVar8 = (uint)*(undefined8 *)(*plVar10 + -0x18);
      if (uVar8 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar8);
        iVar7 = *(int *)(this + 0x58);
        uVar8 = (uint)*(undefined8 *)(*plVar10 + -0x18);
      }
      lVar9 = lVar9 + 1;
      iVar4 = iVar4 + iVar6 + uVar8;
    } while (lVar9 < iVar7);
  }
  iVar4 = *(int *)(this + 0x90) + iVar4;
  if (0 < *(int *)(this + 0x90)) {
    lVar9 = 0;
    do {
      uVar8 = Texture::ByteSize(*(Texture **)(*(long *)(this + 0x88) + lVar9 * 8));
      if (uVar8 < 0x80) {
        iVar7 = 1;
      }
      else {
        iVar7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar8);
      }
      lVar9 = lVar9 + 1;
      iVar4 = uVar8 + iVar4 + iVar7;
    } while (lVar9 < *(int *)(this + 0x90));
  }
  iVar4 = *(int *)(this + 200) + iVar4;
  if (0 < *(int *)(this + 200)) {
    lVar9 = 0;
    do {
      uVar8 = Program::ByteSize(*(Program **)(*(long *)(this + 0xc0) + lVar9 * 8));
      if (uVar8 < 0x80) {
        iVar7 = 1;
      }
      else {
        iVar7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar8);
      }
      lVar9 = lVar9 + 1;
      iVar4 = uVar8 + iVar4 + iVar7;
    } while (lVar9 < *(int *)(this + 200));
  }
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


