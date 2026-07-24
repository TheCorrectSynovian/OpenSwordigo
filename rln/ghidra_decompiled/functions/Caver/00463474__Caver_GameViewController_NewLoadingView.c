/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00463474
 * Function: Caver::GameViewController::NewLoadingView
 * Signature: undefined __cdecl NewLoadingView(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::NewLoadingView() */

void Caver::GameViewController::NewLoadingView(void)

{
  long lVar1;
  GameViewController *in_x0;
  SceneLoadingView *this;
  undefined8 *in_x8;
  long lVar2;
  SceneLoadingView *local_58;
  long *plStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004634a8 to 0056350b has its CatchHandler @ 004634a8
                       catch() { ... } // from try @ 004634a8 with catch @ 004634a8
                       catch() { ... } // from try @ 00463514 with catch @ 004634a8 */
  if (*(long *)(in_x0 + 0xa8) == 0) {
    LoadGameState(in_x0);
  }
  this = operator_new(0x1b8);
  SceneLoadingView::SceneLoadingView(this);
  boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>
            ((shared_ptr<Caver::SceneLoadingView> *)&local_58,this);
  SceneLoadingView::InitWithGameState
            (local_58,(shared_ptr *)(in_x0 + 0xa8),(shared_ptr *)(in_x0 + 0xb8));
  *in_x8 = local_58;
  in_x8[1] = plStack_50;
  if ((plStack_50 != (long *)0x0) && (plStack_50[1] == 0)) {
    (**(code **)(*plStack_50 + 0x10))(plStack_50);
    lVar2 = plStack_50[2];
                    /* try { // try from 0046350c to 00563513 has its CatchHandler @ 0046359c */
    plStack_50[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 00463514 to 0056360b has its CatchHandler @ 004634a8 */
      (**(code **)(*plStack_50 + 0x18))(plStack_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


