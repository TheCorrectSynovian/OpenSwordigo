/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417f08
 * Function: Caver::Proto::MonsterEntityComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::ByteSize() const */

void __thiscall Caver::Proto::MonsterEntityComponent::ByteSize(MonsterEntityComponent *this)

{
  MonsterEntityComponent *pMVar1;
  MonsterEntityComponent MVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  MVar2 = this[0x24];
  uVar6 = (uint)(byte)MVar2;
  if (MVar2 == (MonsterEntityComponent)0x0) {
    iVar3 = 0;
    goto LAB_00417fec;
  }
  if (((byte)MVar2 & 1) == 0) {
    iVar3 = 0;
    if (((byte)MVar2 >> 1 & 1) != 0) {
LAB_00417f88:
                    /* try { // try from 00417f90 to 00517f93 has its CatchHandler @ 00418020 */
                    /* try { // try from 00417f94 to 00517fe3 has its CatchHandler @ 00417dc4 */
      pMVar1 = *(MonsterEntityComponent **)PTR_default_instance__007e4960;
      if (*(long *)(this + 0x18) != 0) {
        pMVar1 = this;
      }
      uVar4 = Program::ByteSize(*(Program **)(pMVar1 + 0x18));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
      }
      uVar6 = *(uint *)(this + 0x24);
      iVar3 = iVar3 + uVar4 + iVar5 + 1;
    }
  }
  else {
                    /* try { // try from 00417f3c to 00517f3f has its CatchHandler @ 00418024 */
                    /* try { // try from 00417f40 to 00517f8f has its CatchHandler @ 00417dc4 */
    pMVar1 = *(MonsterEntityComponent **)PTR_default_instance__007e4960;
    if (*(long *)(this + 0x10) != 0) {
      pMVar1 = this;
    }
    uVar4 = Program::ByteSize(*(Program **)(pMVar1 + 0x10));
    if (uVar4 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    }
    uVar6 = *(uint *)(this + 0x24);
    iVar3 = uVar4 + iVar3 + 1;
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00417f88;
  }
  if ((uVar6 & 4) != 0) {
    iVar3 = iVar3 + 2;
  }
                    /* try { // try from 00417fe4 to 00517fe7 has its CatchHandler @ 00418014 */
                    /* try { // try from 00417fe8 to 00518037 has its CatchHandler @ 00417dc4 */
  if ((uVar6 & 8) != 0) {
    iVar3 = iVar3 + 2;
  }
LAB_00417fec:
  *(int *)(this + 8) = iVar3;
  return;
}


