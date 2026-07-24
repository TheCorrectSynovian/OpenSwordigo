/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435b18
 * Function: Caver::Proto::ProjectileControllerComponent::ByteSize
 * Signature: undefined __thiscall ByteSize(ProjectileControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProjectileControllerComponent::ByteSize() const */

int __thiscall
Caver::Proto::ProjectileControllerComponent::ByteSize(ProjectileControllerComponent *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(this + 0x10);
  iVar3 = (uVar2 & 1) * 2;
  if ((uVar2 & 2) != 0) {
    iVar3 = iVar3 + 2;
  }
  iVar1 = 0;
  if ((uVar2 & 0xff) != 0) {
    iVar1 = iVar3;
  }
  *(int *)(this + 8) = iVar1;
  return iVar1;
}


