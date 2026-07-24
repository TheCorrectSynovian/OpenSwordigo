/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041cec4
 * Function: Caver::Proto::ParticleEmitter::~ParticleEmitter
 * Signature: undefined __thiscall ~ParticleEmitter(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::~ParticleEmitter() */

void __thiscall Caver::Proto::ParticleEmitter::~ParticleEmitter(ParticleEmitter *this)

{
  ParticleEmitter *pPVar1;
  
                    /* try { // try from 0041cec8 to 0051cf3f has its CatchHandler @ 0041cdb8 */
  *(undefined **)this = PTR_vtable_007e5278 + 0x10;
  if (*(ParticleEmitter **)PTR_default_instance__007e4cf0 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* catch() { ... } // from try @ 0041ceb4 with catch @ 0041cf1c */
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
  }
  pPVar1 = *(ParticleEmitter **)(this + 0x30);
  if ((pPVar1 != this + 0x40) && (pPVar1 != (ParticleEmitter *)0x0)) {
    operator_delete__(pPVar1);
  }
                    /* try { // try from 0041cf40 to 0051cf77 has its CatchHandler @ 0041cf80 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


