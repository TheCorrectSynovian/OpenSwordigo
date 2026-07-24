/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003155b4
 * Function: Caver::ComponentOutlet<Caver::ModelComponent>::target
 * Signature: undefined __thiscall target(ComponentOutlet<Caver::ModelComponent> * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::ModelComponent>::target(Caver::Component const*) */

long __thiscall
Caver::ComponentOutlet<Caver::ModelComponent>::target
          (ComponentOutlet<Caver::ModelComponent> *this,Component *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)this,param_1);
    lVar1 = *(long *)(this + 0x10);
  }
  return lVar1;
}


