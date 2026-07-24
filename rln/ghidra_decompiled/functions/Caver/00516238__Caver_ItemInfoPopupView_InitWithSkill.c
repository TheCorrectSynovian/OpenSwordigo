/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00516238
 * Function: Caver::ItemInfoPopupView::InitWithSkill
 * Signature: undefined __thiscall InitWithSkill(ItemInfoPopupView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoPopupView::InitWithSkill(boost::shared_ptr<Caver::Skill> const&) */

void __thiscall Caver::ItemInfoPopupView::InitWithSkill(ItemInfoPopupView *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  long local_60;
  long local_58;
  long local_50;
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_0066a528(&local_60,*(undefined8 *)param_1);
  FUN_0035a030(&local_58,"ui_skill_",&local_60);
  FUN_0066a528(&local_50,&local_58);
  FUN_006677d4(&local_50,"_icon",5);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_50 + -8);
                    /* catch() { ... } // from try @ 0051638c with catch @ 0051639c */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
                    /* try { // try from 005163a0 to 006163a7 has its CatchHandler @ 005163b0 */
        iVar7 = *piVar6;
                    /* try { // try from 005163a8 to 006163b3 has its CatchHandler @ 00516360 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00516308 with catch @ 005162d8 */
  if ((undefined *)(local_58 + -0x18) != puVar4) {
                    /* try { // try from 005163b4 to 006163fb has its CatchHandler @ 005163b4
                       catch(type#1 @ 00000000) { ... } // from try @ 005163b4 with catch @ 005163b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00516418 with catch @ 005163b4
                       catch(type#1 @ 00000000) { ... } // from try @ 005164f8 with catch @ 005163b4
                        */
    piVar6 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  if ((undefined *)(local_60 + -0x18) != puVar4) {
    piVar6 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
                    /* try { // try from 005162f4 to 00616307 has its CatchHandler @ 0051632c */
  FUN_0066a528(&local_50,*(long *)param_1 + 8);
                    /* try { // try from 00516308 to 0061632f has its CatchHandler @ 005162d8 */
  FUN_0066a528(&local_58,*(long *)param_1 + 0x10);
  Init(this,(intrusive_ptr *)local_48,(string *)&local_50,(string *)&local_58);
                    /* catch() { ... } // from try @ 005162f4 with catch @ 0051632c */
  if ((undefined *)(local_58 + -0x18) != puVar4) {
                    /* try { // try from 005163fc to 00616417 has its CatchHandler @ 005164ec */
    piVar6 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00516418 to 006164ef has its CatchHandler @ 005163b4 */
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  if ((undefined *)(local_50 + -0x18) != puVar4) {
    piVar6 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if ((local_48[0] != (long *)0x0) &&
     (iVar7 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar7, iVar7 == 0)) {
                    /* catch() { ... } // from try @ 005163a8 with catch @ 00516360 */
    (**(code **)(*local_48[0] + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005163fc with catch @ 005164ec
                        */
    __stack_chk_fail();
  }
                    /* try { // try from 0051638c to 0061638f has its CatchHandler @ 0051639c */
  return;
}


