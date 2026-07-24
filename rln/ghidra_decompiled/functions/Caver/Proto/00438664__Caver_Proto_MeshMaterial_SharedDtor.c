/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438664
 * Function: Caver::Proto::MeshMaterial::SharedDtor
 * Signature: undefined __thiscall SharedDtor(MeshMaterial * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::SharedDtor() */

void __thiscall Caver::Proto::MeshMaterial::SharedDtor(MeshMaterial *this)

{
  if (*(MeshMaterial **)PTR_default_instance__007e6c30 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
    if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004386dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x30) + 8))();
      return;
    }
  }
  return;
}


