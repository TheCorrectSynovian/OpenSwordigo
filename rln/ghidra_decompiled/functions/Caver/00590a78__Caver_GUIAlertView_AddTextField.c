/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00590a78
 * Function: Caver::GUIAlertView::AddTextField
 * Signature: undefined __thiscall AddTextField(GUIAlertView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&) */

void __thiscall Caver::GUIAlertView::AddTextField(GUIAlertView *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = *(undefined8 *)param_1;
  pcVar4 = *(code **)(*(long *)this + 0x60);
  local_40 = *(long **)(param_1 + 8);
  if (local_40 != (long *)0x0) {
                    /* try { // try from 00590abc to 00690abf has its CatchHandler @ 005918a4 */
    local_40[1] = local_40[1] + 1;
  }
  (*pcVar4)(this,&local_48);
  plVar3 = local_40;
                    /* try { // try from 00590ae0 to 00690ae3 has its CatchHandler @ 005918b4 */
                    /* try { // try from 00590ae4 to 00690aeb has its CatchHandler @ 005928d0 */
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 00590b0c to 00690b0f has its CatchHandler @ 0059242c */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  puVar1 = *(undefined8 **)(this + 0x148);
  if (puVar1 == *(undefined8 **)(this + 0x150)) {
                    /* try { // try from 00590b54 to 00690b57 has its CatchHandler @ 00592440 */
    std::
    vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>
                     *)(this + 0x140),puVar1,param_1);
  }
  else {
    *puVar1 = *(undefined8 *)param_1;
                    /* try { // try from 00590b30 to 00690b33 has its CatchHandler @ 0059243c */
    lVar5 = *(long *)(param_1 + 8);
    puVar1[1] = lVar5;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    }
    *(undefined8 **)(this + 0x148) = puVar1 + 2;
  }
  *(GUIAlertView **)(*(long *)param_1 + 0x138) = this + 0x110;
  UpdateLayout(this);
                    /* try { // try from 00590b78 to 00690b7b has its CatchHandler @ 00592450 */
                    /* try { // try from 00590b7c to 0069116f has its CatchHandler @ 0058df1c */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


