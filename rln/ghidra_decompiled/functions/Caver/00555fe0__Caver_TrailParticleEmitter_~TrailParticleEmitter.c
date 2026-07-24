/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00555fe0
 * Function: Caver::TrailParticleEmitter::~TrailParticleEmitter
 * Signature: undefined __thiscall ~TrailParticleEmitter(TrailParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TrailParticleEmitter::~TrailParticleEmitter() */

void __thiscall Caver::TrailParticleEmitter::~TrailParticleEmitter(TrailParticleEmitter *this)

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
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  operator_delete(this);
  return;
}


