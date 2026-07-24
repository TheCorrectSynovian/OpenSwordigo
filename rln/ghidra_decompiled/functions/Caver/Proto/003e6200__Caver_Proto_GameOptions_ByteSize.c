/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e6200
 * Function: Caver::Proto::GameOptions::ByteSize
 * Signature: undefined __thiscall ByteSize(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::ByteSize() const */

int __thiscall Caver::Proto::GameOptions::ByteSize(GameOptions *this)

{
  GameOptions *pGVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(this + 0x6c);
  if ((uVar4 & 0x1fe) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar4 & 2;
    if ((uVar4 & 4) != 0) {
      uVar6 = (uVar4 & 2) + 2;
    }
    if ((uVar4 & 8) != 0) {
      uVar6 = uVar6 + 5;
    }
    if ((uVar4 & 0x10) != 0) {
      uVar6 = uVar6 + 5;
    }
    if ((uVar4 >> 5 & 1) != 0) {
      pGVar1 = *(GameOptions **)PTR_default_instance__007e6d28;
      if (*(long *)(this + 0x58) != 0) {
        pGVar1 = this;
      }
      uVar2 = GUIViewLayout::ByteSize(*(GUIViewLayout **)(pGVar1 + 0x58));
      if (uVar2 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      }
      uVar4 = *(uint *)(this + 0x6c);
      uVar6 = uVar6 + uVar2 + iVar3 + 1;
    }
    if ((uVar4 >> 6 & 1) != 0) {
      pGVar1 = *(GameOptions **)PTR_default_instance__007e6d28;
      if (*(long *)(this + 0x60) != 0) {
        pGVar1 = this;
      }
      uVar2 = GUIViewLayout::ByteSize(*(GUIViewLayout **)(pGVar1 + 0x60));
      if (uVar2 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
      }
      uVar4 = *(uint *)(this + 0x6c);
      uVar6 = uVar6 + uVar2 + iVar3 + 1;
    }
    if ((uVar4 & 0x80) != 0) {
      uVar6 = uVar6 + 2;
    }
  }
  if ((uVar4 & 0xff00) != 0) {
    if ((uVar4 & 0x100) != 0) {
      uVar6 = uVar6 + 2;
    }
    if ((uVar4 & 0x200) != 0) {
      uVar6 = uVar6 + 2;
    }
  }
  iVar3 = *(int *)(this + 0x18) + uVar6;
  if (0 < *(int *)(this + 0x18)) {
    lVar7 = 0;
    do {
      uVar4 = MusicPlaylist::ByteSize(*(MusicPlaylist **)(*(long *)(this + 0x10) + lVar7 * 8));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      lVar7 = lVar7 + 1;
      iVar3 = uVar4 + iVar3 + iVar5;
    } while (lVar7 < *(int *)(this + 0x18));
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


