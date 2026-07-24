/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00332370
 * Function: Caver::ProgramComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::ValueForBindedProperty(int) */

void Caver::ProgramComponent::ValueForBindedProperty(int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  Program *in_x1;
  string *in_x2;
  int *piVar7;
  long local_48 [2];
  long local_38;
  
  uVar5 = (ulong)(uint)param_1;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  iVar6 = (int)in_x1;
  if (iVar6 == 2) {
    BindingValue::ValueWithProgram((BindingValue *)(uVar5 + 0x80),in_x1);
  }
  else if (iVar6 == 1) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)*(byte *)(uVar5 + 0x78),SUB81(in_x1,0));
  }
  else if (iVar6 == 0) {
    uVar1 = *(uint *)(uVar5 + 0x74);
    StringForTrigger((Caver *)local_48,uVar1);
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,(int)local_48,in_x2);
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar7;
        *piVar7 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
  }
  else {
    Component::ValueForBindedProperty(param_1);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


