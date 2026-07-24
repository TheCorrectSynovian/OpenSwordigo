/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050b614
 * Function: Caver::InventoryItemPanel::DraggableItemDidDropIntoView
 * Signature: undefined __thiscall DraggableItemDidDropIntoView(InventoryItemPanel * this, GUIDraggableItem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::DraggableItemDidDropIntoView(Caver::GUIDraggableItem*) */

void __thiscall
Caver::InventoryItemPanel::DraggableItemDidDropIntoView
          (InventoryItemPanel *this,GUIDraggableItem *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  string *psVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  long local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  long *local_58;
  long local_48;
  
                    /* try { // try from 0050b618 to 0060b63f has its CatchHandler @ 0050b5e8 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0050b604 with catch @ 0050b63c */
  lVar8 = *(long *)(this + 0x120);
  lVar9 = *(long *)(lVar8 + 0x100);
  plVar1 = *(long **)(lVar8 + 0x108);
  if (plVar1 != (long *)0x0) {
    plVar1[1] = plVar1[1] + 1;
  }
  if (lVar9 == 0) {
    plVar2 = *(long **)(lVar8 + 0x118);
    if (plVar2 == (long *)0x0) {
      bVar5 = *(long *)(lVar8 + 0x110) == 0;
    }
    else {
                    /* catch() { ... } // from try @ 0050b718 with catch @ 0050b6b4 */
      bVar5 = *(long *)(lVar8 + 0x110) == 0;
      if (plVar2[1] == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar9 = plVar2[2];
        plVar2[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
    }
  }
  else {
    bVar5 = false;
  }
                    /* try { // try from 0050b6fc to 0060b6ff has its CatchHandler @ 0050b70c */
  if ((plVar1 != (long *)0x0) && (lVar9 = plVar1[1], plVar1[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar9 = plVar1[2];
    plVar1[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
                    /* catch() { ... } // from try @ 0050b6fc with catch @ 0050b70c */
                    /* try { // try from 0050b710 to 0060b717 has its CatchHandler @ 0050b720 */
                    /* try { // try from 0050b718 to 0060b723 has its CatchHandler @ 0050b6b4 */
                    /* catch() { ... } // from try @ 0050b710 with catch @ 0050b720 */
                    /* try { // try from 0050b724 to 0060b76b has its CatchHandler @ 0050b724
                       catch() { ... } // from try @ 0050b724 with catch @ 0050b724
                       catch() { ... } // from try @ 0050b788 with catch @ 0050b724
                       catch() { ... } // from try @ 0050b918 with catch @ 0050b724
                       catch() { ... } // from try @ 0050b96c with catch @ 0050b724
                       catch() { ... } // from try @ 0050b9c0 with catch @ 0050b724
                       catch() { ... } // from try @ 0050ba38 with catch @ 0050b724 */
  if ((param_1 != (GUIDraggableItem *)0x0 && !bVar5) &&
     (lVar9 = __dynamic_cast(param_1,PTR_typeinfo_007e5980,PTR_typeinfo_007e6148,0), lVar9 != 0)) {
    plVar1 = *(long **)(lVar9 + 0x108);
    if (plVar1 == (long *)0x0) {
      iVar13 = **(int **)(lVar9 + 0x100);
                    /* try { // try from 0050b788 to 0060b913 has its CatchHandler @ 0050b724 */
    }
    else {
      iVar13 = **(int **)(lVar9 + 0x100);
      if (plVar1[1] == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar8 = plVar1[2];
        plVar1[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
                    /* try { // try from 0050b76c to 0060b787 has its CatchHandler @ 0050ba2c */
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
    }
    if (iVar13 == 3) {
      MenuItemSlot::SetSelected(*(MenuItemSlot **)(*(long *)(this + 0x130) + 0x110),false);
      lVar8 = *(long *)(lVar9 + 0x100);
      plVar1 = *(long **)(lVar9 + 0x108);
      if (plVar1 != (long *)0x0) {
        plVar1[1] = plVar1[1] + 1;
      }
      lVar11 = *(long *)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
      plVar2 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
      if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar10 = plVar2[2];
        plVar2[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      if ((plVar1 != (long *)0x0) && (lVar10 = plVar1[1], plVar1[1] = lVar10 + -1, lVar10 + -1 == 0)
         ) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar10 = plVar1[2];
        plVar1[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      if (lVar8 != lVar11) {
        psVar6 = (string *)AudioSystem::sharedSystem();
        FUN_00666bb8(&local_70,"click",auStack_60);
        AudioSystem::PlaySoundEffectWithName(psVar6,1.0);
        if ((local_58 != (long *)0x0) &&
           (iVar13 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar13, iVar13 == 0)) {
          (**(code **)(*local_58 + 8))();
        }
        if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
          piVar12 = (int *)(local_70 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar13 = *piVar12;
            *piVar12 = iVar13 + -1;
          }
          else {
            do {
              iVar13 = *piVar12;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar5) {
                *piVar12 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar13 < 1) {
                    /* catch() { ... } // from try @ 0050b9bc with catch @ 0050ba10 */
                    /* catch() { ... } // from try @ 0050b968 with catch @ 0050ba14 */
            operator_delete((undefined *)(local_70 + -0x18));
                    /* catch() { ... } // from try @ 0050b914 with catch @ 0050ba18 */
          }
        }
        lVar8 = *(long *)(lVar9 + 0x100);
        local_68 = *(long **)(lVar9 + 0x108);
        if (local_68 != (long *)0x0) {
          local_68[1] = local_68[1] + 1;
        }
        lVar9 = *(long *)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
        plVar1 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
        local_70 = lVar8;
        if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar11 = plVar1[2];
                    /* try { // try from 0050b914 to 0060b917 has its CatchHandler @ 0050ba18 */
          plVar1[2] = lVar11 + -1;
                    /* try { // try from 0050b918 to 0060b967 has its CatchHandler @ 0050b724 */
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        if (lVar8 != lVar9) {
          InventoryTrinketSlot::SetTrinket
                    (*(InventoryTrinketSlot **)(this + 0x130),(shared_ptr *)&local_70);
          UpdateLabels(this);
        }
        plVar1 = local_68;
        if ((local_68 != (long *)0x0) &&
           (lVar9 = local_68[1], local_68[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 0050b968 to 0060b96b has its CatchHandler @ 0050ba14 */
                    /* try { // try from 0050b96c to 0060b9bb has its CatchHandler @ 0050b724 */
          (**(code **)(*local_68 + 0x10))(local_68);
          lVar9 = plVar1[2];
          plVar1[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        puVar7 = *(undefined8 **)(this + 0xf8);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,this);
        }
        UpdateLabels(this);
      }
    }
  }
                    /* try { // try from 0050b9bc to 0060b9bf has its CatchHandler @ 0050ba10 */
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0050b9c0 to 0060ba2f has its CatchHandler @ 0050b724 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


