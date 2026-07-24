/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00362ae8
 * Function: Caver::CollectableItemComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::ValueForBindedProperty(int) */

void Caver::CollectableItemComponent::ValueForBindedProperty(int param_1)

{
  ulong uVar1;
  Program *in_x1;
  string *in_x2;
  
  uVar1 = (ulong)(uint)param_1;
  switch((ulong)in_x1 & 0xffffffff) {
  case 0:
    BindingValue::ValueWithInt
              ((BindingValue *)(ulong)*(uint *)(uVar1 + 0x70),
               (int)PTR_bindingTypeStrings_007e6698 + *(uint *)(uVar1 + 0x70) * 8,in_x2);
    return;
  case 1:
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(uVar1 + 0x74),(int)in_x1);
    return;
  case 2:
    BindingValue::ValueWithString((BindingValue *)(uVar1 + 0x78),(string *)in_x1);
    return;
  case 3:
    BindingValue::ValueWithString((BindingValue *)(uVar1 + 0x80),(string *)in_x1);
    return;
  case 4:
    BindingValue::ValueWithBool((BindingValue *)(ulong)*(byte *)(uVar1 + 0x88),SUB81(in_x1,0));
    return;
  case 5:
    BindingValue::ValueWithProgram((BindingValue *)(uVar1 + 0x90),in_x1);
    return;
  default:
    Component::ValueForBindedProperty(param_1);
    return;
  }
}


