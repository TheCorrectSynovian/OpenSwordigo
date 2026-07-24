/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9a40
 * Function: Caver::Proto::MusicPlaylist::ByteSize
 * Signature: undefined __thiscall ByteSize(MusicPlaylist * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::ByteSize() const */

int __thiscall Caver::Proto::MusicPlaylist::ByteSize(MusicPlaylist *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (((byte)this[0x50] & 1) == 0) {
    iVar2 = 0;
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar5 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar5 < 0x80) {
      iVar2 = 1;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar5 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar5 + 1;
  }
  iVar2 = *(int *)(this + 0x20) + iVar2;
  if (0 < *(int *)(this + 0x20)) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(this + 0x18) + lVar7 * 8);
      bVar1 = *(byte *)(lVar8 + 0x1c);
      uVar5 = (uint)bVar1;
      if (bVar1 == 0) {
        uVar4 = 0;
        *(undefined4 *)(lVar8 + 8) = 0;
        iVar3 = 1;
      }
      else {
        if ((bVar1 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          plVar6 = *(long **)(lVar8 + 0x10);
          uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
          if (uVar4 < 0x80) {
            iVar3 = 1;
          }
          else {
            iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
            uVar5 = *(uint *)(lVar8 + 0x1c);
            uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
          }
          uVar4 = iVar3 + uVar4 + 1;
        }
        if ((uVar5 & 2) != 0) {
          uVar4 = uVar4 + 5;
        }
        *(uint *)(lVar8 + 8) = uVar4;
        if (uVar4 < 0x80) {
          iVar3 = 1;
        }
        else {
          iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        }
      }
      lVar7 = lVar7 + 1;
      iVar2 = uVar4 + iVar2 + iVar3;
    } while (lVar7 < *(int *)(this + 0x20));
  }
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


