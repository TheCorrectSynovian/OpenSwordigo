/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bf8c4
 * Function: Caver::GroundPolygonComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(GroundPolygonComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::GroundPolygonComponent::ValueForBindedProperty(GroundPolygonComponent *this,int param_1)

{
  switch((Program *)(ulong)(uint)param_1) {
  case (Program *)0x0:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0xb0],SUB41(param_1,0));
    return;
  case (Program *)0x1:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xb4));
    return;
  case (Program *)0x2:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0xb8],SUB41(param_1,0));
    return;
  case (Program *)0x3:
    BindingValue::ValueWithProgram((BindingValue *)(this + 0xc0),(Program *)(ulong)(uint)param_1);
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


