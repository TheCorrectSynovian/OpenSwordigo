/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00393bc0
 * Function: Caver::ComponentOutlet<Caver::UtilityShapeComponent>::target
 * Signature: undefined __thiscall target(ComponentOutlet<Caver::UtilityShapeComponent> * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::UtilityShapeComponent>::target(Caver::Component const*) */

long __thiscall
Caver::ComponentOutlet<Caver::UtilityShapeComponent>::target
          (ComponentOutlet<Caver::UtilityShapeComponent> *this,Component *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)this,param_1);
    lVar1 = *(long *)(this + 0x10);
  }
  return lVar1;
}


