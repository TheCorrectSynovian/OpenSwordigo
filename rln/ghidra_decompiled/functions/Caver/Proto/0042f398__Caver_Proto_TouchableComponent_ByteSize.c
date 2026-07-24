/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f398
 * Function: Caver::Proto::TouchableComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::ByteSize() const */

uint __thiscall Caver::Proto::TouchableComponent::ByteSize(TouchableComponent *this)

{
  TouchableComponent *pTVar1;
  TouchableComponent TVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  TVar2 = this[0x18];
  if ((byte)TVar2 == 0) {
    uVar5 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 0042f380 with catch @ 0042f3b8 */
    uVar5 = -((byte)TVar2 & 1) & 5;
    if (((byte)TVar2 >> 1 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042f478 with catch @ 0042f3c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0042f578 with catch @ 0042f3c8
                        */
      pTVar1 = *(TouchableComponent **)PTR_default_instance__007e5f98;
      if (*(long *)(this + 0x10) != 0) {
        pTVar1 = this;
      }
      uVar3 = Program::ByteSize(*(Program **)(pTVar1 + 0x10));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = uVar5 + uVar3 + iVar4 + 1;
    }
  }
  *(uint *)(this + 8) = uVar5;
  return uVar5;
}


