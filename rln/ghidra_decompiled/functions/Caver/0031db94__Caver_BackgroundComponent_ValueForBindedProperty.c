/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031db94
 * Function: Caver::BackgroundComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::ValueForBindedProperty(int) */

void Caver::BackgroundComponent::ValueForBindedProperty(int param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int in_w1;
  string *extraout_x1;
  string *extraout_x1_00;
  string *psVar4;
  undefined4 *in_x8;
  int *piVar5;
  int iVar6;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_w1 == 0) {
    if (**(long **)((ulong)(uint)param_1 + 0x80) == 0) {
      FUN_00666bb8(local_48,&DAT_0068fbeb,auStack_50);
      psVar4 = extraout_x1_00;
    }
    else {
      FUN_0066a528(local_48,**(long **)((ulong)(uint)param_1 + 0x80) + 0x30);
      psVar4 = extraout_x1;
    }
    BindingValue::ValueWithString((BindingValue *)local_48,psVar4);
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar5 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar5;
        *piVar5 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
  }
  else {
    *in_x8 = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


