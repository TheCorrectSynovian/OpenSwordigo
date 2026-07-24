/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005556d8
 * Function: Caver::SparkParticleEmitter::~SparkParticleEmitter
 * Signature: undefined __thiscall ~SparkParticleEmitter(SparkParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SparkParticleEmitter::~SparkParticleEmitter() */

void __thiscall Caver::SparkParticleEmitter::~SparkParticleEmitter(SparkParticleEmitter *this)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00554df4 with catch @ 005556dc */
                    /* catch() { ... } // from try @ 0055494c with catch @ 005556e0 */
                    /* catch() { ... } // from try @ 00554944 with catch @ 005556e4 */
                    /* catch() { ... } // from try @ 0055487c with catch @ 005556e8 */
                    /* catch() { ... } // from try @ 00554874 with catch @ 005556ec */
                    /* catch() { ... } // from try @ 005547ac with catch @ 005556f0 */
                    /* catch() { ... } // from try @ 005547a4 with catch @ 005556f4 */
                    /* catch() { ... } // from try @ 0055465c with catch @ 005556f8 */
  *(undefined **)this = PTR_vtable_007e5838 + 0x10;
                    /* catch() { ... } // from try @ 00554654 with catch @ 005556fc */
  if (*(void **)(this + 200) != (void *)0x0) {
                    /* catch() { ... } // from try @ 00554dfc with catch @ 00555700
                       catch() { ... } // from try @ 00554e38 with catch @ 00555700 */
    operator_delete__(*(void **)(this + 200));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
  plVar2 = *(long **)(this + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 00554c20 with catch @ 00555738 */
    lVar1 = plVar2[2];
                    /* catch() { ... } // from try @ 00554bcc with catch @ 00555740 */
    plVar2[2] = lVar1 + -1;
                    /* catch() { ... } // from try @ 00554960 with catch @ 00555744
                       catch() { ... } // from try @ 005549d4 with catch @ 00555744 */
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  operator_delete(this);
  return;
}


