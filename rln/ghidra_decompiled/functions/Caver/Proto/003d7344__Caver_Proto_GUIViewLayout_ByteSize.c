/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7344
 * Function: Caver::Proto::GUIViewLayout::ByteSize
 * Signature: undefined __thiscall ByteSize(GUIViewLayout * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::ByteSize() const */

int __thiscall Caver::Proto::GUIViewLayout::ByteSize(GUIViewLayout *this)

{
  GUIViewLayout *pGVar1;
  GUIViewLayout GVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  
  GVar2 = this[0x58];
  uVar7 = (uint)(byte)GVar2;
  if (GVar2 == (GUIViewLayout)0x0) {
    iVar4 = 0;
  }
  else {
    if (((byte)GVar2 & 1) == 0) {
      iVar4 = 0;
      if (((byte)GVar2 >> 2 & 1) == 0) goto LAB_003d7418;
    }
    else {
      plVar8 = *(long **)(this + 0x10);
      uVar6 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      if (uVar6 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
        uVar7 = *(uint *)(this + 0x58);
        uVar6 = (uint)*(undefined8 *)(*plVar8 + -0x18);
      }
      iVar4 = iVar4 + uVar6 + 1;
      if ((uVar7 >> 2 & 1) == 0) goto LAB_003d7418;
    }
    pGVar1 = *(GUIViewLayout **)PTR_default_instance__007e69d0;
    if (*(long *)(this + 0x50) != 0) {
      pGVar1 = this;
    }
    bVar3 = *(byte *)(*(long *)(pGVar1 + 0x50) + 0x1c);
    uVar7 = (uint)bVar3;
    if (bVar3 != 0) {
      uVar7 = -(bVar3 & 1) & 5;
      if ((bVar3 & 2) != 0) {
        uVar7 = uVar7 + 5;
      }
      if ((bVar3 & 4) != 0) {
        uVar7 = uVar7 + 5;
      }
      if ((bVar3 & 8) != 0) {
        uVar7 = uVar7 + 5;
      }
    }
    iVar4 = iVar4 + uVar7 + 2;
    *(uint *)(*(long *)(pGVar1 + 0x50) + 8) = uVar7;
  }
LAB_003d7418:
  iVar4 = *(int *)(this + 0x20) + iVar4;
  if (0 < *(int *)(this + 0x20)) {
    lVar9 = 0;
    do {
      uVar7 = ByteSize(*(GUIViewLayout **)(*(long *)(this + 0x18) + lVar9 * 8));
      if (uVar7 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar7);
      }
      lVar9 = lVar9 + 1;
      iVar4 = uVar7 + iVar4 + iVar5;
    } while (lVar9 < *(int *)(this + 0x20));
  }
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


