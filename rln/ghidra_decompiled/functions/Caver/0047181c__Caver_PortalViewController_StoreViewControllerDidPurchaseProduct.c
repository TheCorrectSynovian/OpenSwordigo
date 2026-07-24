/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047181c
 * Function: Caver::PortalViewController::StoreViewControllerDidPurchaseProduct
 * Signature: undefined __thiscall StoreViewControllerDidPurchaseProduct(PortalViewController * this, StoreViewController * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController*,
   std::string const&) */

void __thiscall
Caver::PortalViewController::StoreViewControllerDidPurchaseProduct
          (PortalViewController *this,StoreViewController *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  GUISwitch *this_00;
  size_t __n;
  int *piVar6;
  size_t *psVar7;
  void *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(&local_58,"compass",auStack_50);
  __n = *(size_t *)((long)*(void **)param_2 + -0x18);
  psVar7 = (size_t *)((long)local_58 + -0x18);
  if (__n == *psVar7) {
    iVar5 = memcmp(*(void **)param_2,local_58,__n);
    bVar4 = iVar5 == 0;
  }
  else {
    bVar4 = false;
  }
  if (psVar7 != (size_t *)PTR_DAT_007e5de8) {
    piVar6 = (int *)((long)local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar6;
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete(psVar7);
    }
  }
  if ((bVar4) &&
     (this_00 = *(GUISwitch **)(*(long *)(*(long *)(this + 0x80) + 0x170) + 0x108),
     this_00[0x148] == (GUISwitch)0x0)) {
    this_00[0x148] = (GUISwitch)0x1;
    GUISwitch::UpdateFrameTexture(this_00);
    (**(code **)(*(long *)this + 0x70))(this,*(undefined8 *)(*(long *)(this + 0x80) + 0x170));
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


