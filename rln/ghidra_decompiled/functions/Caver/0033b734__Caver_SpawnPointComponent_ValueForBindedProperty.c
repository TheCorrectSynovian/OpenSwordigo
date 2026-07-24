/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033b734
 * Function: Caver::SpawnPointComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SpawnPointComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpawnPointComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::SpawnPointComponent::ValueForBindedProperty(SpawnPointComponent *this,int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  string *psVar6;
  int *piVar7;
  int iVar8;
  string asStack_50 [8];
  long local_48 [2];
  long local_38;
  
  psVar6 = asStack_50;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == 1) {
    BindingValue::ValueWithVector3((BindingValue *)(this + 0x74),(Vector3 *)0x1);
  }
  else if (param_1 == 0) {
    uVar1 = *(uint *)(this + 0x70);
    pcVar5 = "ui_controls_left";
    if (-1 < (int)uVar1) {
      pcVar5 = "ui_controls_right";
    }
    FUN_00666bb8(local_48,pcVar5 + 0xc);
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,(int)local_48,psVar6);
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
  }
  else {
    Component::ValueForBindedProperty((int)this);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


