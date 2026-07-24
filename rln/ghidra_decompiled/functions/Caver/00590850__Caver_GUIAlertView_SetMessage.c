/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00590850
 * Function: Caver::GUIAlertView::SetMessage
 * Signature: undefined __thiscall SetMessage(GUIAlertView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIAlertView::SetMessage(std::string const&) */

void __thiscall Caver::GUIAlertView::SetMessage(GUIAlertView *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  size_t __n;
  int *piVar5;
  GUIView *this_00;
  size_t *psVar6;
  GUILabel *this_01;
  void *pvVar7;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined8 uStack_58;
  long local_48;
  
                    /* try { // try from 00590860 to 00690887 has its CatchHandler @ 005918b8 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(*(long *)param_1 + -0x18) == 0) {
    local_60 = (void *)0x0;
    uStack_58 = 0;
    GUIView::SetFrame(*(GUIView **)(this + 0x130),(Rectangle *)&local_60);
    this_01 = *(GUILabel **)(this + 0x130);
    FUN_00666bb8(&local_60,&DAT_0068fbeb,auStack_68);
    pvVar7 = local_60;
    psVar6 = (size_t *)((long)local_60 + -0x18);
                    /* try { // try from 0059094c to 00690973 has its CatchHandler @ 0059241c */
    if ((*psVar6 != *(size_t *)((long)*(void **)(this_01 + 0x100) + -0x18)) ||
       (iVar4 = memcmp(local_60,*(void **)(this_01 + 0x100),*psVar6), iVar4 != 0)) {
      FUN_0066a6a8(this_01 + 0x100,&local_60);
      GUILabel::UpdateText(this_01);
      psVar6 = (size_t *)((long)local_60 + -0x18);
      pvVar7 = local_60;
    }
    if (psVar6 != (size_t *)PTR_DAT_007e5de8) {
      piVar5 = (int *)((long)pvVar7 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = *piVar5;
        *piVar5 = iVar4 + -1;
      }
      else {
        do {
          iVar4 = *piVar5;
                    /* try { // try from 005909d0 to 006909ff has its CatchHandler @ 00592860 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar4 < 1) {
        operator_delete(psVar6);
      }
    }
  }
  else {
    uStack_58 = _UNK_00696c98;
    local_60 = _DAT_00696c90;
    GUIView::SetFrame(*(GUIView **)(this + 0x130),(Rectangle *)&local_60);
                    /* try { // try from 005908a0 to 006908a3 has its CatchHandler @ 00592860 */
    this_00 = *(GUIView **)(this + 0x130);
                    /* try { // try from 005908a8 to 006908b3 has its CatchHandler @ 0059241c */
    __n = *(size_t *)((long)*(void **)param_1 + -0x18);
    if ((__n != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar4 = memcmp(*(void **)param_1,*(void **)(this_00 + 0x100),__n), iVar4 != 0)) {
      FUN_0066a6a8((GUILabel *)(this_00 + 0x100),param_1);
      GUILabel::UpdateText((GUILabel *)this_00);
      this_00 = *(GUIView **)(this + 0x130);
    }
    GUILabel::TextSize();
                    /* try { // try from 005908fc to 0069092b has its CatchHandler @ 005916c4 */
    local_60 = (void *)0x0;
    uStack_58 = CONCAT44((float)((ulong)local_70 >> 0x20) + (float)((ulong)_DAT_00683948 >> 0x20),
                         (float)local_70 + (float)_DAT_00683948);
    GUIView::SetFrame(this_00,(Rectangle *)&local_60);
  }
  UpdateLayout(this);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


