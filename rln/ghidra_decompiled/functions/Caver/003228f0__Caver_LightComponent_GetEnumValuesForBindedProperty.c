/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003228f0
 * Function: Caver::LightComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(LightComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::GetEnumValuesForBindedProperty(int, std::vector<Caver::BindingValue,
   std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::LightComponent::GetEnumValuesForBindedProperty
          (LightComponent *this,int param_1,vector *param_2)

{
  long lVar1;
  long *plVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *psVar3;
  long lVar4;
  BindingValue *this_00;
  undefined4 local_60 [2];
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    if (*(long *)(*(long *)PTR_typeStrings_007e6870 + -0x18) != 0) {
      psVar3 = (string *)0x0;
      this_00 = (BindingValue *)PTR_typeStrings_007e6870;
      do {
        BindingValue::ValueWithString(this_00,psVar3);
        psVar3 = *(string **)(param_2 + 8);
        if (psVar3 == *(string **)(param_2 + 0x10)) {
          std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                    ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,
                     psVar3,local_60);
          psVar3 = extraout_x1;
          plVar2 = local_40;
        }
        else {
          *(undefined4 *)psVar3 = local_60[0];
          *(undefined8 *)(psVar3 + 8) = local_58;
          *(long **)(psVar3 + 0x10) = local_50;
          if (local_50 != (long *)0x0) {
            local_50[1] = local_50[1] + 1;
          }
          *(undefined8 *)(psVar3 + 0x18) = local_48;
          *(long **)(psVar3 + 0x20) = local_40;
          if (local_40 != (long *)0x0) {
            local_40[1] = local_40[1] + 1;
          }
          *(string **)(param_2 + 8) = psVar3 + 0x28;
          plVar2 = local_40;
        }
        local_40 = plVar2;
        if ((plVar2 != (long *)0x0) && (lVar4 = plVar2[1], plVar2[1] = lVar4 + -1, lVar4 + -1 == 0))
        {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          lVar4 = plVar2[2];
          plVar2[2] = lVar4 + -1;
          psVar3 = extraout_x1_00;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            psVar3 = extraout_x1_01;
          }
        }
        plVar2 = local_50;
        if ((local_50 != (long *)0x0) &&
           (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
          (**(code **)(*local_50 + 0x10))(local_50);
          lVar4 = plVar2[2];
          plVar2[2] = lVar4 + -1;
          psVar3 = extraout_x1_02;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            psVar3 = extraout_x1_03;
          }
        }
        this_00 = this_00 + 8;
      } while (*(long *)(*(long *)this_00 + -0x18) != 0);
    }
  }
  else {
    Component::GetEnumValuesForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


