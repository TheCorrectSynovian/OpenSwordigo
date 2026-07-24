/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a000c
 * Function: Caver::ComponentOutlet<Caver::BlendAnimationComponent>::target
 * Signature: undefined __thiscall target(ComponentOutlet<Caver::BlendAnimationComponent> * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::BlendAnimationComponent>::target(Caver::Component const*) */

long __thiscall
Caver::ComponentOutlet<Caver::BlendAnimationComponent>::target
          (ComponentOutlet<Caver::BlendAnimationComponent> *this,Component *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)this,param_1);
    lVar1 = *(long *)(this + 0x10);
  }
  return lVar1;
}


