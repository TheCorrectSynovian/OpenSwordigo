/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033c520
 * Function: Caver::SpriteComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::ValueForBindedProperty(int) */

void Caver::SpriteComponent::ValueForBindedProperty(int param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *in_x1;
  string *extraout_x1;
  undefined4 *in_x8;
  int *piVar5;
  int iVar6;
  undefined *local_48 [2];
  long local_38;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((int)in_x1 == 0) {
    local_48[0] = PTR_DAT_007e5de8 + 0x18;
    if (**(long **)((ulong)(uint)param_1 + 0x78) != 0) {
      FUN_0066a6a8(local_48,**(long **)((ulong)(uint)param_1 + 0x78) + 0x30);
      in_x1 = extraout_x1;
    }
    BindingValue::ValueWithString((BindingValue *)local_48,in_x1);
    if (local_48[0] + -0x18 != puVar4) {
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
        operator_delete(local_48[0] + -0x18);
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


