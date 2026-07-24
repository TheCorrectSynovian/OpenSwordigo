/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003553a0
 * Function: Caver::BreakableObjectComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::ValueForBindedProperty(int) */

void Caver::BreakableObjectComponent::ValueForBindedProperty(int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  Program *in_x1;
  string *in_x2;
  int *piVar6;
  int iVar7;
  long local_48 [2];
  long local_38;
  
  uVar5 = (ulong)(uint)param_1;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  switch((ulong)in_x1 & 0xffffffff) {
  case 0:
    BindingValue::ValueWithBool((BindingValue *)(ulong)*(byte *)(uVar5 + 0x71),SUB81(in_x1,0));
    break;
  case 1:
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(uVar5 + 0x74),(int)in_x1);
    break;
  case 2:
    uVar1 = *(uint *)(uVar5 + 0x78);
    StringForSpecialDamageType((Caver *)local_48,uVar1);
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,(int)local_48,in_x2);
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    break;
  case 3:
    BindingValue::ValueWithProgram((BindingValue *)(uVar5 + 0x80),in_x1);
    break;
  default:
    Component::ValueForBindedProperty(param_1);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


