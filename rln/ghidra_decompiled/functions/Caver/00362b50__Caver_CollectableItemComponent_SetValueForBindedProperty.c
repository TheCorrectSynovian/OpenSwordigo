/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00362b50
 * Function: Caver::CollectableItemComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(CollectableItemComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::CollectableItemComponent::SetValueForBindedProperty
          (CollectableItemComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  long lStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  switch(param_1) {
  case 0:
    *(undefined4 *)(this + 0x70) = **(undefined4 **)(param_2 + 8);
    break;
  case 1:
    *(undefined4 *)(this + 0x74) = **(undefined4 **)(param_2 + 8);
    break;
  case 2:
    FUN_0066a528(&local_68,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0x78,&local_68);
    puVar4 = (undefined *)(local_68 + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) break;
    piVar5 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00362d7c:
      iVar7 = *piVar5;
      *piVar5 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    goto LAB_00362d88;
  case 3:
    FUN_0066a528(&local_68,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0x80,&local_68);
    puVar4 = (undefined *)(local_68 + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) break;
    piVar5 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00362d7c;
    do {
      iVar7 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00362d88:
    if (iVar7 < 1) {
      operator_delete(puVar4);
    }
    break;
  case 4:
    this[0x88] = **(CollectableItemComponent **)(param_2 + 8);
    break;
  case 5:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0x90,&local_68);
    if (lStack_58 != 0) {
      *(long *)(lStack_58 + 8) = *(long *)(lStack_58 + 8) + 1;
    }
    plVar8 = *(long **)(this + 0xa0);
    *(undefined8 *)(this + 0x98) = local_60;
    *(long *)(this + 0xa0) = lStack_58;
    if ((plVar8 != (long *)0x0) && (lVar6 = plVar8[1], plVar8[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar6 = plVar8[2];
      plVar8[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    if (lStack_48 != 0) {
      *(long *)(lStack_48 + 8) = *(long *)(lStack_48 + 8) + 1;
    }
    plVar8 = *(long **)(this + 0xb0);
    *(undefined8 *)(this + 0xa8) = local_50;
    *(long *)(this + 0xb0) = lStack_48;
    if ((plVar8 != (long *)0x0) && (lVar6 = plVar8[1], plVar8[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar6 = plVar8[2];
      plVar8[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    Program::~Program((Program *)&local_68);
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


