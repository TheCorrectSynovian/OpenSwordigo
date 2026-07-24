/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d72e4
 * Function: Caver::GameOverlayView::SetSubviewLayout
 * Signature: undefined __thiscall SetSubviewLayout(GameOverlayView * this, GUIView * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView*, boost::shared_ptr<Caver::GUIViewLayout>
   const&) */

void __thiscall
Caver::GameOverlayView::SetSubviewLayout(GameOverlayView *this,GUIView *param_1,shared_ptr *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long local_d8 [3];
  Rectangle aRStack_c0 [16];
  GUIViewLayout aGStack_b0 [100];
  undefined8 local_4c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(GUIViewLayout **)param_2 != (GUIViewLayout *)0x0) {
    GUIViewLayout::GUIViewLayout(aGStack_b0,*(GUIViewLayout **)param_2);
    local_4c = *(undefined8 *)(param_1 + 0x7c);
    FUN_0066a528(local_d8,*(undefined8 *)param_2);
    LayoutBoundsForSubview(this,(string *)local_d8);
    GUIViewLayout::FrameForViewInBounds((Rectangle *)aGStack_b0);
    GUIView::SetFrame(param_1,aRStack_c0);
    if ((undefined *)(local_d8[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar4 = (int *)(local_d8[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar4;
        *piVar4 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_d8[0] + -0x18));
      }
    }
    GUIViewLayout::~GUIViewLayout(aGStack_b0);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


