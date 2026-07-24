/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041cf7c
 * Function: Caver::Proto::ParticleEmitter::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::SharedDtor() */

void __thiscall Caver::Proto::ParticleEmitter::SharedDtor(ParticleEmitter *this)

{
                    /* catch() { ... } // from try @ 0041cf40 with catch @ 0041cf80 */
                    /* try { // try from 0041cf84 to 0051d003 has its CatchHandler @ 0041cf84
                       catch(type#1 @ 00000000) { ... } // from try @ 0041cf84 with catch @ 0041cf84
                       catch(type#1 @ 00000000) { ... } // from try @ 0041d010 with catch @ 0041cf84
                       catch(type#1 @ 00000000) { ... } // from try @ 0041d078 with catch @ 0041cf84
                        */
  if (*(ParticleEmitter **)PTR_default_instance__007e4cf0 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041cfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x18) + 8))();
      return;
    }
  }
  return;
}


