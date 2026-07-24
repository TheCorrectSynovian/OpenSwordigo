/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aa4b0
 * Function: Caver::GUITextBubble::SetShowsIndicatorWhenFinished
 * Signature: undefined __thiscall SetShowsIndicatorWhenFinished(GUITextBubble * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::SetShowsIndicatorWhenFinished(bool) */

void __thiscall
Caver::GUITextBubble::SetShowsIndicatorWhenFinished(GUITextBubble *this,bool param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  string *psVar5;
  Sprite *pSVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  Sprite *local_48;
  long *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((((GUITextBubble)param_1 != this[0x90]) && (this[0x90] = (GUITextBubble)param_1, param_1)) &&
     (*(long *)(this + 0x50) == 0)) {
    psVar5 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_48,"textbubble_indicator",auStack_60);
    TextureLibrary::TextureForName(psVar5,SUB81(&local_48,0));
    if (local_48 + -0x18 != (Sprite *)PTR_DAT_007e5de8) {
      pSVar6 = local_48 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)pSVar6;
        *(int *)pSVar6 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)pSVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pSVar6,0x10);
          if (bVar3) {
            *(int *)pSVar6 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_48 + -0x18);
      }
    }
    pSVar6 = operator_new(0x58);
    *(undefined4 *)(pSVar6 + 0x30) = 0;
    pSVar6[0x50] = (Sprite)0x0;
    *(undefined8 *)(pSVar6 + 0x38) = 0;
    *(undefined8 *)(pSVar6 + 0x18) = 0;
    *(undefined8 *)(pSVar6 + 0x10) = 0;
    *(undefined8 *)(pSVar6 + 0x28) = 0;
    *(undefined8 *)(pSVar6 + 0x20) = 0;
    *(undefined8 *)(pSVar6 + 8) = 0;
    *(undefined8 *)pSVar6 = 0;
    *(undefined8 *)(pSVar6 + 0x48) = 0;
    *(undefined8 *)(pSVar6 + 0x40) = 0;
    local_48 = pSVar6;
    boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&local_40,pSVar6);
    boost::detail::sp_enable_shared_from_this(&local_48,pSVar6,pSVar6);
    pSVar6 = *(Sprite **)(this + 0x50);
    plVar1 = *(long **)(this + 0x58);
                    /* try { // try from 005aa5b4 to 006aa5b7 has its CatchHandler @ 005aa7e4 */
    *(Sprite **)(this + 0x50) = local_48;
    *(long **)(this + 0x58) = local_40;
    if ((plVar1 != (long *)0x0) && (lVar7 = plVar1[1], plVar1[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      local_48 = pSVar6;
      local_40 = plVar1;
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar7 = plVar1[2];
      plVar1[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
                    /* try { // try from 005aa60c to 006aa61f has its CatchHandler @ 005aa7e0 */
    local_40 = *(long **)((long)local_58[0] + 0x54);
    local_48 = (Sprite *)0x0;
                    /* try { // try from 005aa620 to 006aa6cb has its CatchHandler @ 005aa3b4 */
    Sprite::InitWithTexture
              (*(Sprite **)(this + 0x50),(intrusive_ptr *)local_58,(Rectangle *)&local_48);
    this[0x20] = (GUITextBubble)0x1;
    if ((local_58[0] != (long *)0x0) &&
       (iVar8 = (int)local_58[0][1] + -1, *(int *)(local_58[0] + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*local_58[0] + 8))();
    }
  }
                    /* try { // try from 005aa4f4 to 006aa507 has its CatchHandler @ 005aa834 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005aa508 to 006aa5b3 has its CatchHandler @ 005aa3b4 */
  return;
}


