/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414a38
 * Function: Caver::Proto::EntityComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(EntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::ByteSize() const */

void __thiscall Caver::Proto::EntityComponent::ByteSize(EntityComponent *this)

{
  uint uVar1;
  EntityComponent EVar2;
  int iVar3;
  uint uVar4;
  
  EVar2 = this[0x14];
  uVar4 = (uint)(byte)EVar2;
  if (EVar2 == (EntityComponent)0x0) {
    iVar3 = 0;
  }
  else {
    if (((byte)EVar2 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(this + 0xc);
      if ((int)uVar1 < 0) {
        iVar3 = 0xb;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 2;
                    /* catch() { ... } // from try @ 0041499c with catch @ 00414a78 */
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar1);
        uVar4 = *(uint *)(this + 0x14);
        iVar3 = iVar3 + 1;
      }
    }
    if ((uVar4 & 2) != 0) {
      iVar3 = iVar3 + 2;
    }
  }
  *(int *)(this + 8) = iVar3;
  return;
}


