/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b3e74
 * Function: Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(ElevatorControllerComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty
          (ElevatorControllerComponent *this,int param_1,vector *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  string *psVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined4 local_70 [2];
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == 1) {
    uVar7 = 0xffffffffffffffff;
    iVar6 = 0x7e8be0;
    psVar4 = (string *)param_2;
    do {
      BindingValue::ValueWithInt((BindingValue *)(ulong)((int)uVar7 + 1),iVar6,psVar4);
      puVar1 = *(undefined4 **)(param_2 + 8);
      if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
        psVar4 = (string *)local_70;
        std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                  ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2);
        plVar3 = local_50;
      }
      else {
        *puVar1 = local_70[0];
        *(undefined8 *)(puVar1 + 2) = local_68;
        *(long **)(puVar1 + 4) = local_60;
        if (local_60 != (long *)0x0) {
          local_60[1] = local_60[1] + 1;
        }
        *(undefined8 *)(puVar1 + 6) = local_58;
        *(long **)(puVar1 + 8) = local_50;
        if (local_50 != (long *)0x0) {
          local_50[1] = local_50[1] + 1;
        }
        *(undefined4 **)(param_2 + 8) = puVar1 + 10;
        plVar3 = local_50;
      }
      local_50 = plVar3;
      if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar5 = plVar3[2];
        plVar3[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      plVar3 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar5 = plVar3[2];
        plVar3[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar7 < 2);
  }
  else {
    Component::GetEnumValuesForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


