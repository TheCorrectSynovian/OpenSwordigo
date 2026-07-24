/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a3b08
 * Function: Caver::GUIWindow::SetFirstResponder
 * Signature: undefined __thiscall SetFirstResponder(GUIWindow * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&) */

void __thiscall Caver::GUIWindow::SetFirstResponder(GUIWindow *this,shared_ptr *param_1)

{
  GUIWindow *pGVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  GUIWindow *pGVar6;
  GUIWindow *pGVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  uVar2 = DAT_00697148;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x110);
                    /* try { // try from 005a3b44 to 006a3c07 has its CatchHandler @ 005a3b44
                       catch() { ... } // from try @ 005a3b44 with catch @ 005a3b44
                       catch() { ... } // from try @ 005a3c9c with catch @ 005a3b44
                       catch() { ... } // from try @ 005a3d70 with catch @ 005a3b44 */
  if ((plVar9 != (long *)0x0) && (*(long **)param_1 != plVar9)) {
    pGVar6 = *(GUIWindow **)(this + 0x138);
    pGVar1 = this + 0x128;
    pGVar7 = pGVar6;
    if (pGVar6 != pGVar1) {
      local_60 = *(undefined4 *)(pGVar6 + 0x20);
      pcVar4 = *(code **)(*plVar9 + 0x28);
      while( true ) {
        local_68 = uVar2;
        local_70 = 0;
        (*pcVar4)(plVar9,&local_70);
        pGVar6 = (GUIWindow *)FUN_0064c6a0(pGVar6);
        pGVar7 = pGVar1;
        if (pGVar6 == pGVar1) break;
        plVar9 = *(long **)(this + 0x110);
        local_60 = *(undefined4 *)(pGVar6 + 0x20);
        pcVar4 = *(code **)(*plVar9 + 0x28);
      }
    }
    std::
    _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
    ::_M_erase((_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                *)(this + 0x120),*(_Rb_tree_node **)(this + 0x130));
    plVar9 = *(long **)(this + 0x110);
    *(undefined8 *)(this + 0x130) = 0;
    *(GUIWindow **)(this + 0x138) = pGVar7;
    *(GUIWindow **)(this + 0x140) = pGVar7;
    *(undefined8 *)(this + 0x148) = 0;
  }
  plVar8 = *(long **)(this + 0x118);
  if (plVar8 != (long *)0x0) {
    plVar8[1] = plVar8[1] + 1;
  }
  uVar2 = *(undefined8 *)param_1;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  *(undefined8 *)(this + 0x110) = uVar2;
  *(long *)(this + 0x118) = lVar5;
                    /* try { // try from 005a3c08 to 006a3c2f has its CatchHandler @ 005a3d28 */
  if ((plVar8 != (long *)0x0) && (lVar5 = plVar8[1], plVar8[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar5 = plVar8[2];
    plVar8[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if ((plVar9 != (long *)0x0) && (plVar9 != *(long **)(this + 0x110))) {
    (**(code **)(*plVar9 + 0xd0))(plVar9);
  }
                    /* try { // try from 005a3c74 to 006a3c9b has its CatchHandler @ 005a3d1c */
  if ((plVar8 != (long *)0x0) && (lVar5 = plVar8[1], plVar8[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar5 = plVar8[2];
    plVar8[2] = lVar5 + -1;
                    /* try { // try from 005a3c9c to 006a3d47 has its CatchHandler @ 005a3b44 */
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


