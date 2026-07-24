/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3160
 * Function: Caver::Proto::EntityClass::ByteSize
 * Signature: undefined __thiscall ByteSize(EntityClass * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::ByteSize() const */

void __thiscall Caver::Proto::EntityClass::ByteSize(EntityClass *this)

{
  EntityClass EVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  EVar1 = this[0x2c];
  uVar5 = (uint)(byte)EVar1;
  if (EVar1 == (EntityClass)0x0) {
    iVar2 = 0;
    goto LAB_003e325c;
  }
  if (((byte)EVar1 & 1) == 0) {
    iVar2 = 0;
    if (((byte)EVar1 >> 1 & 1) != 0) {
LAB_003e31d4:
      plVar6 = *(long **)(this + 0x18);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x2c);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar4 + 1;
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    if (uVar4 < 0x80) {
      iVar2 = 1;
    }
    else {
      iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar5 = *(uint *)(this + 0x2c);
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
    iVar2 = iVar2 + uVar4 + 1;
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003e31d4;
  }
  if ((uVar5 & 4) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar5 & 8) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar5 & 0x10) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar5 & 0x20) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar5 & 0x40) != 0) {
    iVar2 = iVar2 + 5;
  }
  if ((uVar5 & 0x80) != 0) {
    iVar2 = iVar2 + 5;
  }
LAB_003e325c:
  *(int *)(this + 8) = iVar2;
  return;
}


