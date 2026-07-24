/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f23a8
 * Function: Caver::Proto::LevelState::ByteSize
 * Signature: undefined __thiscall ByteSize(LevelState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::ByteSize() const */

int __thiscall Caver::Proto::LevelState::ByteSize(LevelState *this)

{
  LevelState *pLVar1;
  LevelState LVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  LVar2 = this[0x30];
  uVar7 = (uint)(byte)LVar2;
  if (LVar2 == (LevelState)0x0) {
    iVar3 = 0;
  }
  else {
    if (((byte)LVar2 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      plVar10 = *(long **)(this + 0x10);
      uVar5 = (uint)*(undefined8 *)(*plVar10 + -0x18);
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar7 = *(uint *)(this + 0x30);
        uVar5 = (uint)*(undefined8 *)(*plVar10 + -0x18);
      }
      iVar3 = iVar3 + uVar5 + 1;
    }
    if ((uVar7 & 2) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar7 >> 2 & 1) != 0) {
      pLVar1 = *(LevelState **)PTR_default_instance__007e7240;
      if (*(long *)(this + 0x20) != 0) {
        pLVar1 = this;
      }
      lVar8 = *(long *)(pLVar1 + 0x20);
      uVar7 = *(uint *)(lVar8 + 0x18);
      uVar5 = uVar7;
      if (0 < (int)uVar7) {
        lVar9 = 0;
        do {
          plVar10 = *(long **)(*(long *)(lVar8 + 0x10) + lVar9 * 8);
          uVar6 = (uint)*(undefined8 *)(*plVar10 + -0x18);
          if (uVar6 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
            uVar7 = *(uint *)(lVar8 + 0x18);
            uVar6 = (uint)*(undefined8 *)(*plVar10 + -0x18);
          }
          lVar9 = lVar9 + 1;
          uVar5 = uVar5 + iVar4 + uVar6;
        } while (lVar9 < (int)uVar7);
      }
      *(uint *)(lVar8 + 8) = uVar5;
      if (uVar5 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      }
      uVar7 = *(uint *)(this + 0x30);
      iVar3 = iVar3 + uVar5 + iVar4 + 1;
    }
    if ((uVar7 >> 3 & 1) != 0) {
      uVar5 = *(uint *)(this + 0x28);
      if ((int)uVar5 < 0) {
        iVar3 = iVar3 + 0xb;
      }
      else if (uVar5 < 0x80) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar7 = *(uint *)(this + 0x30);
        iVar3 = iVar4 + 1 + iVar3;
      }
    }
    if ((uVar7 >> 4 & 1) != 0) {
      uVar7 = *(uint *)(this + 0x2c);
      if ((int)uVar7 < 0) {
        iVar4 = 0xb;
      }
      else if (uVar7 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar4 + iVar3;
    }
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


