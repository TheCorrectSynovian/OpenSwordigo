/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a35d8
 * Function: Caver::GUIWindow::DragAndDropItemWithTouch
 * Signature: undefined __thiscall DragAndDropItemWithTouch(GUIWindow * this, FWTouch * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,
   boost::shared_ptr<Caver::GUIDraggableItem> const&) */

void __thiscall
Caver::GUIWindow::DragAndDropItemWithTouch(GUIWindow *this,FWTouch *param_1,shared_ptr *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  FWTouch *this_00;
  code *pcVar4;
  long lVar5;
  GUIDraggableItem *this_01;
  long *plVar6;
  ulong local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = *(ulong *)param_1;
  puVar3 = (undefined8 *)
           std::
           map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
           ::operator[]((map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                         *)(this + 0x180),&local_58);
                    /* try { // try from 005a3620 to 006a362b has its CatchHandler @ 005a33f0 */
                    /* catch() { ... } // from try @ 005a35b4 with catch @ 005a3628 */
                    /* try { // try from 005a362c to 006a37e3 has its CatchHandler @ 005a362c
                       catch(type#1 @ 00000000) { ... } // from try @ 005a362c with catch @ 005a362c
                       catch(type#1 @ 00000000) { ... } // from try @ 005a37fc with catch @ 005a362c
                       catch(type#1 @ 00000000) { ... } // from try @ 005a38c8 with catch @ 005a362c
                        */
  (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,param_1);
  local_58 = *(ulong *)param_2;
  pcVar4 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(param_2 + 8);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar4)(this,&local_58);
  plVar6 = local_50;
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  local_58 = *(ulong *)param_1;
  this_00 = (FWTouch *)
            std::
            map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
            ::operator[]((map<unsigned_long,Caver::FWTouch,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                          *)(this + 0x150),&local_58);
  FWTouch::operator=(this_00,param_1);
  local_58 = *(ulong *)param_1;
  puVar3 = (undefined8 *)
           std::
           map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
           ::operator[]((map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                         *)(this + 0x180),&local_58);
  uVar1 = *(undefined8 *)param_2;
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  plVar6 = (long *)puVar3[1];
  *puVar3 = uVar1;
  puVar3[1] = lVar5;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  this_01 = *(GUIDraggableItem **)param_2;
  FWTouch::LocationInView(param_1,(GUIView *)this);
  GUIDraggableItem::SetLocationInSuperview(this_01,(Vector2 *)&local_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


