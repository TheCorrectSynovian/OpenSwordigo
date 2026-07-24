/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b004
 * Function: Caver::ObjectLinkControllerComponent::Update
 * Signature: undefined __thiscall Update(ObjectLinkControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ObjectLinkControllerComponent::Update(float) */

void __thiscall
Caver::ObjectLinkControllerComponent::Update(ObjectLinkControllerComponent *this,float param_1)

{
  if (((this[0x68] == (ObjectLinkControllerComponent)0x0) && (*(long *)(this + 0x60) == 0)) &&
     (*(long *)(*(long *)(this + 0x58) + -0x18) != 0)) {
    param_1 = (float)CreateLink(this + -0x18);
  }
  UpdateLink(param_1);
  return;
}


