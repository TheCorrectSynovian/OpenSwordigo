/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445c38
 * Function: Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView
 * Signature: undefined __cdecl SettingsViewWantsToPresentOnlineView(SettingsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView*) */

void Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(SettingsView *param_1)

{
  long lVar1;
  undefined *puVar2;
  GUIViewController *this;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 00445c3c to 00545c3f has its CatchHandler @ 00445c50 */
                    /* try { // try from 00445c40 to 00545c53 has its CatchHandler @ 00445b00 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00445c3c with catch @ 00445c50 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00445c88 with catch @ 00445c54 */
  this = operator_new(0x58);
  memset(this,0,0x58);
  GUIViewController::GUIViewController(this);
  puVar2 = PTR_vtable_007e6740;
                    /* try { // try from 00445c84 to 00545c87 has its CatchHandler @ 00445ca0 */
                    /* try { // try from 00445c88 to 00545ca3 has its CatchHandler @ 00445c54 */
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined **)this = puVar2 + 0x10;
  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>
            ((shared_ptr<Caver::OnlineMenuViewController> *)&local_48,
             (OnlineMenuViewController *)this);
  plVar3 = *(long **)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 00445c84 with catch @ 00445ca0 */
                    /* try { // try from 00445ca4 to 00545cbf has its CatchHandler @ 00445ca4
                       catch() { ... } // from try @ 00445ca4 with catch @ 00445ca4
                       catch() { ... } // from try @ 00445cc8 with catch @ 00445ca4 */
  pcVar4 = *(code **)(*plVar3 + 0x50);
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
                    /* try { // try from 00445cc0 to 00545cc7 has its CatchHandler @ 00445cd8 */
  (*pcVar4)(plVar3,&local_58);
  plVar3 = local_50;
                    /* try { // try from 00445cc8 to 00545ceb has its CatchHandler @ 00445ca4 */
                    /* catch() { ... } // from try @ 00445cc0 with catch @ 00445cd8 */
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* try { // try from 00445cec to 00545d07 has its CatchHandler @ 00445cec
                       catch() { ... } // from try @ 00445cec with catch @ 00445cec
                       catch() { ... } // from try @ 00445d10 with catch @ 00445cec */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 00445d08 to 00545d0f has its CatchHandler @ 00445d28 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 00445d10 to 00545d3b has its CatchHandler @ 00445cec */
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 00445d08 with catch @ 00445d28 */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = local_40[2];
                    /* catch() { ... } // from try @ 00445d70 with catch @ 00445d3c */
    local_40[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00445d6c to 00545d6f has its CatchHandler @ 00445d80 */
                    /* try { // try from 00445d70 to 00545d83 has its CatchHandler @ 00445d3c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


