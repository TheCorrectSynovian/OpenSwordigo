/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a254
 * Function: Caver::Proto::WaterMeshComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::SharedDtor() */

void __thiscall Caver::Proto::WaterMeshComponent::SharedDtor(WaterMeshComponent *this)

{
  if (*(WaterMeshComponent **)PTR_default_instance__007e6e28 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040a2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x20) + 8))();
      return;
    }
  }
  return;
}


