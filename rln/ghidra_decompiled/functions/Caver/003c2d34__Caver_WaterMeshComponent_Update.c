/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c2d34
 * Function: Caver::WaterMeshComponent::Update
 * Signature: undefined __thiscall Update(WaterMeshComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::Update(float) */

void __thiscall Caver::WaterMeshComponent::Update(WaterMeshComponent *this,float param_1)

{
  if ((*(long *)(this + 0x80) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) != 0)) {
    *(float *)(this + 0x154) = *(float *)(this + 0x154) + param_1;
    UpdateBounds(this);
    this[0x140] = (WaterMeshComponent)0x1;
  }
  return;
}


