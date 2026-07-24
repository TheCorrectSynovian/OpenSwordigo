/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00368bd8
 * Function: Caver::EntityComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(EntityComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::EntityComponent::SetValueForBindedProperty(int, Caver::BindingValue
   const&) */

void __thiscall
Caver::EntityComponent::SetValueForBindedProperty
          (EntityComponent *this,int param_1,BindingValue *param_2)

{
  int iVar1;
  
  if (param_1 == 1) {
    this[0xdc] = **(EntityComponent **)(param_2 + 8);
  }
  else {
    if (param_1 != 0) {
      Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
      return;
    }
    iVar1 = **(int **)(param_2 + 8);
    if (*(int *)(this + 0x60) != iVar1) {
      *(int *)(this + 0x60) = iVar1;
      *(byte *)(*(long *)(this + 0x18) + 0x90) = (byte)((uint)iVar1 >> 0x1f);
      return;
    }
  }
  return;
}


