/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036b284
 * Function: Caver::EntityControllerComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::ValueForBindedProperty(int) */

void Caver::EntityControllerComponent::ValueForBindedProperty(int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  BindingValue *this;
  undefined4 in_w1;
  string *in_x2;
  int *piVar5;
  int iVar6;
  float fVar7;
  long local_48 [2];
  long local_38;
  
  this = (BindingValue *)(ulong)(uint)param_1;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  switch(in_w1) {
  case 3:
    fVar7 = *(float *)(this + 0xe0);
    break;
  case 4:
    fVar7 = *(float *)(this + 0xe4);
    break;
  case 5:
    fVar7 = *(float *)(this + 0xe8);
    break;
  case 6:
    uVar1 = *(uint *)(this + 0xf8);
    StringForMovementBehavior((Caver *)local_48,uVar1);
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,(int)local_48,in_x2);
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar5 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar5;
        *piVar5 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    goto LAB_0036b34c;
  default:
    Component::ValueForBindedProperty(param_1);
    goto LAB_0036b34c;
  }
  BindingValue::ValueWithFloat(this,fVar7);
LAB_0036b34c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


