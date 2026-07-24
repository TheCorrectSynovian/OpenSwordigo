/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003652dc
 * Function: Caver::DamageComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(DamageComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::GetEnumValuesForBindedProperty(int, std::vector<Caver::BindingValue,
   std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::DamageComponent::GetEnumValuesForBindedProperty
          (DamageComponent *this,int param_1,vector *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  vector *pvVar8;
  string *psVar9;
  BindingValue *this_00;
  int *piVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  string asStack_60 [8];
  long local_58;
  
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_pthread_create_007e4e78;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_1 == 3) {
    uVar13 = 0;
    pvVar8 = param_2;
    do {
      StringForSpecialDamageType((Caver *)&local_90,uVar13);
      BindingValue::ValueWithInt((BindingValue *)(ulong)uVar13,(int)&local_90,(string *)pvVar8);
      puVar1 = *(undefined4 **)(param_2 + 8);
      if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
        pvVar8 = (vector *)local_88;
        std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                  ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2);
        plVar4 = local_68;
      }
      else {
        *puVar1 = local_88[0];
        *(undefined8 *)(puVar1 + 2) = local_80;
        *(long **)(puVar1 + 4) = local_78;
        if (local_78 != (long *)0x0) {
          local_78[1] = local_78[1] + 1;
        }
        *(undefined8 *)(puVar1 + 6) = local_70;
        *(long **)(puVar1 + 8) = local_68;
        if (local_68 != (long *)0x0) {
          local_68[1] = local_68[1] + 1;
        }
        *(undefined4 **)(param_2 + 8) = puVar1 + 10;
        plVar4 = local_68;
      }
      local_68 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar11 = plVar4[1], plVar4[1] = lVar11 + -1, lVar11 + -1 == 0)
         ) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar11 = plVar4[2];
        plVar4[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      plVar4 = local_78;
      if ((local_78 != (long *)0x0) &&
         (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar11 = plVar4[2];
        plVar4[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      if ((undefined *)(local_90 + -0x18) != puVar6) {
        piVar10 = (int *)(local_90 + -8);
        if (puVar5 == (undefined *)0x0) {
          iVar14 = *piVar10;
          *piVar10 = iVar14 + -1;
        }
        else {
          do {
            iVar14 = *piVar10;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar7) {
              *piVar10 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar14 < 1) {
          operator_delete((undefined *)(local_90 + -0x18));
        }
      }
      bVar7 = uVar13 < 2;
      uVar13 = uVar13 + 1;
    } while (bVar7);
  }
  else if (param_1 == 2) {
    this_00 = (BindingValue *)0x0;
    do {
      iVar14 = (int)this_00;
      if (iVar14 == 1) {
        psVar9 = asStack_60;
        FUN_00666bb8(&local_90,"friendly");
      }
      else {
        psVar9 = asStack_60;
        FUN_00666bb8(&local_90,"enemy");
      }
      BindingValue::ValueWithInt(this_00,(int)&local_90,psVar9);
      puVar1 = *(undefined4 **)(param_2 + 8);
      if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
        std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                  ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,puVar1
                   ,local_88);
        plVar4 = local_68;
      }
      else {
        *puVar1 = local_88[0];
        *(undefined8 *)(puVar1 + 2) = local_80;
        *(long **)(puVar1 + 4) = local_78;
        if (local_78 != (long *)0x0) {
          local_78[1] = local_78[1] + 1;
        }
        *(undefined8 *)(puVar1 + 6) = local_70;
        *(long **)(puVar1 + 8) = local_68;
        if (local_68 != (long *)0x0) {
          local_68[1] = local_68[1] + 1;
        }
        *(undefined4 **)(param_2 + 8) = puVar1 + 10;
        plVar4 = local_68;
      }
      local_68 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar11 = plVar4[1], plVar4[1] = lVar11 + -1, lVar11 + -1 == 0)
         ) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar11 = plVar4[2];
        plVar4[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      plVar4 = local_78;
      if ((local_78 != (long *)0x0) &&
         (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar11 = plVar4[2];
        plVar4[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      if ((undefined *)(local_90 + -0x18) != puVar6) {
        piVar10 = (int *)(local_90 + -8);
        if (puVar5 == (undefined *)0x0) {
          iVar12 = *piVar10;
          *piVar10 = iVar12 + -1;
        }
        else {
          do {
            iVar12 = *piVar10;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar7) {
              *piVar10 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar12 < 1) {
          operator_delete((undefined *)(local_90 + -0x18));
        }
      }
      this_00 = (BindingValue *)0x1;
    } while (iVar14 == 0);
  }
  else {
    Component::GetEnumValuesForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


