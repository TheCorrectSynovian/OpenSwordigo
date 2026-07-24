/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a4370
 * Function: Caver::GUIWindow::MoveTouch
 * Signature: undefined __thiscall MoveTouch(GUIWindow * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::MoveTouch(Caver::FWTouch const&) */

void __thiscall Caver::GUIWindow::MoveTouch(GUIWindow *this,FWTouch *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005a4394 to 006a439f has its CatchHandler @ 005a43ac */
  if (this[0xe5] == (GUIWindow)0x0) goto LAB_005a43c0;
                    /* catch() { ... } // from try @ 005a4394 with catch @ 005a43ac */
  if (*(GUIWindow **)(this + 0x1c0) != this + 0x1c0) {
    MoveTouch(*(GUIWindow **)(*(long *)(this + 0x1c8) + 0x10),param_1);
    goto LAB_005a43c0;
  }
  lVar2 = GUIApplication::sharedApplication();
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(long **)param_1;
                    /* try { // try from 005a43f8 to 006a4413 has its CatchHandler @ 005a4348 */
                    /* catch() { ... } // from try @ 005a43d0 with catch @ 005a4400 */
  plVar3 = (long *)std::
                   map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                   ::operator[]((map<unsigned_long,boost::shared_ptr<Caver::GUIView>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,boost::shared_ptr<Caver::GUIView>>>>
                                 *)(this + 0x180),(ulong *)&local_48);
                    /* catch() { ... } // from try @ 005a4360 with catch @ 005a4404 */
                    /* try { // try from 005a4414 to 006a441f has its CatchHandler @ 005a4420 */
  (**(code **)(*(long *)this + 0xe8))(&local_48,this,param_1 + 8);
                    /* catch() { ... } // from try @ 005a4414 with catch @ 005a4420 */
                    /* try { // try from 005a4424 to 006a4427 has its CatchHandler @ 005a442c */
  plVar5 = (long *)*plVar3;
  if (local_48 == (long *)0x0) {
LAB_005a4458:
    plVar4 = plVar5;
    if (plVar5 != (long *)0x0) {
LAB_005a4460:
      lVar2 = (**(code **)(*plVar4 + 0xf0))();
      if (((lVar2 == 0) || (plVar3 = (long *)*plVar3, *(char *)((long)plVar3 + 0xe4) != '\0')) ||
         (*(char *)((long)plVar3 + 0xe5) == '\0')) {
        CancelTouch(this,param_1);
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,param_1);
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 005a4424 with catch @ 005a442c */
    plVar4 = local_48;
    if (local_48 == plVar5) goto LAB_005a4460;
    if (*(char *)((long)local_48 + 0xe7) == '\0') goto LAB_005a4458;
    CancelTouch(this,param_1);
    BeginTouch(this,param_1);
                    /* catch() { ... } // from try @ 005a44c4 with catch @ 005a4454
                       catch() { ... } // from try @ 005a4568 with catch @ 005a4454 */
  }
  if ((local_40 != (long *)0x0) && (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar2 = local_40[2];
    local_40[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 005a44c0 to 006a44c3 has its CatchHandler @ 005a4520 */
                    /* try { // try from 005a44c4 to 006a453f has its CatchHandler @ 005a4454 */
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
LAB_005a43c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005a43d0 to 006a43f7 has its CatchHandler @ 005a4400 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


