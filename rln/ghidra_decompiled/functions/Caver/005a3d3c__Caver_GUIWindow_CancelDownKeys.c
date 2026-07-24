/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a3d3c
 * Function: Caver::GUIWindow::CancelDownKeys
 * Signature: undefined __thiscall CancelDownKeys(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::CancelDownKeys() */

void __thiscall Caver::GUIWindow::CancelDownKeys(GUIWindow *this)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  GUIWindow *pGVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  uVar2 = DAT_00697148;
                    /* try { // try from 005a3d48 to 006a3d6f has its CatchHandler @ 005a3d78 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 0x110);
  if (plVar3 != (long *)0x0) {
    pGVar5 = *(GUIWindow **)(this + 0x138);
                    /* try { // try from 005a3d70 to 006a3d7b has its CatchHandler @ 005a3b44 */
                    /* catch() { ... } // from try @ 005a3d48 with catch @ 005a3d78 */
    if (pGVar5 != this + 0x128) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a3ea0 with catch @ 005a3d7c
                       catch(type#1 @ 00000000) { ... } // from try @ 005a3f60 with catch @ 005a3d7c
                        */
      lVar4 = *plVar3;
      while( true ) {
        local_50 = *(undefined4 *)(pGVar5 + 0x20);
        local_60 = 0;
        local_58 = uVar2;
        (**(code **)(lVar4 + 0x28))(plVar3,&local_60);
        pGVar5 = (GUIWindow *)FUN_0064c6a0(pGVar5);
        if (pGVar5 == this + 0x128) break;
        plVar3 = *(long **)(this + 0x110);
        lVar4 = *plVar3;
      }
    }
  }
                    /* try { // try from 005a3dcc to 006a3e3b has its CatchHandler @ 005a3f14 */
  std::
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  ::_M_erase((_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
              *)(this + 0x120),*(_Rb_tree_node **)(this + 0x130));
  *(undefined8 *)(this + 0x130) = 0;
  *(GUIWindow **)(this + 0x138) = this + 0x128;
  *(GUIWindow **)(this + 0x140) = this + 0x128;
  *(undefined8 *)(this + 0x148) = 0;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


