/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050e298
 * Function: Caver::InventoryTrinketSlot::TouchBegan
 * Signature: undefined __thiscall TouchBegan(InventoryTrinketSlot * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::InventoryTrinketSlot::TouchBegan(InventoryTrinketSlot *this,FWTouch *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  string *psVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_68 [8];
  long *local_60;
  long local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar1 = *(long *)(*(long *)(this + 0x110) + 0x100);
  plVar2 = *(long **)(*(long *)(this + 0x110) + 0x108);
  if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (lVar1 != 0) {
    *(undefined8 *)(this + 0x148) = *(undefined8 *)param_1;
    FWTouch::LocationInView(param_1,(GUIView *)this);
    *(long *)(this + 0x150) = local_58[0];
    if (this[0x158] == (InventoryTrinketSlot)0x0) {
      bVar5 = *(long *)(this + 0x148) != 0;
    }
    else {
      bVar5 = true;
    }
    MenuItemSlot::SetSelected(*(MenuItemSlot **)(this + 0x110),bVar5);
    psVar6 = (string *)AudioSystem::sharedSystem();
    FUN_00666bb8(local_58,"click",auStack_68);
    AudioSystem::PlaySoundEffectWithName(psVar6,1.0);
    if ((local_60 != (long *)0x0) &&
       (iVar9 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*local_60 + 8))();
    }
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0050e45c with catch @ 0050e3f0 */
      piVar8 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar5) {
            *piVar8 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


