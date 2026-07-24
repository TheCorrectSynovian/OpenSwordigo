/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003432b0
 * Function: Caver::Component::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(Component * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::Component::SetValueForBindedProperty(Component *this,int param_1,BindingValue *param_2)

{
  Component *pCVar1;
  Component *pCVar2;
  Component *pCVar3;
  Component *pCVar4;
  
  pCVar1 = this + 0x48;
  pCVar4 = *(Component **)(this + 0x50);
  pCVar2 = pCVar1;
  while (pCVar4 != (Component *)0x0) {
    pCVar3 = pCVar4 + 0x18;
    if (param_1 <= *(int *)(pCVar4 + 0x20)) {
      pCVar2 = pCVar4;
      pCVar3 = pCVar4 + 0x10;
    }
    pCVar4 = *(Component **)pCVar3;
  }
  if (pCVar2 != pCVar1) {
    pCVar4 = pCVar1;
    if (*(int *)(pCVar2 + 0x20) <= param_1) {
      pCVar4 = pCVar2;
    }
    if (pCVar4 != pCVar1) {
                    /* WARNING: Could not recover jumptable at 0x00343310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(pCVar4 + 0x38) + 0x10))
                (*(long **)(pCVar4 + 0x38),**(undefined4 **)(param_2 + 8));
      return;
    }
  }
  return;
}


