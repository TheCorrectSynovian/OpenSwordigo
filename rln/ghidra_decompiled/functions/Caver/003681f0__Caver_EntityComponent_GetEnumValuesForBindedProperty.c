/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003681f0
 * Function: Caver::EntityComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(EntityComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityComponent::GetEnumValuesForBindedProperty(int, std::vector<Caver::BindingValue,
   std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::EntityComponent::GetEnumValuesForBindedProperty
          (EntityComponent *this,int param_1,vector *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  string *psVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  string asStack_78 [8];
  long local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  long *local_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == 0) {
    psVar7 = asStack_78;
    FUN_00666bb8(&local_70,"right");
    BindingValue::ValueWithInt((BindingValue *)0x1,(int)&local_70,psVar7);
    puVar1 = *(undefined4 **)(param_2 + 8);
    if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
      std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,puVar1,
                 local_68);
      plVar5 = local_48;
    }
    else {
      *puVar1 = local_68[0];
      *(undefined8 *)(puVar1 + 2) = local_60;
      *(long **)(puVar1 + 4) = local_58;
      if (local_58 != (long *)0x0) {
        local_58[1] = local_58[1] + 1;
      }
      *(undefined8 *)(puVar1 + 6) = local_50;
      *(long **)(puVar1 + 8) = local_48;
      if (local_48 != (long *)0x0) {
        local_48[1] = local_48[1] + 1;
      }
      *(undefined4 **)(param_2 + 8) = puVar1 + 10;
      plVar5 = local_48;
    }
    local_48 = plVar5;
    if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar8 = plVar5[2];
      plVar5[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    plVar5 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar8 = local_58[1], local_58[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar8 = plVar5[2];
      plVar5[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    puVar6 = PTR_DAT_007e5de8;
    if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
      piVar9 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    psVar7 = asStack_78;
    FUN_00666bb8(&local_70,"left");
    BindingValue::ValueWithInt((BindingValue *)0xffffffff,(int)&local_70,psVar7);
    puVar1 = *(undefined4 **)(param_2 + 8);
    if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
      std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,puVar1,
                 local_68);
    }
    else {
      *puVar1 = local_68[0];
      *(undefined8 *)(puVar1 + 2) = local_60;
      *(long **)(puVar1 + 4) = local_58;
      if (local_58 != (long *)0x0) {
        local_58[1] = local_58[1] + 1;
      }
      *(undefined8 *)(puVar1 + 6) = local_50;
      *(long **)(puVar1 + 8) = local_48;
      if (local_48 != (long *)0x0) {
        local_48[1] = local_48[1] + 1;
      }
      *(undefined4 **)(param_2 + 8) = puVar1 + 10;
    }
    if ((local_48 != (long *)0x0) &&
       (lVar8 = local_48[1], local_48[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar8 = local_48[2];
      local_48[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_48 + 0x18))(local_48);
      }
    }
    if ((local_58 != (long *)0x0) &&
       (lVar8 = local_58[1], local_58[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar8 = local_58[2];
      local_58[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))(local_58);
      }
    }
    if ((undefined *)(local_70 + -0x18) != puVar6) {
      piVar9 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
  }
  else {
    Component::GetEnumValuesForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


