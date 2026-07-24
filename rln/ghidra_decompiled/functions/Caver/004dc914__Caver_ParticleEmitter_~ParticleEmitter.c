/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dc914
 * Function: Caver::ParticleEmitter::~ParticleEmitter
 * Signature: undefined __thiscall ~ParticleEmitter(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitter::~ParticleEmitter() */

void __thiscall Caver::ParticleEmitter::~ParticleEmitter(ParticleEmitter *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_007e5838 + 0x10;
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete__(*(void **)(this + 200));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
  plVar2 = *(long **)(this + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004dc9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


