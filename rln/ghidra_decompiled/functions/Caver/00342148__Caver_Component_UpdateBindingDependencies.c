/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342148
 * Function: Caver::Component::UpdateBindingDependencies
 * Signature: undefined __thiscall UpdateBindingDependencies(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::UpdateBindingDependencies() */

void __thiscall Caver::Component::UpdateBindingDependencies(Component *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Component *pCVar3;
  
  puVar2 = *(undefined8 **)(*(long *)(this + 0x28) + 200);
  for (puVar1 = *(undefined8 **)(*(long *)(this + 0x28) + 0xc0); puVar1 != puVar2;
      puVar1 = puVar1 + 1) {
    pCVar3 = (Component *)*puVar1;
    if (pCVar3 != this) {
      (**(code **)(*(long *)pCVar3 + 0x60))(pCVar3,this);
    }
  }
  return;
}


