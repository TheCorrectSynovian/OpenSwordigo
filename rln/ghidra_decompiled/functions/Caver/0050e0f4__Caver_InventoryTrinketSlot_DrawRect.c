/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050e0f4
 * Function: Caver::InventoryTrinketSlot::DrawRect
 * Signature: undefined __thiscall DrawRect(InventoryTrinketSlot * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::InventoryTrinketSlot::DrawRect
          (InventoryTrinketSlot *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 0050e108 to 0060e10b has its CatchHandler @ 0050e118 */
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
                    /* catch() { ... } // from try @ 0050e108 with catch @ 0050e118 */
                    /* try { // try from 0050e11c to 0060e123 has its CatchHandler @ 0050e12c */
  if (*(long *)(this + 0x130) != 0) {
    lVar4 = *(long *)(this + 0x110);
                    /* try { // try from 0050e124 to 0060e12f has its CatchHandler @ 0050e0d4 */
    lVar5 = *(long *)(lVar4 + 0x100);
    plVar1 = *(long **)(lVar4 + 0x108);
    if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0050e11c with catch @ 0050e12c */
                    /* try { // try from 0050e130 to 0060e177 has its CatchHandler @ 0050e130
                       catch(type#1 @ 00000000) { ... } // from try @ 0050e130 with catch @ 0050e130
                       catch(type#1 @ 00000000) { ... } // from try @ 0050e194 with catch @ 0050e130
                       catch(type#1 @ 00000000) { ... } // from try @ 0050e240 with catch @ 0050e130
                        */
      plVar1[1] = plVar1[1] + 1;
    }
    if (lVar5 == 0) {
      plVar2 = *(long **)(lVar4 + 0x118);
      if (plVar2 == (long *)0x0) {
        bVar3 = *(long *)(lVar4 + 0x110) == 0;
      }
      else {
        bVar3 = *(long *)(lVar4 + 0x110) == 0;
        if (plVar2[1] == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          lVar5 = plVar2[2];
          plVar2[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
        }
      }
    }
    else {
      bVar3 = false;
    }
    if ((plVar1 != (long *)0x0) && (lVar5 = plVar1[1], plVar1[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar5 = plVar1[2];
      plVar1[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 0050e178 to 0060e193 has its CatchHandler @ 0050e234 */
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    if (bVar3) {
      (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
      RenderingContext::SetIdentityMatrix(param_1);
      GUITexturedRect::Draw(*(GUITexturedRect **)(this + 0x130),param_1);
      return;
    }
  }
                    /* try { // try from 0050e194 to 0060e237 has its CatchHandler @ 0050e130 */
  return;
}


