/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e4c58
 * Function: Caver::Proto::GuideTarget::ByteSize
 * Signature: undefined __thiscall ByteSize(GuideTarget * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget::ByteSize() const */

int __thiscall Caver::Proto::GuideTarget::ByteSize(GuideTarget *this)

{
  GuideTarget GVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  GVar1 = this[0x70];
  uVar6 = (uint)(byte)GVar1;
  if (GVar1 == (GuideTarget)0x0) {
    iVar3 = 0;
    goto LAB_003e4dec;
  }
  if (((byte)GVar1 & 1) == 0) {
    iVar3 = 0;
joined_r0x003e4ca4:
    if (((byte)GVar1 >> 1 & 1) != 0) {
LAB_003e4cc8:
      plVar9 = *(long **)(this + 0x10);
      uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      if (uVar5 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        uVar6 = *(uint *)(this + 0x70);
        uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
      }
      iVar3 = iVar3 + iVar4 + uVar5 + 1;
    }
  }
  else {
    uVar5 = *(uint *)(this + 0xc);
    if ((int)uVar5 < 0) {
      iVar3 = 0xb;
      goto joined_r0x003e4ca4;
    }
    if (uVar5 < 0x80) {
      iVar3 = 2;
      goto joined_r0x003e4ca4;
    }
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
    uVar6 = *(uint *)(this + 0x70);
    iVar3 = iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_003e4cc8;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    plVar9 = *(long **)(this + 0x18);
    uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    if (uVar5 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar6 = *(uint *)(this + 0x70);
      uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    }
    iVar3 = iVar3 + iVar4 + uVar5 + 1;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    plVar9 = *(long **)(this + 0x20);
    uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    if (uVar5 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar6 = *(uint *)(this + 0x70);
      uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    }
    iVar3 = iVar3 + iVar4 + uVar5 + 1;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    plVar9 = *(long **)(this + 0x28);
    uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    if (uVar5 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar6 = *(uint *)(this + 0x70);
      uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
    }
    iVar3 = iVar3 + iVar4 + uVar5 + 1;
  }
  if ((uVar6 & 0x20) != 0) {
    iVar3 = iVar3 + 2;
  }
LAB_003e4dec:
  iVar3 = *(int *)(this + 0x40) + iVar3;
  if (0 < *(int *)(this + 0x40)) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(this + 0x38) + lVar7 * 8);
      bVar2 = *(byte *)(lVar8 + 0x20);
      uVar6 = (uint)bVar2;
      if (bVar2 == 0) {
        uVar5 = 0;
        *(undefined4 *)(lVar8 + 8) = 0;
        iVar4 = 1;
      }
      else {
        if ((bVar2 & 1) == 0) {
          uVar5 = 0;
          if ((bVar2 >> 1 & 1) != 0) {
LAB_003e4e70:
            plVar9 = *(long **)(lVar8 + 0x18);
            uVar6 = (uint)*(undefined8 *)(*plVar9 + -0x18);
            if (uVar6 < 0x80) {
              iVar4 = 1;
            }
            else {
              iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
              uVar6 = (uint)*(undefined8 *)(*plVar9 + -0x18);
            }
            uVar5 = uVar5 + iVar4 + uVar6 + 1;
          }
        }
        else {
          plVar9 = *(long **)(lVar8 + 0x10);
          uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
          if (uVar5 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
            uVar6 = *(uint *)(lVar8 + 0x20);
            uVar5 = (uint)*(undefined8 *)(*plVar9 + -0x18);
          }
          uVar5 = iVar4 + uVar5 + 1;
          if ((uVar6 >> 1 & 1) != 0) goto LAB_003e4e70;
        }
        *(uint *)(lVar8 + 8) = uVar5;
        if (uVar5 < 0x80) {
          iVar4 = 1;
        }
        else {
          iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
        }
      }
      lVar7 = lVar7 + 1;
      iVar3 = uVar5 + iVar3 + iVar4;
    } while (lVar7 < *(int *)(this + 0x40));
  }
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


