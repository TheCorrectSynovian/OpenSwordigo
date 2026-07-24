/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3ad4
 * Function: Caver::Proto::GuideTarget_LevelObject::ByteSize
 * Signature: undefined __thiscall ByteSize(GuideTarget_LevelObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::ByteSize() const */

int __thiscall Caver::Proto::GuideTarget_LevelObject::ByteSize(GuideTarget_LevelObject *this)

{
  GuideTarget_LevelObject GVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  GVar1 = this[0x20];
  uVar5 = (uint)(byte)GVar1;
  if (GVar1 == (GuideTarget_LevelObject)0x0) {
    iVar2 = 0;
  }
  else {
    if (((byte)GVar1 & 1) == 0) {
      iVar2 = 0;
      if (((byte)GVar1 >> 1 & 1) == 0) goto LAB_003e3b84;
    }
    else {
      plVar6 = *(long **)(this + 0x10);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x20);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + uVar4 + 1;
      if ((uVar5 >> 1 & 1) == 0) goto LAB_003e3b84;
    }
    plVar6 = *(long **)(this + 0x18);
    uVar5 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar5 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
      uVar5 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + iVar3 + uVar5 + 1;
  }
LAB_003e3b84:
  *(int *)(this + 8) = iVar2;
  return iVar2;
}


