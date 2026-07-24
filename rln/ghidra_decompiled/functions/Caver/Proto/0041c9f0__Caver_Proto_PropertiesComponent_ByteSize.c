/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c9f0
 * Function: Caver::Proto::PropertiesComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::ByteSize() const */

void __thiscall Caver::Proto::PropertiesComponent::ByteSize(PropertiesComponent *this)

{
  PropertiesComponent *pPVar1;
  uint uVar2;
  int iVar3;
  
                    /* try { // try from 0041c9f8 to 0051c9fb has its CatchHandler @ 0041ca34 */
                    /* try { // try from 0041c9fc to 0051ca53 has its CatchHandler @ 0041c984 */
  if (((byte)this[0x18] & 1) == 0) {
    iVar3 = 0;
  }
  else {
    pPVar1 = *(PropertiesComponent **)PTR_default_instance__007e5f30;
    if (*(long *)(this + 0x10) != 0) {
      pPVar1 = this;
    }
    uVar2 = Program::ByteSize(*(Program **)(pPVar1 + 0x10));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041c9f8 with catch @ 0041ca34
                        */
    if (uVar2 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar2);
    }
    iVar3 = uVar2 + iVar3 + 1;
  }
                    /* try { // try from 0041ca54 to 0051ca5b has its CatchHandler @ 0041ca64 */
  *(int *)(this + 8) = iVar3;
                    /* try { // try from 0041ca5c to 0051ca67 has its CatchHandler @ 0041c984 */
  return;
}


