/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c2d94
 * Function: Caver::WaterMeshComponent::Update
 * Signature: undefined __thiscall Update(WaterMeshComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::WaterMeshComponent::Update(float) */

void __thiscall Caver::WaterMeshComponent::Update(WaterMeshComponent *this,float param_1)

{
  if ((*(long *)(this + 0x68) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x58),(Component *)(this + -0x18))
     , *(long *)(this + 0x68) != 0)) {
    *(float *)(this + 0x13c) = *(float *)(this + 0x13c) + param_1;
    UpdateBounds(this + -0x18);
    this[0x128] = (WaterMeshComponent)0x1;
  }
  return;
}


