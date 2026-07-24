/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00322c50
 * Function: Caver::LightComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(LightComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LightComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::LightComponent::SetValueForBindedProperty
          (LightComponent *this,int param_1,BindingValue *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  void *pvVar10;
  bool bVar11;
  int iVar12;
  size_t __n;
  int *piVar13;
  long *plVar14;
  size_t *psVar15;
  long lVar16;
  void *local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long local_68;
  
  puVar9 = PTR_typeStrings_007e6870;
  puVar8 = PTR_DAT_007e5de8;
  puVar7 = PTR_pthread_create_007e4e78;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  switch(param_1) {
  case 0:
    if (*(long *)(*(long *)PTR_typeStrings_007e6870 + -0x18) != 0) {
      lVar16 = 0;
      plVar14 = (long *)PTR_typeStrings_007e6870;
      do {
        FUN_0066a528(&local_80,*(undefined8 *)(param_2 + 8));
        pvVar10 = local_80;
        __n = *(size_t *)(*plVar14 + -0x18);
        psVar15 = (size_t *)((long)local_80 + -0x18);
        if (__n == *psVar15) {
          iVar12 = memcmp((void *)*plVar14,local_80,__n);
          bVar11 = iVar12 == 0;
          if (psVar15 != (size_t *)puVar8) goto LAB_00322d3c;
LAB_00322d20:
          if (bVar11) {
LAB_00322d7c:
            *(int *)(this + 0x70) = (int)lVar16;
            break;
          }
        }
        else {
          bVar11 = false;
          if (psVar15 == (size_t *)puVar8) goto LAB_00322d20;
LAB_00322d3c:
          piVar13 = (int *)((long)pvVar10 + -8);
          if (puVar7 == (undefined *)0x0) {
            iVar12 = *piVar13;
            *piVar13 = iVar12 + -1;
          }
          else {
            do {
              iVar12 = *piVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (0 < iVar12) goto LAB_00322d20;
          operator_delete(psVar15);
          if (bVar11) goto LAB_00322d7c;
        }
        lVar16 = lVar16 + 1;
        plVar14 = (long *)(puVar9 + lVar16 * 8);
      } while (*(long *)(*plVar14 + -0x18) != 0);
    }
    uVar6 = _UNK_00683f18;
    uVar5 = _DAT_00683f10;
    if (*(int *)(this + 0x70) == 4) {
      *(undefined4 *)(this + 0x84) = 0x3f800000;
      *(undefined8 *)(this + 0x7c) = uVar6;
      *(undefined8 *)(this + 0x74) = uVar5;
    }
    break;
  case 1:
    uVar1 = **(undefined4 **)(param_2 + 8);
    this[0x90] = (LightComponent)0x0;
    *(undefined4 *)(this + 0x74) = uVar1;
    break;
  case 2:
    BindingValue::FloatColorValue();
    *(ulong *)(this + 0x80) = CONCAT44(uStack_74,uStack_78);
    *(void **)(this + 0x78) = local_80;
    break;
  case 3:
    *(undefined4 *)(this + 0x94) = **(undefined4 **)(param_2 + 8);
    break;
  case 4:
    *(undefined4 *)(this + 0x98) = **(undefined4 **)(param_2 + 8);
    break;
  case 5:
    *(undefined4 *)(this + 0x9c) = **(undefined4 **)(param_2 + 8);
    break;
  case 6:
    BindingValue::Vector3Value();
    *(void **)(this + 0xa0) = local_80;
    *(undefined4 *)(this + 0xa8) = uStack_78;
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


