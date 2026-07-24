/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b134
 * Function: Caver::Proto::SwingableWeaponControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::SwingableWeaponControllerComponent::ByteSize(SwingableWeaponControllerComponent *this)

{
  SwingableWeaponControllerComponent SVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  SVar1 = this[0x20];
  uVar5 = (uint)(byte)SVar1;
  if (SVar1 == (SwingableWeaponControllerComponent)0x0) {
    iVar2 = 0;
    goto LAB_0042b220;
  }
  if (((byte)SVar1 & 1) == 0) {
    iVar2 = 0;
joined_r0x0042b188:
    if (((byte)SVar1 >> 1 & 1) != 0) {
LAB_0042b1a0:
      plVar6 = *(long **)(this + 0x10);
                    /* try { // try from 0042b1a8 to 0052b20f has its CatchHandler @ 0042b11c */
      uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
        uVar5 = *(uint *)(this + 0x20);
        uVar4 = (uint)*(undefined8 *)(*plVar6 + -0x18);
      }
      iVar2 = iVar2 + iVar3 + uVar4 + 1;
    }
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    if ((int)uVar4 < 0) {
      iVar2 = 0xb;
      goto joined_r0x0042b188;
    }
    if (uVar4 < 0x80) {
      iVar2 = 2;
      if (((byte)SVar1 >> 1 & 1) == 0) goto LAB_0042b1e0;
      goto LAB_0042b1a0;
    }
    iVar2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar4);
    uVar5 = *(uint *)(this + 0x20);
    iVar2 = iVar2 + 1;
                    /* try { // try from 0042b19c to 0052b1a7 has its CatchHandler @ 0042b1f4 */
    if ((uVar5 >> 1 & 1) != 0) goto LAB_0042b1a0;
  }
LAB_0042b1e0:
  if ((uVar5 >> 2 & 1) != 0) {
    plVar6 = *(long **)(this + 0x18);
    uVar5 = (uint)*(undefined8 *)(*plVar6 + -0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042b19c with catch @ 0042b1f4
                        */
    if (uVar5 < 0x80) {
      iVar3 = 1;
    }
    else {
      iVar3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uVar5);
                    /* try { // try from 0042b210 to 0052b217 has its CatchHandler @ 0042b220 */
      uVar5 = (uint)*(undefined8 *)(*plVar6 + -0x18);
    }
                    /* try { // try from 0042b218 to 0052b223 has its CatchHandler @ 0042b11c */
    iVar2 = iVar2 + iVar3 + uVar5 + 1;
  }
LAB_0042b220:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042b210 with catch @ 0042b220
                        */
  *(int *)(this + 8) = iVar2;
                    /* try { // try from 0042b224 to 0052b2bf has its CatchHandler @ 0042b224
                       catch() { ... } // from try @ 0042b224 with catch @ 0042b224
                       catch() { ... } // from try @ 0042b2f4 with catch @ 0042b224
                       catch() { ... } // from try @ 0042b3a8 with catch @ 0042b224 */
  return iVar2;
}


