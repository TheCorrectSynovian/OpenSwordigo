/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac258
 * Function: Caver::ComponentOutlet<Caver::ParticleComponent>::target
 * Signature: undefined __thiscall target(ComponentOutlet<Caver::ParticleComponent> * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::ParticleComponent>::target(Caver::Component const*) */

long __thiscall
Caver::ComponentOutlet<Caver::ParticleComponent>::target
          (ComponentOutlet<Caver::ParticleComponent> *this,Component *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)this,param_1);
    lVar1 = *(long *)(this + 0x10);
  }
  return lVar1;
}


