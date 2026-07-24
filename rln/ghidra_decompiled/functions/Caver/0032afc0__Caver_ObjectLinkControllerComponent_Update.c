/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032afc0
 * Function: Caver::ObjectLinkControllerComponent::Update
 * Signature: undefined __thiscall Update(ObjectLinkControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::Update(float) */

void __thiscall
Caver::ObjectLinkControllerComponent::Update(ObjectLinkControllerComponent *this,float param_1)

{
  if (((this[0x80] == (ObjectLinkControllerComponent)0x0) && (*(long *)(this + 0x78) == 0)) &&
     (*(long *)(*(long *)(this + 0x70) + -0x18) != 0)) {
    param_1 = (float)CreateLink(this);
  }
  UpdateLink(param_1);
  return;
}


