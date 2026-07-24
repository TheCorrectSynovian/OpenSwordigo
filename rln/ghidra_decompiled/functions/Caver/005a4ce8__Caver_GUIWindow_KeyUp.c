/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a4ce8
 * Function: Caver::GUIWindow::KeyUp
 * Signature: undefined __thiscall KeyUp(GUIWindow * this, uint param_1, uint param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::KeyUp(unsigned int, unsigned int, double) */

void __thiscall Caver::GUIWindow::KeyUp(GUIWindow *this,uint param_1,uint param_2,double param_3)

{
  GUIWindow *pGVar1;
  GUIWindow *pGVar2;
  long lVar3;
  GUIWindow *pGVar4;
  GUIWindow *pGVar5;
  uint local_54;
  double local_50;
  uint local_48;
  undefined4 uStack_44;
  uint local_40;
  long local_38;
  
                    /* try { // try from 005a4cf4 to 006a4cfb has its CatchHandler @ 005a4d98 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_54 = param_1;
  if (*(long *)(this + 0x110) != 0) {
                    /* try { // try from 005a4d28 to 006a4d33 has its CatchHandler @ 005a4d40 */
    pGVar1 = this + 0x128;
    pGVar5 = *(GUIWindow **)(this + 0x130);
    pGVar2 = pGVar1;
    while (pGVar5 != (GUIWindow *)0x0) {
                    /* catch() { ... } // from try @ 005a4d28 with catch @ 005a4d40 */
      pGVar4 = pGVar5 + 0x18;
      if (param_1 <= *(uint *)(pGVar5 + 0x20)) {
        pGVar2 = pGVar5;
        pGVar4 = pGVar5 + 0x10;
      }
      pGVar5 = *(GUIWindow **)pGVar4;
    }
    if (pGVar2 != pGVar1) {
                    /* try { // try from 005a4d64 to 006a4d8b has its CatchHandler @ 005a4d94 */
      pGVar5 = pGVar1;
      if (*(uint *)(pGVar2 + 0x20) <= param_1) {
        pGVar5 = pGVar2;
      }
      if (pGVar5 != pGVar1) {
        std::
        _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
        ::erase((_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                 *)(this + 0x120),&local_54);
                    /* try { // try from 005a4d8c to 006a4da7 has its CatchHandler @ 005a4cdc */
                    /* catch() { ... } // from try @ 005a4d64 with catch @ 005a4d94 */
                    /* catch() { ... } // from try @ 005a4cf4 with catch @ 005a4d98 */
        uStack_44 = 2;
        local_40 = local_54;
        local_50 = param_3;
        local_48 = param_2;
        (**(code **)(**(long **)(this + 0x110) + 0x28))(*(long **)(this + 0x110),&local_50);
      }
    }
  }
                    /* try { // try from 005a4da8 to 006a4db3 has its CatchHandler @ 005a4db4 */
  if (*(GUIWindow **)(this + 0x1c0) != this + 0x1c0) {
                    /* catch() { ... } // from try @ 005a4da8 with catch @ 005a4db4 */
                    /* try { // try from 005a4db8 to 006a4dbb has its CatchHandler @ 005a4dc0 */
                    /* catch() { ... } // from try @ 005a4db8 with catch @ 005a4dc0 */
    (**(code **)(**(long **)(*(long *)(this + 0x1c8) + 0x10) + 0x158))
              (param_3,*(long **)(*(long *)(this + 0x1c8) + 0x10),local_54,param_2);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 005a4e58 with catch @ 005a4de8
                       catch() { ... } // from try @ 005a4efc with catch @ 005a4de8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


