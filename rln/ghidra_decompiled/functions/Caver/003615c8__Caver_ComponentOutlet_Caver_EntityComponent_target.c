/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003615c8
 * Function: Caver::ComponentOutlet<Caver::EntityComponent>::target
 * Signature: undefined __thiscall target(ComponentOutlet<Caver::EntityComponent> * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::EntityComponent>::target(Caver::Component const*) */

long __thiscall
Caver::ComponentOutlet<Caver::EntityComponent>::target
          (ComponentOutlet<Caver::EntityComponent> *this,Component *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)this,param_1);
    lVar1 = *(long *)(this + 0x10);
  }
  return lVar1;
}


