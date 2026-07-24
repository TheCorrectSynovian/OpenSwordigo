/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f44b0
 * Function: Caver::Proto::CharacterState::ByteSize
 * Signature: undefined __thiscall ByteSize(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CharacterState::ByteSize() const */

int __thiscall Caver::Proto::CharacterState::ByteSize(CharacterState *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  uVar6 = *(uint *)(this + 0xcc);
  if ((uVar6 & 0xff) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar6 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      uVar5 = *(uint *)(this + 0xc);
      if ((int)uVar5 < 0) {
        iVar2 = 0xb;
      }
      else if (uVar5 < 0x80) {
        iVar2 = 2;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        iVar2 = iVar2 + 1;
      }
    }
    if ((uVar6 >> 1 & 1) != 0) {
      uVar5 = *(uint *)(this + 0x10);
      if ((int)uVar5 < 0) {
        iVar3 = 10;
      }
      else if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar6 >> 2 & 1) != 0) {
      uVar5 = *(uint *)(this + 0x14);
      if ((int)uVar5 < 0) {
        iVar3 = 10;
      }
      else if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar6 >> 3 & 1) != 0) {
      uVar5 = *(uint *)(this + 0x18);
      if ((int)uVar5 < 0) {
        iVar3 = 10;
      }
      else if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar6 >> 4 & 1) != 0) {
      uVar5 = *(uint *)(this + 0x1c);
      if ((int)uVar5 < 0) {
        iVar3 = 10;
      }
      else if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
      }
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar6 >> 6 & 1) != 0) {
      plVar8 = *(long **)(this + 0x58);
      uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar5 + 1;
    }
    if ((uVar6 >> 7 & 1) != 0) {
      plVar8 = *(long **)(this + 0x60);
      uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar5 + 1;
    }
  }
  if ((uVar6 & 0x1fe00) != 0) {
    if ((uVar6 >> 9 & 1) != 0) {
      plVar8 = *(long **)(this + 0xa0);
      uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar5 + 2;
    }
    if ((uVar6 >> 10 & 1) != 0) {
      plVar8 = *(long **)(this + 0xa8);
      uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar5 + 2;
    }
    if ((uVar6 >> 0xb & 1) != 0) {
      plVar8 = *(long **)(this + 0xb0);
      uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar5 + 2;
    }
    if ((uVar6 >> 0xc & 1) != 0) {
      plVar8 = *(long **)(this + 0xb8);
      uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      if (uVar5 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar5 + 2;
    }
    if ((uVar6 >> 0xd & 1) != 0) {
      uVar5 = *(uint *)(this + 0xc0);
      if ((int)uVar5 < 0) {
        iVar2 = iVar2 + 0xc;
      }
      else if (uVar5 < 0x80) {
        iVar2 = iVar2 + 3;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        iVar2 = iVar3 + 2 + iVar2;
      }
    }
    if ((uVar6 >> 0xe & 1) != 0) {
      uVar5 = *(uint *)(this + 0xc4);
      if ((int)uVar5 < 0) {
        iVar2 = iVar2 + 0xc;
      }
      else if (uVar5 < 0x80) {
        iVar2 = iVar2 + 3;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0xcc);
        iVar2 = iVar3 + 2 + iVar2;
      }
    }
    if ((uVar6 >> 0xf & 1) != 0) {
      uVar6 = *(uint *)(this + 200);
      if ((int)uVar6 < 0) {
        iVar3 = 0xc;
      }
      else if (uVar6 < 0x80) {
        iVar3 = 3;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
        iVar3 = iVar3 + 2;
      }
      iVar2 = iVar3 + iVar2;
    }
  }
  iVar2 = *(int *)(this + 0x28) + iVar2;
  if (0 < *(int *)(this + 0x28)) {
    lVar7 = 0;
    do {
      lVar9 = *(long *)(*(long *)(this + 0x20) + lVar7 * 8);
      bVar1 = *(byte *)(lVar9 + 0x1c);
      uVar6 = (uint)bVar1;
      if (bVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(lVar9 + 8) = 0;
        iVar3 = 1;
      }
      else {
        if ((bVar1 & 1) == 0) {
          uVar5 = 0;
          if ((bVar1 >> 1 & 1) != 0) {
LAB_003f48c0:
            uVar6 = *(uint *)(lVar9 + 0x18);
            if ((int)uVar6 < 0) {
              iVar3 = 0xb;
            }
            else if (uVar6 < 0x80) {
              iVar3 = 2;
            }
            else {
              iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
              iVar3 = iVar3 + 1;
            }
            uVar5 = iVar3 + uVar5;
          }
        }
        else {
          plVar8 = *(long **)(lVar9 + 0x10);
          uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
          if (uVar5 < 0x80) {
            iVar3 = 1;
          }
          else {
            iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
            uVar6 = *(uint *)(lVar9 + 0x1c);
            uVar5 = (uint)*(undefined8 *)(*plVar8 + -0x18);
          }
          uVar5 = iVar3 + uVar5 + 1;
          if ((uVar6 >> 1 & 1) != 0) goto LAB_003f48c0;
        }
        *(uint *)(lVar9 + 8) = uVar5;
        if (uVar5 < 0x80) {
          iVar3 = 1;
        }
        else {
          iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        }
      }
      lVar7 = lVar7 + 1;
      iVar2 = uVar5 + iVar2 + iVar3;
    } while (lVar7 < *(int *)(this + 0x28));
  }
  iVar3 = *(int *)(this + 0x70);
  iVar2 = iVar3 + iVar2;
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      plVar8 = *(long **)(*(long *)(this + 0x68) + lVar7 * 8);
      uVar6 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      if (uVar6 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
        iVar3 = *(int *)(this + 0x70);
        uVar6 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      }
      lVar7 = lVar7 + 1;
      iVar2 = iVar2 + iVar4 + uVar6;
    } while (lVar7 < iVar3);
  }
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


