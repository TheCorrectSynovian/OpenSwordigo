/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00358b88
 * Function: Caver::ComponentOutlet<Caver::KeyframeAnimationComponent>::target
 * Signature: undefined __thiscall target(ComponentOutlet<Caver::KeyframeAnimationComponent> * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::KeyframeAnimationComponent>::target(Caver::Component const*) */

long __thiscall
Caver::ComponentOutlet<Caver::KeyframeAnimationComponent>::target
          (ComponentOutlet<Caver::KeyframeAnimationComponent> *this,Component *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)this,param_1);
    lVar1 = *(long *)(this + 0x10);
  }
  return lVar1;
}


