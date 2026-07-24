/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005202ec
 * Function: Caver::MapPopupView::MapPopupView
 * Signature: undefined __thiscall MapPopupView(MapPopupView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MapPopupView::MapPopupView() */

void __thiscall Caver::MapPopupView::MapPopupView(MapPopupView *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  string *psVar5;
  Sprite *pSVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_68 [8];
  long *local_60 [2];
  Sprite *local_50;
  long *aplStack_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  aplStack_48[0] = (long *)_UNK_006947c8;
  local_50 = _DAT_006947c0;
  *(undefined **)this = PTR_vtable_007e56b0 + 0x10;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  GUIView::SetBounds((GUIView *)this,(Rectangle *)&local_50);
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_50,"ui_notification_background",auStack_68);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
  if (local_50 + -0x18 != (Sprite *)PTR_DAT_007e5de8) {
    pSVar6 = local_50 + -8;
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
      operator_delete(local_50 + -0x18);
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
  local_50 = pSVar6;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)aplStack_48,pSVar6);
  boost::detail::sp_enable_shared_from_this(&local_50,pSVar6,pSVar6);
  pSVar6 = *(Sprite **)(this + 0xf0);
  plVar1 = *(long **)(this + 0xf8);
  *(Sprite **)(this + 0xf0) = local_50;
  *(long **)(this + 0xf8) = aplStack_48[0];
  local_50 = pSVar6;
  aplStack_48[0] = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar7 = plVar1[1], plVar1[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar7 = plVar1[2];
    plVar1[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  Sprite::Init(*(Sprite **)(this + 0xf0),(intrusive_ptr *)local_60,2,4,false);
  local_50 = (Sprite *)CONCAT44(local_50._4_4_,0xffffffff);
  Sprite::AddRectangle
            (*(Sprite **)(this + 0xf0),(Rectangle *)(this + 0x84),
             (Rectangle *)((long)local_60[0] + 0x5c),(Color *)&local_50);
  if ((local_60[0] != (long *)0x0) &&
     (iVar8 = (int)local_60[0][1] + -1, *(int *)(local_60[0] + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_60[0] + 8))();
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


