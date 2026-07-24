/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f0960
 * Function: Caver::Proto::GameState::ByteSize
 * Signature: undefined __thiscall ByteSize(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GameState::ByteSize() const */

int __thiscall Caver::Proto::GameState::ByteSize(GameState *this)

{
  GameState *pGVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  uVar5 = *(uint *)(this + 0x11c);
  if ((uVar5 & 0xff) == 0) {
    iVar4 = 0;
  }
  else {
    if ((uVar5 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      pGVar1 = *(GameState **)PTR_default_instance__007e5ff0;
      if (*(long *)(this + 0x10) != 0) {
        pGVar1 = this;
      }
      uVar3 = CharacterState::ByteSize(*(CharacterState **)(pGVar1 + 0x10));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = *(uint *)(this + 0x11c);
      iVar4 = uVar3 + iVar4 + 1;
    }
    if ((uVar5 >> 2 & 1) != 0) {
      plVar11 = *(long **)(this + 0x50);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 1;
    }
    if ((uVar5 >> 3 & 1) != 0) {
      plVar11 = *(long **)(this + 0x58);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 1;
    }
    if ((uVar5 >> 4 & 1) != 0) {
      plVar11 = *(long **)(this + 0x60);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 1;
    }
    if ((uVar5 >> 5 & 1) != 0) {
      plVar11 = *(long **)(this + 0x68);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 1;
    }
    if ((uVar5 >> 6 & 1) != 0) {
      plVar11 = *(long **)(this + 0x70);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 1;
    }
    if ((uVar5 >> 7 & 1) != 0) {
      plVar11 = *(long **)(this + 0x78);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 1;
    }
  }
  if ((uVar5 & 0x1fe00) != 0) {
    if ((uVar5 >> 9 & 1) != 0) {
      pGVar1 = *(GameState **)PTR_default_instance__007e5ff0;
      if (*(long *)(this + 0xb8) != 0) {
        pGVar1 = this;
      }
      lVar9 = *(long *)(pGVar1 + 0xb8);
      uVar5 = *(uint *)(lVar9 + 0x18);
      uVar3 = uVar5;
      if (0 < (int)uVar5) {
        lVar10 = 0;
        do {
          plVar11 = *(long **)(*(long *)(lVar9 + 0x10) + lVar10 * 8);
          uVar7 = (uint)*(undefined8 *)(*plVar11 + -0x18);
          if (uVar7 < 0x80) {
            iVar6 = 1;
          }
          else {
            iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
            uVar5 = *(uint *)(lVar9 + 0x18);
            uVar7 = (uint)*(undefined8 *)(*plVar11 + -0x18);
          }
          lVar10 = lVar10 + 1;
          uVar3 = uVar3 + iVar6 + uVar7;
        } while (lVar10 < (int)uVar5);
      }
      *(uint *)(lVar9 + 8) = uVar3;
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = *(uint *)(this + 0x11c);
      iVar4 = iVar4 + uVar3 + iVar6 + 1;
    }
    if ((uVar5 >> 10 & 1) != 0) {
      plVar11 = *(long **)(this + 0xc0);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 1;
    }
    if ((uVar5 & 0x800) != 0) {
      iVar4 = iVar4 + 2;
    }
    if ((uVar5 & 0x1000) != 0) {
      iVar4 = iVar4 + 2;
    }
    if ((uVar5 >> 0xd & 1) != 0) {
      plVar11 = *(long **)(this + 0xd0);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 2;
    }
    if ((uVar5 >> 0xe & 1) != 0) {
      plVar11 = *(long **)(this + 0xd8);
      uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      if (uVar3 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        uVar5 = *(uint *)(this + 0x11c);
        uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
      }
      iVar4 = iVar4 + iVar6 + uVar3 + 2;
    }
  }
  if ((uVar5 & 0xff0000) != 0) {
    if ((uVar5 & 0x10000) != 0) {
      iVar4 = iVar4 + 3;
    }
    if ((uVar5 & 0x20000) != 0) {
      iVar4 = iVar4 + 3;
    }
    if ((uVar5 & 0x40000) != 0) {
      iVar4 = iVar4 + 3;
    }
    if ((uVar5 & 0x80000) != 0) {
      iVar4 = iVar4 + 3;
    }
  }
  iVar4 = *(int *)(this + 0x20) + iVar4;
  if (0 < *(int *)(this + 0x20)) {
    lVar9 = 0;
    do {
      uVar5 = LevelState::ByteSize(*(LevelState **)(*(long *)(this + 0x18) + lVar9 * 8));
      if (uVar5 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      }
      lVar9 = lVar9 + 1;
      iVar4 = uVar5 + iVar4 + iVar6;
    } while (lVar9 < *(int *)(this + 0x20));
  }
  iVar4 = *(int *)(this + 0x88) + iVar4;
  if (0 < *(int *)(this + 0x88)) {
    lVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(this + 0x80) + lVar9 * 8);
      bVar2 = *(byte *)(lVar10 + 0x1c);
      uVar5 = (uint)bVar2;
      if (bVar2 == 0) {
        uVar3 = 0;
        *(undefined4 *)(lVar10 + 8) = 0;
        iVar6 = 1;
      }
      else {
        if ((bVar2 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          plVar11 = *(long **)(lVar10 + 0x10);
          uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
          if (uVar3 < 0x80) {
            iVar6 = 1;
          }
          else {
            iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
            uVar5 = *(uint *)(lVar10 + 0x1c);
            uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
          }
          uVar3 = iVar6 + uVar3 + 1;
        }
        if ((uVar5 & 2) != 0) {
          uVar3 = uVar3 + 2;
        }
        *(uint *)(lVar10 + 8) = uVar3;
        if (uVar3 < 0x80) {
          iVar6 = 1;
        }
        else {
          iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
        }
      }
      lVar9 = lVar9 + 1;
      iVar4 = uVar3 + iVar4 + iVar6;
    } while (lVar9 < *(int *)(this + 0x88));
  }
  iVar4 = *(int *)(this + 0xe8) + iVar4;
  if (0 < *(int *)(this + 0xe8)) {
    lVar9 = 0;
    do {
      lVar10 = *(long *)(*(long *)(this + 0xe0) + lVar9 * 8);
      if ((*(byte *)(lVar10 + 0x50) & 1) == 0) {
        iVar6 = 0;
      }
      else {
        plVar11 = *(long **)(lVar10 + 0x10);
        uVar5 = (uint)*(undefined8 *)(*plVar11 + -0x18);
        if (uVar5 < 0x80) {
          iVar6 = 1;
        }
        else {
          iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
          uVar5 = (uint)*(undefined8 *)(*plVar11 + -0x18);
        }
        iVar6 = iVar6 + uVar5 + 1;
      }
      iVar8 = *(int *)(lVar10 + 0x20);
      uVar5 = iVar8 + iVar6;
      if (0 < iVar8) {
        lVar12 = 0;
        do {
          plVar11 = *(long **)(*(long *)(lVar10 + 0x18) + lVar12 * 8);
          uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
          if (uVar3 < 0x80) {
            iVar6 = 1;
          }
          else {
            iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
            iVar8 = *(int *)(lVar10 + 0x20);
            uVar3 = (uint)*(undefined8 *)(*plVar11 + -0x18);
          }
          lVar12 = lVar12 + 1;
          uVar5 = uVar5 + iVar6 + uVar3;
        } while (lVar12 < iVar8);
      }
      *(uint *)(lVar10 + 8) = uVar5;
      if (uVar5 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      }
      lVar9 = lVar9 + 1;
      iVar4 = uVar5 + iVar4 + iVar6;
    } while (lVar9 < *(int *)(this + 0xe8));
  }
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


