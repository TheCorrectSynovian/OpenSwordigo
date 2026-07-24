/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00331fc8
 * Function: Caver::ProgramComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(ProgramComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::GetEnumValuesForBindedProperty(int, std::vector<Caver::BindingValue,
   std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::ProgramComponent::GetEnumValuesForBindedProperty
          (ProgramComponent *this,int param_1,vector *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  vector *pvVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  long *local_58;
  long local_48;
  
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_pthread_create_007e4e78;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0) {
    uVar12 = 0;
    pvVar8 = param_2;
    do {
      StringForTrigger((Caver *)&local_80,uVar12);
      BindingValue::ValueWithInt((BindingValue *)(ulong)uVar12,(int)&local_80,(string *)pvVar8);
      puVar1 = *(undefined4 **)(param_2 + 8);
      if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
        pvVar8 = (vector *)local_78;
        std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                  ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2);
        plVar4 = local_58;
      }
      else {
        *puVar1 = local_78[0];
        *(undefined8 *)(puVar1 + 2) = local_70;
        *(long **)(puVar1 + 4) = local_68;
        if (local_68 != (long *)0x0) {
          local_68[1] = local_68[1] + 1;
        }
        *(undefined8 *)(puVar1 + 6) = local_60;
        *(long **)(puVar1 + 8) = local_58;
        if (local_58 != (long *)0x0) {
          local_58[1] = local_58[1] + 1;
        }
        *(undefined4 **)(param_2 + 8) = puVar1 + 10;
        plVar4 = local_58;
      }
      local_58 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar10 = plVar4[1], plVar4[1] = lVar10 + -1, lVar10 + -1 == 0)
         ) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar10 = plVar4[2];
        plVar4[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      plVar4 = local_68;
      if ((local_68 != (long *)0x0) &&
         (lVar10 = local_68[1], local_68[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        (**(code **)(*local_68 + 0x10))(local_68);
        lVar10 = plVar4[2];
        plVar4[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      if ((undefined *)(local_80 + -0x18) != puVar6) {
        piVar9 = (int *)(local_80 + -8);
        if (puVar5 == (undefined *)0x0) {
          iVar11 = *piVar9;
          *piVar9 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar9;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar7) {
              *piVar9 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete((undefined *)(local_80 + -0x18));
        }
      }
      bVar7 = uVar12 < 10;
      uVar12 = uVar12 + 1;
    } while (bVar7);
  }
  else {
    Component::GetEnumValuesForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


