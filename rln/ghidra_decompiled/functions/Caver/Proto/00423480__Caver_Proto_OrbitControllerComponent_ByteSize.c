/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423480
 * Function: Caver::Proto::OrbitControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::ByteSize() const */

void __thiscall Caver::Proto::OrbitControllerComponent::ByteSize(OrbitControllerComponent *this)

{
  OrbitControllerComponent *pOVar1;
  OrbitControllerComponent OVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  OVar2 = this[0x20];
  uVar5 = (uint)(byte)OVar2;
  if (OVar2 == (OrbitControllerComponent)0x0) {
    iVar4 = 0;
  }
  else {
    if (((byte)OVar2 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      pOVar1 = *(OrbitControllerComponent **)PTR_default_instance__007e68f8;
      if (*(long *)(this + 0x10) != 0) {
        pOVar1 = this;
      }
      uVar3 = Vector3::ByteSize(*(Vector3 **)(pOVar1 + 0x10));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar3);
      }
      uVar5 = *(uint *)(this + 0x20);
      iVar4 = uVar3 + iVar4 + 1;
    }
    if ((uVar5 & 2) != 0) {
      iVar4 = iVar4 + 5;
    }
                    /* try { // try from 00423500 to 00523503 has its CatchHandler @ 004235bc */
                    /* try { // try from 00423504 to 0052357f has its CatchHandler @ 00423388 */
    if ((uVar5 & 4) != 0) {
      iVar4 = iVar4 + 5;
    }
  }
  *(int *)(this + 8) = iVar4;
  return;
}


