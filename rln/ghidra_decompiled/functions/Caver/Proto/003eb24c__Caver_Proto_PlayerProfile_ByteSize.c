/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003eb24c
 * Function: Caver::Proto::PlayerProfile::ByteSize
 * Signature: undefined __thiscall ByteSize(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::ByteSize() const */

int __thiscall Caver::Proto::PlayerProfile::ByteSize(PlayerProfile *this)

{
  PlayerProfile *pPVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *(uint *)(this + 0xa8);
  if ((uVar6 & 0xff) == 0) {
    iVar3 = 0;
  }
  else {
    if ((uVar6 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      plVar7 = *(long **)(this + 0x10);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0xa8);
        uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + uVar4 + 1;
    }
    if ((uVar6 >> 1 & 1) != 0) {
      pPVar1 = *(PlayerProfile **)PTR_default_instance__007e7368;
      if (*(long *)(this + 0x18) != 0) {
        pPVar1 = this;
      }
      uVar4 = DateTime::ByteSize(*(DateTime **)(pPVar1 + 0x18));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0xa8);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
    if ((uVar6 >> 2 & 1) != 0) {
      plVar7 = *(long **)(this + 0x20);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0xa8);
        uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar4 + 1;
    }
    if ((uVar6 >> 3 & 1) != 0) {
      uVar4 = *(uint *)(this + 0x28);
      if ((int)uVar4 < 0) {
        iVar5 = 0xb;
      }
      else if (uVar4 < 0x80) {
        iVar5 = 2;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0xa8);
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar5 + iVar3;
    }
    if ((uVar6 & 0x10) != 0) {
      iVar3 = iVar3 + 5;
    }
    if ((uVar6 & 0x20) != 0) {
      iVar3 = iVar3 + 9;
    }
    if ((uVar6 >> 6 & 1) != 0) {
      pPVar1 = *(PlayerProfile **)PTR_default_instance__007e7368;
      if (*(long *)(this + 0x38) != 0) {
        pPVar1 = this;
      }
      uVar4 = GameState::ByteSize(*(GameState **)(pPVar1 + 0x38));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0xa8);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
    if ((uVar6 >> 7 & 1) != 0) {
      plVar7 = *(long **)(this + 0x40);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0xa8);
        uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar4 + 1;
    }
  }
  if ((uVar6 & 0xff00) != 0) {
    if ((uVar6 >> 8 & 1) != 0) {
      plVar7 = *(long **)(this + 0x48);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0xa8);
        uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar4 + 1;
    }
    if ((uVar6 >> 9 & 1) != 0) {
      plVar7 = *(long **)(this + 0x50);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0xa8);
        uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar4 + 1;
    }
    if ((uVar6 >> 10 & 1) != 0) {
      plVar7 = *(long **)(this + 0x58);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar6 = *(uint *)(this + 0xa8);
        uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar4 + 1;
    }
    if ((uVar6 & 0x1000) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar6 >> 0xd & 1) != 0) {
      plVar7 = *(long **)(this + 0xa0);
      uVar6 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      if (uVar6 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
        uVar6 = (uint)*(undefined8 *)(*plVar7 + -0x18);
      }
      iVar3 = iVar3 + iVar5 + uVar6 + 1;
    }
  }
  iVar3 = *(int *)(this + 0x68) + iVar3;
  if (0 < *(int *)(this + 0x68)) {
    lVar8 = 0;
    do {
      lVar9 = *(long *)(*(long *)(this + 0x60) + lVar8 * 8);
      bVar2 = *(byte *)(lVar9 + 0x1c);
      uVar6 = (uint)bVar2;
      if (bVar2 == 0) {
        uVar4 = 0;
        *(undefined4 *)(lVar9 + 8) = 0;
        iVar5 = 1;
      }
      else {
        if ((bVar2 & 1) == 0) {
          uVar4 = 0;
          if ((bVar2 >> 1 & 1) != 0) {
LAB_003eb5b4:
            uVar6 = *(uint *)(lVar9 + 0x18);
            if ((int)uVar6 < 0) {
              iVar5 = 0xb;
            }
            else if (uVar6 < 0x80) {
              iVar5 = 2;
            }
            else {
              iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
              iVar5 = iVar5 + 1;
            }
            uVar4 = iVar5 + uVar4;
          }
        }
        else {
          plVar7 = *(long **)(lVar9 + 0x10);
          uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
          if (uVar4 < 0x80) {
            iVar5 = 1;
          }
          else {
            iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
            uVar6 = *(uint *)(lVar9 + 0x1c);
            uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
          }
          uVar4 = iVar5 + uVar4 + 1;
          if ((uVar6 >> 1 & 1) != 0) goto LAB_003eb5b4;
        }
        *(uint *)(lVar9 + 8) = uVar4;
        if (uVar4 < 0x80) {
          iVar5 = 1;
        }
        else {
          iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        }
      }
      lVar8 = lVar8 + 1;
      iVar3 = uVar4 + iVar3 + iVar5;
    } while (lVar8 < *(int *)(this + 0x68));
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


