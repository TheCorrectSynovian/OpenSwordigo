/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431ad0
 * Function: Caver::Proto::OverlayTextComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::ByteSize() const */

int __thiscall Caver::Proto::OverlayTextComponent::ByteSize(OverlayTextComponent *this)

{
  OverlayTextComponent *pOVar1;
  OverlayTextComponent OVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  
  OVar2 = this[0x30];
  uVar6 = (uint)(byte)OVar2;
                    /* try { // try from 00431ae8 to 00531b23 has its CatchHandler @ 00431e54 */
  if (OVar2 == (OverlayTextComponent)0x0) {
    iVar3 = 0;
    goto LAB_00431c28;
  }
  if (((byte)OVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)OVar2 >> 1 & 1) != 0) {
LAB_00431b44:
                    /* try { // try from 00431b44 to 00531b57 has its CatchHandler @ 00431e50 */
      pOVar1 = *(OverlayTextComponent **)PTR_default_instance__007e6838;
      if (*(long *)(this + 0x18) != 0) {
        pOVar1 = this;
      }
      uVar4 = Vector2::ByteSize(*(Vector2 **)(pOVar1 + 0x18));
                    /* try { // try from 00431b68 to 00531b73 has its CatchHandler @ 00431e18 */
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x30);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar6 = *(uint *)(this + 0x30);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
    iVar3 = iVar3 + uVar4 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00431b44;
  }
  if ((uVar6 >> 2 & 1) != 0) {
                    /* try { // try from 00431b9c to 00531bd7 has its CatchHandler @ 00431dbc */
    plVar7 = *(long **)(this + 0x20);
    uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    if (uVar4 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      uVar6 = *(uint *)(this + 0x30);
      uVar4 = (uint)*(undefined8 *)(*plVar7 + -0x18);
    }
                    /* try { // try from 00431bd8 to 00531fbf has its CatchHandler @ 004319a8 */
    iVar3 = iVar3 + iVar5 + uVar4 + 1;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pOVar1 = *(OverlayTextComponent **)PTR_default_instance__007e6838;
    if (*(long *)(this + 0x28) != 0) {
      pOVar1 = this;
    }
    uVar6 = Vector2::ByteSize(*(Vector2 **)(pOVar1 + 0x28));
    if (uVar6 < 0x80) {
      iVar5 = 1;
    }
    else {
      iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar6);
    }
    iVar3 = iVar3 + uVar6 + iVar5 + 1;
  }
LAB_00431c28:
  *(int *)(this + 8) = iVar3;
  return iVar3;
}


