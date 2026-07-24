/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050df30
 * Function: Caver::InventoryTrinketSlot::SetEmptySlotIconTexture
 * Signature: undefined __thiscall SetEmptySlotIconTexture(InventoryTrinketSlot * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::SetEmptySlotIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
    */

void __thiscall
Caver::InventoryTrinketSlot::SetEmptySlotIconTexture
          (InventoryTrinketSlot *this,intrusive_ptr *param_1)

{
  long lVar1;
  GUITexturedRect *pGVar2;
  long lVar3;
  long *plVar4;
  GUITexturedRect *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)param_1 == 0) {
    plVar4 = *(long **)(this + 0x138);
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x138) = 0;
                    /* catch() { ... } // from try @ 0050e058 with catch @ 0050e090 */
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  else {
    pGVar2 = operator_new(0x70);
    GUITexturedRect::GUITexturedRect(pGVar2);
    local_48 = pGVar2;
    boost::detail::shared_count::shared_count<Caver::GUITexturedRect>
              ((shared_count *)&local_40,pGVar2);
    boost::detail::sp_enable_shared_from_this(&local_48,pGVar2,pGVar2);
    pGVar2 = *(GUITexturedRect **)(this + 0x130);
    plVar4 = *(long **)(this + 0x138);
    *(GUITexturedRect **)(this + 0x130) = local_48;
    *(long **)(this + 0x138) = local_40;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      local_48 = pGVar2;
      local_40 = plVar4;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    local_48 = (GUITexturedRect *)0x0;
    local_40 = (long *)0x0;
    GUITexturedRect::InitWithTexture
              (*(GUITexturedRect **)(this + 0x130),param_1,(Rectangle *)&local_48,false);
    pGVar2 = *(GUITexturedRect **)(this + 0x130);
                    /* catch() { ... } // from try @ 0050e06c with catch @ 0050e03c */
    Vector2::Rounded();
    local_40 = *(long **)(*(long *)param_1 + 0x54);
                    /* try { // try from 0050e058 to 0060e06b has its CatchHandler @ 0050e090 */
    GUITexturedRect::CreateWithBounds(pGVar2,(Rectangle *)&local_48,false);
  }
                    /* try { // try from 0050e06c to 0060e093 has its CatchHandler @ 0050e03c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0050e124 with catch @ 0050e0d4 */
  __stack_chk_fail();
}


