/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043731c
 * Function: Caver::Proto::SpellComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::ByteSize() const */

void __thiscall Caver::Proto::SpellComponent::ByteSize(SpellComponent *this)

{
  SpellComponent *pSVar1;
  uint uVar2;
  int iVar3;
  
                    /* try { // try from 0043731c to 0053733f has its CatchHandler @ 004371fc */
  if (((byte)this[0x18] & 1) == 0) {
    iVar3 = 0;
  }
  else {
                    /* try { // try from 00437340 to 00537343 has its CatchHandler @ 0043737c */
                    /* try { // try from 00437344 to 005373ab has its CatchHandler @ 004371fc */
    pSVar1 = *(SpellComponent **)PTR_default_instance__007e66b8;
    if (*(long *)(this + 0x10) != 0) {
      pSVar1 = this;
    }
    uVar2 = Program::ByteSize(*(Program **)(pSVar1 + 0x10));
    if (uVar2 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    }
                    /* catch() { ... } // from try @ 00437340 with catch @ 0043737c */
    iVar3 = uVar2 + iVar3 + 1;
  }
  *(int *)(this + 8) = iVar3;
                    /* catch() { ... } // from try @ 00437318 with catch @ 00437388 */
                    /* catch() { ... } // from try @ 004372d4 with catch @ 0043738c */
  return;
}


