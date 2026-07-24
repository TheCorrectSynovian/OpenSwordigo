/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00377b1c
 * Function: Caver::ItemDropComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ItemDropComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ItemDropComponent::ValueForBindedProperty(ItemDropComponent *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x71],true);
    return;
  }
  if (param_1 != 0) {
    if (3 < param_1) {
      iVar1 = (param_1 + -4) / 5;
      switch(param_1 + iVar1 * -5) {
      case 4:
        BindingValue::ValueWithString
                  ((BindingValue *)(*(long *)(this + 0x90) + (long)iVar1 * 0x20),
                   (string *)(ulong)(uint)param_1);
        return;
      case 5:
        BindingValue::ValueWithString
                  ((BindingValue *)(*(long *)(this + 0x90) + (long)iVar1 * 0x20 + 8),
                   (string *)(ulong)(uint)param_1);
        return;
      case 6:
        BindingValue::ValueWithFloat
                  ((BindingValue *)this,
                   *(float *)(*(long *)(this + 0x90) + (long)iVar1 * 0x20 + 0x10));
        return;
      case 7:
        BindingValue::ValueWithInt
                  ((BindingValue *)
                   (ulong)*(uint *)(*(long *)(this + 0x90) + (long)iVar1 * 0x20 + 0x14),param_1);
        return;
      case 8:
        BindingValue::ValueWithInt
                  ((BindingValue *)
                   (ulong)*(uint *)(*(long *)(this + 0x90) + (long)iVar1 * 0x20 + 0x18),param_1);
        return;
      }
    }
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x70],false);
  return;
}


