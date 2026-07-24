/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bdfe4
 * Function: Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(GroundMeshGeneratorComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty
          (GroundMeshGeneratorComponent *this,int param_1,vector *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  string *psVar6;
  BindingValue *this_00;
  long lVar7;
  undefined4 local_70 [2];
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  puVar5 = PTR_groundMeshTypeStrings_007e5d28;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_1 == 4) {
    psVar6 = (string *)param_2;
    this_00 = (BindingValue *)0x0;
    do {
      while( true ) {
        BindingValue::ValueWithInt(this_00,(int)puVar5 + (int)this_00 * 8,psVar6);
        puVar2 = *(undefined4 **)(param_2 + 8);
        if (puVar2 == *(undefined4 **)(param_2 + 0x10)) {
          psVar6 = (string *)local_70;
          std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                    ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2);
          plVar4 = local_50;
        }
        else {
          *puVar2 = local_70[0];
          *(undefined8 *)(puVar2 + 2) = local_68;
          *(long **)(puVar2 + 4) = local_60;
          if (local_60 != (long *)0x0) {
            local_60[1] = local_60[1] + 1;
          }
          *(undefined8 *)(puVar2 + 6) = local_58;
          *(long **)(puVar2 + 8) = local_50;
          if (local_50 != (long *)0x0) {
            local_50[1] = local_50[1] + 1;
          }
          *(undefined4 **)(param_2 + 8) = puVar2 + 10;
          plVar4 = local_50;
        }
        local_50 = plVar4;
        if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0))
        {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          lVar7 = plVar4[2];
          plVar4[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
        }
        plVar4 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) break;
LAB_003be128:
        bVar1 = this_00 != (BindingValue *)0x0;
        this_00 = (BindingValue *)0x1;
        if (bVar1) goto LAB_003be158;
      }
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar7 = plVar4[2];
      plVar4[2] = lVar7 + -1;
      if (lVar7 + -1 != 0) goto LAB_003be128;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      bVar1 = this_00 == (BindingValue *)0x0;
      this_00 = (BindingValue *)0x1;
    } while (bVar1);
  }
  else {
    Component::GetEnumValuesForBindedProperty((Component *)this,param_1,param_2);
  }
LAB_003be158:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


