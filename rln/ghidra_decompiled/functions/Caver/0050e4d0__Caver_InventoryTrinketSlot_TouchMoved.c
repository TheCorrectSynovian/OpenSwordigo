/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050e4d0
 * Function: Caver::InventoryTrinketSlot::TouchMoved
 * Signature: undefined __thiscall TouchMoved(InventoryTrinketSlot * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::TouchMoved(Caver::FWTouch const&) */

void __thiscall Caver::InventoryTrinketSlot::TouchMoved(InventoryTrinketSlot *this,FWTouch *param_1)

{
  long lVar1;
  long *plVar2;
  DraggableMenuItem *this_00;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  DraggableMenuItem *local_60;
  long *local_58;
  DraggableMenuItem *local_50;
  long *local_48;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0050e454 with catch @ 0050e4d8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)param_1 == *(long *)(this + 0x148)) &&
     (FWTouch::LocationInView(param_1,(GUIView *)this),
     fVar6 = (float)*(undefined8 *)(this + 0x150) - (float)local_40,
     fVar7 = (float)((ulong)*(undefined8 *)(this + 0x150) >> 0x20) -
             (float)((ulong)local_40 >> 0x20), 25.0 < fVar6 * fVar6 + fVar7 * fVar7)) {
    this_00 = operator_new(0x180);
    DraggableMenuItem::DraggableMenuItem(this_00);
    boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>
              ((shared_ptr<Caver::DraggableMenuItem> *)&local_50,this_00);
    local_60 = *(DraggableMenuItem **)(*(long *)(this + 0x110) + 0x100);
    local_58 = *(long **)(*(long *)(this + 0x110) + 0x108);
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    DraggableMenuItem::InitWithItem(local_50,(shared_ptr *)&local_60);
    plVar2 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar4 = local_58[1], local_58[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar4 = plVar2[2];
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    pcVar5 = *(code **)(*(long *)this + 0x98);
    local_60 = local_50;
    local_58 = local_48;
    if (local_48 != (long *)0x0) {
      local_48[1] = local_48[1] + 1;
    }
    (*pcVar5)(this,param_1,&local_60);
    plVar2 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar4 = local_58[1], local_58[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar4 = plVar2[2];
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    puVar3 = *(undefined8 **)(this + 0xf8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,this);
    }
    if ((local_48 != (long *)0x0) &&
       (lVar4 = local_48[1], local_48[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar4 = local_48[2];
      local_48[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_48 + 0x18))(local_48);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


