/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00551d98
 * Function: Caver::BlastParticleEmitter::~BlastParticleEmitter
 * Signature: undefined __thiscall ~BlastParticleEmitter(BlastParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlastParticleEmitter::~BlastParticleEmitter() */

void __thiscall Caver::BlastParticleEmitter::~BlastParticleEmitter(BlastParticleEmitter *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_007e5838 + 0x10;
  if (*(void **)(this + 200) != (void *)0x0) {
                    /* try { // try from 00551dc0 to 00651de7 has its CatchHandler @ 005526c0 */
    operator_delete__(*(void **)(this + 200));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
  plVar2 = *(long **)(this + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 00551de8 to 00651e97 has its CatchHandler @ 00551c5c */
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


