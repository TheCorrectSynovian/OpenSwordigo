/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041ae48
 * Function: Caver::Proto::PhysicsPlatformComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(PhysicsPlatformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsPlatformComponent::ByteSize() const */

uint __thiscall Caver::Proto::PhysicsPlatformComponent::ByteSize(PhysicsPlatformComponent *this)

{
  PhysicsPlatformComponent PVar1;
  uint uVar2;
  
  PVar1 = this[0x1c];
  uVar2 = (uint)(byte)PVar1;
  if ((byte)PVar1 != 0) {
                    /* try { // try from 0041ae50 to 0051ae5b has its CatchHandler @ 0041af8c */
    uVar2 = -((byte)PVar1 & 1) & 5;
                    /* try { // try from 0041ae5c to 0051aebf has its CatchHandler @ 0041ae00 */
    if (((byte)PVar1 & 2) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)PVar1 & 4) != 0) {
      uVar2 = uVar2 + 5;
    }
    if (((byte)PVar1 & 8) != 0) {
      uVar2 = uVar2 + 5;
    }
  }
  *(uint *)(this + 8) = uVar2;
  return uVar2;
}


