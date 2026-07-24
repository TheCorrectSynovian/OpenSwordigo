/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00329dfc
 * Function: Caver::ObjectLinkControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ObjectLinkControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int, Caver::BindingValue const&)
    */

void __thiscall
Caver::ObjectLinkControllerComponent::SetValueForBindedProperty
          (ObjectLinkControllerComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  undefined *puVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  void *__s2;
  int *piVar9;
  size_t *psVar10;
  float local_98;
  float local_8c;
  float local_80;
  void *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  switch(param_1) {
  case 0:
    FUN_0066a528(&local_70,*(undefined8 *)(param_2 + 8));
    pvVar6 = local_70;
    __s2 = *(void **)(this + 0x70);
    psVar10 = (size_t *)((long)local_70 + -0x18);
    if (*psVar10 == *(size_t *)((long)__s2 + -0x18)) {
      iVar8 = memcmp(local_70,__s2,*psVar10);
      bVar7 = iVar8 != 0;
    }
    else {
      bVar7 = true;
    }
    puVar5 = PTR_DAT_007e5de8;
    if (psVar10 != (size_t *)PTR_DAT_007e5de8) {
      piVar9 = (int *)((long)pvVar6 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar9;
        *piVar9 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(psVar10);
      }
    }
    if (!bVar7) break;
    FUN_0066a528(&local_70,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0x70,&local_70);
    if ((undefined *)((long)local_70 + -0x18) != puVar5) {
      piVar9 = (int *)((long)local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar9;
        *piVar9 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar9;
          cVar1 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar7) {
            *piVar9 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)((long)local_70 + -0x18));
      }
    }
    FUN_00668cb8(this + 0x90,0,*(undefined8 *)(*(long *)(this + 0x90) + -0x18),0);
    goto LAB_0032a000;
  case 1:
    if (*(long *)(this + 0x78) == 0) break;
    FUN_0066a6a8(this + 0x70,*(long *)(this + 0x78) + 0x50);
    FUN_0066a528(&local_70,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0x90,&local_70);
    if ((undefined *)((long)local_70 + -0x18) != PTR_DAT_007e5de8) {
      piVar9 = (int *)((long)local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar9;
        *piVar9 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar9;
          cVar1 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar7) {
            *piVar9 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)((long)local_70 + -0x18));
      }
    }
LAB_0032a000:
    CreateLink(this);
    break;
  case 2:
    BindingValue::Vector3Value();
    *(void **)(this + 0xec) = local_70;
    *(undefined4 *)(this + 0xf4) = local_68;
    break;
  case 3:
    BindingValue::Vector3Value();
    fVar4 = DAT_00684004;
    *(float *)(this + 0xf8) = local_80 * DAT_00684004;
    BindingValue::Vector3Value();
    *(float *)(this + 0xfc) = local_8c * fVar4;
    BindingValue::Vector3Value();
    *(float *)(this + 0x100) = local_98 * fVar4;
    UpdateLocalTransform(this);
    break;
  case 4:
    BindingValue::Vector3Value();
    *(void **)(this + 0x104) = local_70;
    *(undefined4 *)(this + 0x10c) = local_68;
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


