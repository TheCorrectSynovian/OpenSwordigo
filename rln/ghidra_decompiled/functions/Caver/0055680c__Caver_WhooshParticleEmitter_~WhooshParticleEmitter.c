/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055680c
 * Function: Caver::WhooshParticleEmitter::~WhooshParticleEmitter
 * Signature: undefined __thiscall ~WhooshParticleEmitter(WhooshParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WhooshParticleEmitter::~WhooshParticleEmitter() */

void __thiscall Caver::WhooshParticleEmitter::~WhooshParticleEmitter(WhooshParticleEmitter *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0055681c to 006568a3 has its CatchHandler @ 00556954 */
  *(undefined **)this = PTR_vtable_007e5838 + 0x10;
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete__(*(void **)(this + 200));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
  plVar2 = *(long **)(this + 0x10);
                    /* catch() { ... } // from try @ 00556708 with catch @ 00556848
                       catch() { ... } // from try @ 0055675c with catch @ 00556848 */
                    /* catch() { ... } // from try @ 005566a0 with catch @ 00556858 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  operator_delete(this);
  return;
}


