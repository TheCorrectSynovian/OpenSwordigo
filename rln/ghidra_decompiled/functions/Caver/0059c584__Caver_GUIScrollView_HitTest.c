/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c584
 * Function: Caver::GUIScrollView::HitTest
 * Signature: undefined __thiscall HitTest(GUIScrollView * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::HitTest(Caver::Vector2 const&) */

void __thiscall Caver::GUIScrollView::HitTest(GUIScrollView *this,Vector2 *param_1)

{
  long lVar1;
  undefined8 extraout_x0;
  undefined8 *in_x8;
  long lVar2;
  long *plVar3;
  long local_60;
  long *plStack_58;
  undefined *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 0059b004 with catch @ 0059c588 */
                    /* catch() { ... } // from try @ 0059b300 with catch @ 0059c590 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x1b2] == (GUIScrollView)0x0) {
    GUIView::HitTest((Vector2 *)this);
                    /* catch() { ... } // from try @ 0059b064 with catch @ 0059c664 */
  }
  else {
    GUIView::HitTest((Vector2 *)this);
    if ((plStack_58 != (long *)0x0) &&
       (lVar2 = plStack_58[1], plStack_58[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      lVar2 = plStack_58[2];
      plStack_58[2] = lVar2 + -1;
                    /* catch() { ... } // from try @ 0059bb74 with catch @ 0059c5f8
                       catch() { ... } // from try @ 0059bb94 with catch @ 0059c5f8
                       catch() { ... } // from try @ 0059bc04 with catch @ 0059c5f8 */
      if (lVar2 + -1 == 0) {
        (**(code **)(*plStack_58 + 0x18))(plStack_58);
      }
    }
    if (local_60 == 0) {
      *in_x8 = 0;
      in_x8[1] = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0059b524 with catch @ 0059c600
                       catch() { ... } // from try @ 0059b544 with catch @ 0059c600
                       catch() { ... } // from try @ 0059b5b4 with catch @ 0059c600 */
      plVar3 = *(long **)(this + 0x10);
                    /* catch() { ... } // from try @ 0059b414 with catch @ 0059c604
                       catch() { ... } // from try @ 0059b434 with catch @ 0059c604
                       catch() { ... } // from try @ 0059b4d8 with catch @ 0059c604 */
                    /* catch() { ... } // from try @ 0059b0e0 with catch @ 0059c608 */
      if ((plVar3 == (long *)0x0) || (plVar3[1] == 0)) {
        local_50 = PTR_vtable_007e6120 + 0x10;
        boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_50);
        std::exception::~exception((exception *)&local_50);
                    /* WARNING: Subroutine does not return */
        FUN_006818c4(extraout_x0);
      }
      lVar2 = plVar3[1] + 1;
      *in_x8 = *(undefined8 *)(this + 8);
      in_x8[1] = plVar3;
      plVar3[1] = lVar2;
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


