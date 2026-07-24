/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a4f38
 * Function: Caver::GUIWindow::Effect
 * Signature: undefined __thiscall Effect(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::Effect() */

void __thiscall Caver::GUIWindow::Effect(GUIWindow *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  GUIEffect *pGVar4;
  GUIEffect *local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 005a4f48 to 006a4f4f has its CatchHandler @ 005a57e8 */
  lVar2 = tpidr_el0;
                    /* try { // try from 005a4f50 to 006a4f63 has its CatchHandler @ 005a57e4 */
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 0x1e8);
  if (lVar3 == 0) {
                    /* try { // try from 005a4f64 to 006a4f77 has its CatchHandler @ 005a5808 */
    pGVar4 = operator_new(0x70);
    GUIEffect::GUIEffect(pGVar4);
                    /* try { // try from 005a4f78 to 006a4f87 has its CatchHandler @ 005a57b4 */
    local_48 = pGVar4;
    boost::detail::shared_count::shared_count<Caver::GUIEffect>((shared_count *)&local_40,pGVar4);
    boost::detail::sp_enable_shared_from_this(&local_48,pGVar4,pGVar4);
    pGVar4 = *(GUIEffect **)(this + 0x1e8);
    plVar1 = *(long **)(this + 0x1f0);
                    /* try { // try from 005a4fa8 to 006a4fab has its CatchHandler @ 005a5808 */
    *(GUIEffect **)(this + 0x1e8) = local_48;
    *(long **)(this + 0x1f0) = local_40;
    local_48 = pGVar4;
    local_40 = plVar1;
    if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[1], plVar1[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 005a4fd0 to 006a4fdb has its CatchHandler @ 005a57b0 */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar3 = plVar1[2];
                    /* try { // try from 005a4fdc to 006a4fef has its CatchHandler @ 005a57ac */
      plVar1[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
                    /* try { // try from 005a4ffc to 006a500f has its CatchHandler @ 005a5954 */
    GUIEffect::SetFrame(*(GUIEffect **)(this + 0x1e8),(Rectangle *)(this + 0x84));
    lVar3 = *(long *)(this + 0x1e8);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


