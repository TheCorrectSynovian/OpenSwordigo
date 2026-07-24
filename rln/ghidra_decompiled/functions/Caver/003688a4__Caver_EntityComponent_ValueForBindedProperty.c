/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003688a4
 * Function: Caver::EntityComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(EntityComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityComponent::ValueForBindedProperty(int) */

void __thiscall Caver::EntityComponent::ValueForBindedProperty(EntityComponent *this,int param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  string *psVar6;
  string *psVar7;
  int *piVar8;
  int iVar9;
  string asStack_40 [8];
  long local_38 [2];
  long local_28;
  
  psVar5 = asStack_40;
  psVar6 = asStack_40;
  psVar7 = asStack_40;
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_1 == 1) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0xec],true);
    goto LAB_003689fc;
  }
  if (param_1 != 0) {
    Component::ValueForBindedProperty((int)this);
    goto LAB_003689fc;
  }
  if (*(int *)(this + 0x70) == -1) {
    FUN_00666bb8(local_38,"left");
    BindingValue::ValueWithInt((BindingValue *)0xffffffff,(int)local_38,psVar6);
    puVar4 = (undefined *)(local_38[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_003689fc;
    piVar8 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00368a40;
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
  else if (*(int *)(this + 0x70) == 1) {
    FUN_00666bb8(local_38,"right");
    BindingValue::ValueWithInt((BindingValue *)0x1,(int)local_38,psVar5);
    puVar4 = (undefined *)(local_38[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_003689fc;
    piVar8 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00368a40:
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
  }
  else {
    FUN_00666bb8(local_38,"unknown");
    BindingValue::ValueWithInt((BindingValue *)0x0,(int)local_38,psVar7);
    puVar4 = (undefined *)(local_38[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_003689fc;
    piVar8 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00368a40;
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
    operator_delete(puVar4);
  }
LAB_003689fc:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


