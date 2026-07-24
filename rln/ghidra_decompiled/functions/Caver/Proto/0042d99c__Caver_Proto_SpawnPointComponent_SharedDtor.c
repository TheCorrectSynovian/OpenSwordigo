/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d99c
 * Function: Caver::Proto::SpawnPointComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(SpawnPointComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::SharedDtor() */

void __thiscall Caver::Proto::SpawnPointComponent::SharedDtor(SpawnPointComponent *this)

{
  if ((*(SpawnPointComponent **)PTR_default_instance__007e5048 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042d9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


