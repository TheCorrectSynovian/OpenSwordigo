/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a2c3c
 * Function: Caver::FireEmitterComponent::Prepare
 * Signature: undefined __thiscall Prepare(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireEmitterComponent::Prepare() */

void __thiscall Caver::FireEmitterComponent::Prepare(FireEmitterComponent *this)

{
  long lVar1;
  
  FloatColor::GetHSLComponents((FloatColor *)(this + 0xc0),(float *)(this + 0xd0));
  lVar1 = *(long *)(this + 0x98);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar1 = *(long *)(this + 0x98);
    if (lVar1 == 0) {
      return;
    }
  }
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(lVar1 + 0x74);
  return;
}


