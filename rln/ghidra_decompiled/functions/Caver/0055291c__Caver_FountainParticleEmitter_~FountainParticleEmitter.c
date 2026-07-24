/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055291c
 * Function: Caver::FountainParticleEmitter::~FountainParticleEmitter
 * Signature: undefined __thiscall ~FountainParticleEmitter(FountainParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FountainParticleEmitter::~FountainParticleEmitter() */

void __thiscall
Caver::FountainParticleEmitter::~FountainParticleEmitter(FountainParticleEmitter *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 00552920 to 0065299b has its CatchHandler @ 00551c5c */
                    /* catch() { ... } // from try @ 0055261c with catch @ 00552924
                       catch() { ... } // from try @ 005526e0 with catch @ 00552924
                       catch() { ... } // from try @ 005528b4 with catch @ 00552924 */
                    /* catch() { ... } // from try @ 00551fe8 with catch @ 00552928 */
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
                    /* try { // try from 0055299c to 006529df has its CatchHandler @ 0055299c
                       catch() { ... } // from try @ 0055299c with catch @ 0055299c
                       catch() { ... } // from try @ 00552a3c with catch @ 0055299c
                       catch() { ... } // from try @ 00552b58 with catch @ 0055299c */
  operator_delete(this);
  return;
}


