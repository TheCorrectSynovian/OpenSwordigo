/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003421a4
 * Function: Caver::Component::UpdateBindingDependencies
 * Signature: undefined __thiscall UpdateBindingDependencies(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::Component::UpdateBindingDependencies() */

void __thiscall Caver::Component::UpdateBindingDependencies(Component *this)

{
  undefined8 *puVar1;
  Component *pCVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)(this + 0x18) + 0xc0);
  puVar1 = *(undefined8 **)(*(long *)(this + 0x18) + 200);
  if (puVar3 != puVar1) {
    do {
      pCVar2 = (Component *)*puVar3;
      if (pCVar2 != this + -0x10) {
        (**(code **)(*(long *)pCVar2 + 0x60))(pCVar2,this + -0x10);
      }
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
  }
  return;
}


