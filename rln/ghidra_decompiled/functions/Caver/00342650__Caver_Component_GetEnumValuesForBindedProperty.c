/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342650
 * Function: Caver::Component::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(Component * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::GetEnumValuesForBindedProperty(int, std::vector<Caver::BindingValue,
   std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::Component::GetEnumValuesForBindedProperty(Component *this,int param_1,vector *param_2)

{
  Component *pCVar1;
  Component *pCVar2;
  Component *pCVar3;
  long lVar4;
  Component *pCVar5;
  
  pCVar1 = this + 0x48;
  pCVar5 = *(Component **)(this + 0x50);
  pCVar2 = pCVar1;
  while (pCVar5 != (Component *)0x0) {
    pCVar3 = pCVar5 + 0x18;
    if (param_1 <= *(int *)(pCVar5 + 0x20)) {
      pCVar2 = pCVar5;
      pCVar3 = pCVar5 + 0x10;
    }
    pCVar5 = *(Component **)pCVar3;
  }
  if (pCVar2 != pCVar1) {
    pCVar5 = pCVar1;
    if (*(int *)(pCVar2 + 0x20) <= param_1) {
      pCVar5 = pCVar2;
    }
    if (pCVar5 != pCVar1) {
      lVar4 = (**(code **)**(undefined8 **)(pCVar5 + 0x38))();
      GetEnumValuesForBindedOutlet(this,lVar4,param_2);
      return;
    }
  }
  return;
}


