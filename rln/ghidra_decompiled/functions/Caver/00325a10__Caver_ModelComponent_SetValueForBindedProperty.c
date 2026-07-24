/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00325a10
 * Function: Caver::ModelComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ModelComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::ModelComponent::SetValueForBindedProperty
          (ModelComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  string *psVar6;
  FloatColor *extraout_x1;
  long lVar7;
  int *piVar8;
  int iVar9;
  long local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  switch(param_1) {
  case 0:
    FUN_0066a528(&local_30,*(undefined8 *)(param_2 + 8));
    lVar7 = CONCAT44(uStack_2c,local_30);
    plVar5 = (long *)(lVar7 + -0x18);
    if (*plVar5 != 0) {
      psVar6 = (string *)ModelLibrary::sharedLibrary();
      ModelLibrary::ModelForName(psVar6);
      if (local_40 != 0) {
        InitWithModel(this,(shared_ptr *)&local_40);
      }
      plVar5 = (long *)CONCAT44(uStack_34,uStack_38);
      if ((plVar5 != (long *)0x0) && (lVar7 = plVar5[1], plVar5[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar7 = plVar5[2];
        plVar5[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      lVar7 = CONCAT44(uStack_2c,local_30);
      plVar5 = (long *)(lVar7 + -0x18);
    }
    if (plVar5 != (long *)PTR_DAT_007e5de8) {
      piVar8 = (int *)(lVar7 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(plVar5);
      }
    }
    break;
  case 1:
    BindingValue::Vector3Value();
    *(long *)(this + 0xc4) = local_40;
    *(undefined4 *)(this + 0xcc) = uStack_38;
    bVar4 = Vector3::IsClose((Vector3 *)(this + 0xc4),(Vector3 *)PTR_Vector3Zero_007e5988,
                             DAT_00683734);
    this[0xc0] = (ModelComponent)(~bVar4 & 1);
    goto LAB_00325bb4;
  case 2:
    *(float *)(this + 0xd0) = **(float **)(param_2 + 8) * DAT_00684004;
    goto LAB_00325bb4;
  case 3:
    *(float *)(this + 0xd4) = **(float **)(param_2 + 8) * DAT_00684004;
LAB_00325bb4:
    UpdateBounds(this);
    break;
  case 4:
    *(undefined4 *)(this + 0x98) = **(undefined4 **)(param_2 + 8);
    break;
  case 5:
    BindingValue::FloatColorValue();
    Color::FromFloatColor((Color *)&local_40,extraout_x1);
    *(undefined4 *)(this + 0x13a) = local_30;
    break;
  case 6:
    this[0x9c] = **(ModelComponent **)(param_2 + 8);
    break;
  case 7:
    BindingValue::FloatColorValue();
    *(ulong *)(this + 0xa8) = CONCAT44(uStack_34,uStack_38);
    *(long *)(this + 0xa0) = local_40;
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


