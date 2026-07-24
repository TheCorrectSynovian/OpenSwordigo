/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00406b2c
 * Function: Caver::Proto::GroundPolygonComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::ByteSize() const */

int __thiscall Caver::Proto::GroundPolygonComponent::ByteSize(GroundPolygonComponent *this)

{
  GroundPolygonComponent *pGVar1;
  GroundPolygonComponent GVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  
  GVar2 = this[0x6c];
  uVar7 = (uint)(byte)GVar2;
  uVar5 = uVar7;
  if (GVar2 == (GroundPolygonComponent)0x0) goto LAB_00406c2c;
  if (((byte)GVar2 & 1) == 0) {
    uVar5 = 0;
    if (((byte)GVar2 >> 2 & 1) != 0) {
LAB_00406ba4:
      pGVar1 = *(GroundPolygonComponent **)PTR_default_instance__007e5920;
      if (*(long *)(this + 0x50) != 0) {
        pGVar1 = this;
      }
      uVar3 = Polygon::ByteSize(*(Polygon **)(pGVar1 + 0x50));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar7 = *(uint *)(this + 0x6c);
      uVar5 = uVar5 + uVar3 + iVar4 + 1;
    }
  }
  else {
    pGVar1 = *(GroundPolygonComponent **)PTR_default_instance__007e5920;
    if (*(long *)(this + 0x10) != 0) {
      pGVar1 = this;
    }
    uVar5 = Program::ByteSize(*(Program **)(pGVar1 + 0x10));
    if (uVar5 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
    }
    uVar7 = *(uint *)(this + 0x6c);
    uVar5 = uVar5 + iVar4 + 1;
    if ((uVar7 >> 2 & 1) != 0) goto LAB_00406ba4;
  }
  if ((uVar7 & 8) != 0) {
    uVar5 = uVar5 + 2;
  }
  if ((uVar7 & 0x10) != 0) {
    uVar5 = uVar5 + 5;
  }
  if ((uVar7 & 0x20) != 0) {
    uVar5 = uVar5 + 5;
  }
  if ((uVar7 & 0x40) != 0) {
    uVar5 = uVar5 + 5;
  }
  if ((uVar7 & 0x80) != 0) {
    uVar5 = uVar5 + 2;
  }
LAB_00406c2c:
  iVar4 = *(int *)(this + 0x20) + uVar5;
  if (0 < *(int *)(this + 0x20)) {
    lVar8 = 0;
    do {
      uVar5 = Vector2::ByteSize(*(Vector2 **)(*(long *)(this + 0x18) + lVar8 * 8));
      if (uVar5 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      }
      lVar8 = lVar8 + 1;
      iVar4 = uVar5 + iVar4 + iVar6;
    } while (lVar8 < *(int *)(this + 0x20));
  }
  *(int *)(this + 8) = iVar4;
  return iVar4;
}


