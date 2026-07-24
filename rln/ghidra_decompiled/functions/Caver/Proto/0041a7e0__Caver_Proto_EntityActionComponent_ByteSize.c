/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a7e0
 * Function: Caver::Proto::EntityActionComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::ByteSize() const */

void __thiscall Caver::Proto::EntityActionComponent::ByteSize(EntityActionComponent *this)

{
  EntityActionComponent *pEVar1;
  uint uVar2;
  int iVar3;
  
                    /* catch() { ... } // from try @ 0041a578 with catch @ 0041a7e8 */
  if (((byte)this[0x18] & 1) == 0) {
                    /* catch() { ... } // from try @ 0041a48c with catch @ 0041a7f8 */
    iVar3 = 0;
  }
  else {
                    /* try { // try from 0041a804 to 0051a80f has its CatchHandler @ 0041a3fc */
                    /* catch() { ... } // from try @ 0041a7dc with catch @ 0041a80c */
    pEVar1 = *(EntityActionComponent **)PTR_default_instance__007e4b60;
    if (*(long *)(this + 0x10) != 0) {
      pEVar1 = this;
    }
    uVar2 = Program::ByteSize(*(Program **)(pEVar1 + 0x10));
    if (uVar2 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    }
    iVar3 = uVar2 + iVar3 + 1;
  }
  *(int *)(this + 8) = iVar3;
  return;
}


