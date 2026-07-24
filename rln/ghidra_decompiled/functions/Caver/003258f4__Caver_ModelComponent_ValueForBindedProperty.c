/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003258f4
 * Function: Caver::ModelComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::ValueForBindedProperty(int) */

void Caver::ModelComponent::ValueForBindedProperty(int param_1)

{
  long lVar1;
  BindingValue *this;
  undefined4 in_w1;
  undefined4 in_register_0000400c;
  undefined4 *in_x8;
  float fVar2;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  this = (BindingValue *)(ulong)(uint)param_1;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(in_w1) {
  case 0:
    BindingValue::ValueWithString(this + 0x70,(string *)CONCAT44(in_register_0000400c,in_w1));
    break;
  case 1:
    BindingValue::ValueWithVector3(this + 0xc4,(Vector3 *)CONCAT44(in_register_0000400c,in_w1));
    break;
  case 2:
    fVar2 = *(float *)(this + 0xd0);
    goto LAB_00325954;
  case 3:
    fVar2 = *(float *)(this + 0xd4);
LAB_00325954:
    BindingValue::ValueWithFloat(this,fVar2 * DAT_00684000);
    break;
  case 4:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0x98));
    break;
  case 5:
    local_38 = (float)NEON_ucvtf((uint)(byte)this[0x13a]);
    fStack_34 = (float)NEON_ucvtf((uint)(byte)this[0x13b]);
    local_30 = (float)NEON_ucvtf((uint)(byte)this[0x13c]);
    fStack_2c = (float)NEON_ucvtf((uint)(byte)this[0x13d]);
    local_38 = local_38 / DAT_00683ffc;
    fStack_34 = fStack_34 / DAT_00683ffc;
    local_30 = local_30 / DAT_00683ffc;
    fStack_2c = fStack_2c / DAT_00683ffc;
    BindingValue::ValueWithFloatColor
              ((BindingValue *)&local_38,(FloatColor *)CONCAT44(in_register_0000400c,in_w1));
    break;
  case 6:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x9c],SUB41(in_w1,0));
    break;
  case 7:
    BindingValue::ValueWithFloatColor
              (this + 0xa0,(FloatColor *)CONCAT44(in_register_0000400c,in_w1));
    break;
  default:
    *in_x8 = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


