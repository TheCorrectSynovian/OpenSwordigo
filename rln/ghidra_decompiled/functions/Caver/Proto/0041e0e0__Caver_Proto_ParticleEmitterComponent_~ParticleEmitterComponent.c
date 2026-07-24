/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041e0e0
 * Function: Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent
 * Signature: undefined __thiscall ~ParticleEmitterComponent(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent() */

void __thiscall
Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent(ParticleEmitterComponent *this)

{
  ParticleEmitterComponent *pPVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e6068 + 0x10;
  if (*(ParticleEmitterComponent **)PTR_default_instance__007e5ba8 != this) {
                    /* try { // try from 0041e11c to 0051e143 has its CatchHandler @ 0041e154 */
    if (*(long **)(this + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x78) + 8))();
    }
    if (*(long **)(this + 0x80) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x80) + 8))();
    }
  }
  iVar3 = *(int *)(this + 0x4c);
                    /* try { // try from 0041e144 to 0051e157 has its CatchHandler @ 0041e0c8 */
  pPVar1 = *(ParticleEmitterComponent **)(this + 0x40);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
                    /* catch() { ... } // from try @ 0041e11c with catch @ 0041e154 */
      plVar2 = *(long **)(pPVar1 + lVar4 * 8);
                    /* try { // try from 0041e158 to 0051e15f has its CatchHandler @ 0041e168 */
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 0041e160 to 0051e16b has its CatchHandler @ 0041e0c8 */
                    /* catch() { ... } // from try @ 0041e158 with catch @ 0041e168 */
        (**(code **)(*plVar2 + 8))(plVar2);
                    /* catch() { ... } // from try @ 0041e20c with catch @ 0041e16c */
        iVar3 = *(int *)(this + 0x4c);
        pPVar1 = *(ParticleEmitterComponent **)(this + 0x40);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pPVar1 != this + 0x58) && (pPVar1 != (ParticleEmitterComponent *)0x0)) {
    operator_delete__(pPVar1);
  }
  pPVar1 = *(ParticleEmitterComponent **)(this + 0x20);
  if ((pPVar1 != this + 0x30) && (pPVar1 != (ParticleEmitterComponent *)0x0)) {
    operator_delete__(pPVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


