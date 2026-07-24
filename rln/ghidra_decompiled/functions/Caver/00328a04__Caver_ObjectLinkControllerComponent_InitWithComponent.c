/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328a04
 * Function: Caver::ObjectLinkControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ObjectLinkControllerComponent * this, ObjectLinkControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::InitWithComponent(Caver::ObjectLinkControllerComponent
   const*) */

void __thiscall
Caver::ObjectLinkControllerComponent::InitWithComponent
          (ObjectLinkControllerComponent *this,ObjectLinkControllerComponent *param_1)

{
  ObjectLinkControllerComponent *pOVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long local_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  pOVar1 = param_1 + 0x70;
  if (*(long *)(param_1 + 0x78) != 0) {
    pOVar1 = (ObjectLinkControllerComponent *)(*(long *)(param_1 + 0x78) + 0x50);
  }
  FUN_0066a528(local_48,pOVar1);
  FUN_0066a6a8(this + 0x70,local_48);
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
  FUN_0066a6a8(this + 0x90,param_1 + 0x90);
  *(undefined8 *)(this + 0xec) = *(undefined8 *)(param_1 + 0xec);
  *(undefined8 *)(this + 0xf4) = *(undefined8 *)(param_1 + 0xf4);
  *(undefined8 *)(this + 0xfc) = *(undefined8 *)(param_1 + 0xfc);
  *(undefined8 *)(this + 0x104) = *(undefined8 *)(param_1 + 0x104);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


