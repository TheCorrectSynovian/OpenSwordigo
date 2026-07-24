/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c750c
 * Function: Caver::ComponentOutlet<Caver::WeaponGlowComponent>::target
 * Signature: undefined __thiscall target(ComponentOutlet<Caver::WeaponGlowComponent> * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::WeaponGlowComponent>::target(Caver::Component const*) */

long __thiscall
Caver::ComponentOutlet<Caver::WeaponGlowComponent>::target
          (ComponentOutlet<Caver::WeaponGlowComponent> *this,Component *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)this,param_1);
    lVar1 = *(long *)(this + 0x10);
  }
  return lVar1;
}


