/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003659dc
 * Function: Caver::DamageComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::ValueForBindedProperty(int) */

void Caver::DamageComponent::ValueForBindedProperty(int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  BindingValue *pBVar6;
  int in_w1;
  string *in_x2;
  string *psVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  long local_48;
  string asStack_40 [8];
  long local_38;
  
  pBVar6 = (BindingValue *)(ulong)(uint)param_1;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  switch(in_w1) {
  case 0:
    uVar1 = *(uint *)(pBVar6 + 0xa4);
    goto LAB_00365ac4;
  case 1:
    uVar1 = *(int *)(pBVar6 + 0xa8) + *(int *)(pBVar6 + 0xa4);
LAB_00365ac4:
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,in_w1);
    goto LAB_00365b58;
  case 2:
    uVar1 = *(uint *)(pBVar6 + 0xb4);
    if (uVar1 == 1) {
      psVar7 = asStack_40;
      FUN_00666bb8(&local_48,"friendly");
    }
    else if (uVar1 == 0) {
      psVar7 = asStack_40;
      FUN_00666bb8(&local_48,"enemy");
    }
    else {
      psVar7 = asStack_40;
      FUN_00666bb8(&local_48,&DAT_0068fbeb);
    }
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,(int)&local_48,psVar7);
    puVar5 = (undefined *)(local_48 + -0x18);
    if (puVar5 == PTR_DAT_007e5de8) goto LAB_00365b58;
    piVar8 = (int *)(local_48 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00365ba0:
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    goto LAB_00365bac;
  case 3:
    uVar1 = *(uint *)(pBVar6 + 0xb8);
    StringForSpecialDamageType((Caver *)&local_48,uVar1);
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,(int)&local_48,in_x2);
    puVar5 = (undefined *)(local_48 + -0x18);
    if (puVar5 == PTR_DAT_007e5de8) goto LAB_00365b58;
    piVar8 = (int *)(local_48 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00365ba0;
    do {
      iVar9 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00365bac:
    if (iVar9 < 1) {
      operator_delete(puVar5);
    }
    goto LAB_00365b58;
  case 4:
    pBVar6 = (BindingValue *)(ulong)(byte)pBVar6[0xd0];
    break;
  case 5:
    fVar10 = *(float *)(pBVar6 + 200);
    goto LAB_00365adc;
  case 6:
    fVar10 = *(float *)(pBVar6 + 0xcc);
LAB_00365adc:
    BindingValue::ValueWithFloat(pBVar6,fVar10);
    goto LAB_00365b58;
  case 7:
    pBVar6 = (BindingValue *)(ulong)(byte)pBVar6[0xa0];
    break;
  case 8:
    pBVar6 = (BindingValue *)(ulong)(byte)pBVar6[0xd1];
    break;
  default:
    Component::ValueForBindedProperty(param_1);
    goto LAB_00365b58;
  }
  BindingValue::ValueWithBool(pBVar6,SUB41(in_w1,0));
LAB_00365b58:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


