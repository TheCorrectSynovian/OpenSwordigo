/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053f15c
 * Function: Caver::StripeView::SetTitle
 * Signature: undefined __thiscall SetTitle(StripeView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StripeView::SetTitle(std::string const&) */

void __thiscall Caver::StripeView::SetTitle(StripeView *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  size_t __n;
  long lVar5;
  code *pcVar6;
  int *piVar7;
  GUILabel *this_00;
  long *plVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  long local_58;
  undefined8 local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0053f184 to 0063f18b has its CatchHandler @ 0053f3d0 */
  this_00 = *(GUILabel **)(this + 0x120);
  if (this_00 == (GUILabel *)0x0) {
                    /* try { // try from 0053f18c to 0063f19b has its CatchHandler @ 0053f14c */
                    /* try { // try from 0053f19c to 0063f1a3 has its CatchHandler @ 0053f3c0 */
    FUN_00666bb8(&local_58,&DAT_0068fbeb,auStack_60);
                    /* try { // try from 0053f1a4 to 0063f1b7 has its CatchHandler @ 0053f3bc */
    local_68 = 0xff000000;
    uStack_64 = 0xffffffff;
                    /* try { // try from 0053f1b8 to 0063f1cb has its CatchHandler @ 0053f41c */
    GameInterfaceBuilder::NormalLabel
              ((GameInterfaceBuilder *)&local_50,&local_58,&uStack_64,&local_68);
    if (local_48 != (long *)0x0) {
                    /* try { // try from 0053f1cc to 0063f1db has its CatchHandler @ 0053f38c */
      local_48[1] = local_48[1] + 1;
    }
    plVar8 = *(long **)(this + 0x128);
    *(undefined8 *)(this + 0x120) = local_50;
    *(long **)(this + 0x128) = local_48;
    if ((plVar8 != (long *)0x0) && (lVar5 = plVar8[1], plVar8[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0053f1fc to 0063f1ff has its CatchHandler @ 0053f41c */
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar5 = plVar8[2];
      plVar8[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 0053f21c to 0063f223 has its CatchHandler @ 0053f388 */
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
                    /* try { // try from 0053f224 to 0063f237 has its CatchHandler @ 0053f384 */
    if ((local_48 != (long *)0x0) &&
       (lVar5 = local_48[1], local_48[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0053f238 to 0063f24b has its CatchHandler @ 0053f3e4 */
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar5 = local_48[2];
                    /* try { // try from 0053f24c to 0063f25b has its CatchHandler @ 0053f354 */
      local_48[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_48 + 0x18))(local_48);
      }
    }
                    /* try { // try from 0053f27c to 0063f27f has its CatchHandler @ 0053f3e4 */
    if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0053f224 with catch @ 0053f384 */
      piVar7 = (int *)(local_58 + -8);
                    /* catch() { ... } // from try @ 0053f21c with catch @ 0053f388 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = *piVar7;
        *piVar7 = iVar4 + -1;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 0053f1cc with catch @ 0053f38c */
          iVar4 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar4 < 1) {
                    /* try { // try from 0053f3b8 to 0063f487 has its CatchHandler @ 0053f14c */
        operator_delete((undefined *)(local_58 + -0x18));
                    /* catch() { ... } // from try @ 0053f1a4 with catch @ 0053f3bc */
      }
    }
    local_50 = *(undefined8 *)(this + 0x120);
    pcVar6 = *(code **)(*(long *)this + 0x60);
    local_48 = *(long **)(this + 0x128);
                    /* try { // try from 0053f294 to 0063f29b has its CatchHandler @ 0053f350 */
    if (local_48 != (long *)0x0) {
                    /* try { // try from 0053f29c to 0063f377 has its CatchHandler @ 0053f14c */
      local_48[1] = local_48[1] + 1;
    }
    (*pcVar6)(this,&local_50);
    plVar8 = local_48;
    if ((local_48 != (long *)0x0) &&
       (lVar5 = local_48[1], local_48[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar5 = plVar8[2];
      plVar8[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    this_00 = *(GUILabel **)(this + 0x120);
  }
  __n = *(size_t *)((long)*(void **)param_1 + -0x18);
  if ((__n != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
     (iVar4 = memcmp(*(void **)param_1,*(void **)(this_00 + 0x100),__n), iVar4 != 0)) {
    FUN_0066a6a8(this_00 + 0x100,param_1);
    GUILabel::UpdateText(this_00);
  }
  if (DAT_00683944 < *(float *)(this + 0x8c)) {
                    /* catch() { ... } // from try @ 0053f294 with catch @ 0053f350 */
                    /* catch() { ... } // from try @ 0053f24c with catch @ 0053f354 */
    (**(code **)(*(long *)this + 0x58))(this);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0053f378 to 0063f3b7 has its CatchHandler @ 0053f4d0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0053f19c with catch @ 0053f3c0 */
  __stack_chk_fail();
}


