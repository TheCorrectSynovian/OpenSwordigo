/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e7a8
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(BoneControlledCollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::ByteSize() const */

int __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::ByteSize
          (BoneControlledCollisionShapeComponent *this)

{
  BoneControlledCollisionShapeComponent BVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  
                    /* try { // try from 0040e7ac to 0050e7b3 has its CatchHandler @ 00410864 */
                    /* try { // try from 0040e7b4 to 0050e7c7 has its CatchHandler @ 004107cc */
  BVar1 = this[0x18];
  if (BVar1 == (BoneControlledCollisionShapeComponent)0x0) {
    iVar2 = 0;
    goto LAB_0040e850;
  }
  if (((byte)BVar1 & 1) == 0) {
                    /* try { // try from 0040e7c8 to 0050e7d3 has its CatchHandler @ 00410794 */
    iVar2 = 0;
joined_r0x0040e7f0:
    if (((byte)BVar1 >> 1 & 1) == 0) goto LAB_0040e850;
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 < 0) {
      iVar2 = 0xb;
      goto joined_r0x0040e7f0;
    }
                    /* try { // try from 0040e7e4 to 0050e7eb has its CatchHandler @ 00410864 */
    if (uVar4 < 0x80) {
                    /* try { // try from 0040e7ec to 0050e7ff has its CatchHandler @ 0041078c */
      iVar2 = 2;
      goto joined_r0x0040e7f0;
    }
    iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    iVar2 = iVar2 + 1;
    if ((*(uint *)(this + 0x18) >> 1 & 1) == 0) goto LAB_0040e850;
  }
  plVar5 = *(long **)(this + 0x10);
                    /* try { // try from 0040e81c to 0050e823 has its CatchHandler @ 00410864 */
  uVar4 = (uint)*(undefined8 *)(*plVar5 + -0x18);
                    /* try { // try from 0040e824 to 0050e837 has its CatchHandler @ 0041074c */
  if (uVar4 < 0x80) {
    iVar3 = 1;
  }
  else {
    iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
                    /* try { // try from 0040e838 to 0050e843 has its CatchHandler @ 00410714 */
    uVar4 = (uint)*(undefined8 *)(*plVar5 + -0x18);
  }
  iVar2 = iVar2 + iVar3 + uVar4 + 1;
LAB_0040e850:
  *(int *)(this + 8) = iVar2;
                    /* try { // try from 0040e854 to 0050e857 has its CatchHandler @ 00410864 */
  return iVar2;
}


