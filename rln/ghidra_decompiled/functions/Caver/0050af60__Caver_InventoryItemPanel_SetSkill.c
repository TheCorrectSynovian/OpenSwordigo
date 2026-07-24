/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050af60
 * Function: Caver::InventoryItemPanel::SetSkill
 * Signature: undefined __thiscall SetSkill(InventoryItemPanel * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::SetSkill(boost::shared_ptr<Caver::Skill> const&) */

void __thiscall Caver::InventoryItemPanel::SetSkill(InventoryItemPanel *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  InventoryTrinketSlot *this_00;
  undefined1 auStack_68 [8];
  long local_60;
  long *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0050af94 to 0060b067 has its CatchHandler @ 0050af94
                       catch() { ... } // from try @ 0050af94 with catch @ 0050af94
                       catch() { ... } // from try @ 0050b06c with catch @ 0050af94
                       catch() { ... } // from try @ 0050b160 with catch @ 0050af94
                       catch() { ... } // from try @ 0050b238 with catch @ 0050af94 */
  MenuItemSlot::SetSkill(*(MenuItemSlot **)(this + 0x120),param_1,true);
  lVar5 = *(long *)param_1;
  this_00 = *(InventoryTrinketSlot **)(this + 0x130);
  if (lVar5 == 0) {
    local_58[0] = (long *)0x0;
  }
  else {
    psVar4 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_60,"ui_inventory_trinket_slot_icon",auStack_68);
    TextureLibrary::TextureForName(psVar4,SUB81(&local_60,0));
  }
  InventoryTrinketSlot::SetEmptySlotIconTexture(this_00,(intrusive_ptr *)local_58);
  if ((local_58[0] != (long *)0x0) &&
     (iVar7 = (int)local_58[0][1] + -1, *(int *)(local_58[0] + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_58[0] + 8))();
  }
  if ((lVar5 != 0) && ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8)) {
                    /* try { // try from 0050b068 to 0060b06b has its CatchHandler @ 0050b328 */
    piVar6 = (int *)(local_60 + -8);
                    /* try { // try from 0050b06c to 0060b15b has its CatchHandler @ 0050af94 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  UpdateLabels(this);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


