/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00597274
 * Function: Caver::GUIFrameView::SetFrameTexture
 * Signature: undefined __thiscall SetFrameTexture(GUIFrameView * this, intrusive_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&, bool) */

void __thiscall
Caver::GUIFrameView::SetFrameTexture(GUIFrameView *this,intrusive_ptr *param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  GUITexturedRect *this_00;
  GUIRoundedRect *this_01;
  long lVar4;
  long *plVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  GUIFrameView local_50;
  GUIFrameView local_4f;
  GUIFrameView local_4e;
  GUIFrameView local_4d;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)param_1 != *(long *)(this + 0x100)) {
    plVar5 = *(long **)(this + 0xf8);
    *(undefined8 *)(this + 0xf8) = 0;
    if (plVar5 != (long *)0x0) {
      if ((void *)plVar5[0x11] != (void *)0x0) {
        operator_delete__((void *)plVar5[0x11]);
      }
      if ((void *)plVar5[0xe] != (void *)0x0) {
        operator_delete__((void *)plVar5[0xe]);
      }
      plVar3 = (long *)plVar5[10];
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = (long *)*plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      operator_delete(plVar5);
    }
    plVar5 = *(long **)(this + 0xf0);
    *(undefined8 *)(this + 0xf0) = 0;
    if (plVar5 != (long *)0x0) {
      plVar3 = (long *)*plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      operator_delete(plVar5);
    }
    lVar4 = *(long *)param_1;
    if (lVar4 != 0) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    plVar5 = *(long **)(this + 0x100);
    *(long *)(this + 0x100) = lVar4;
    if ((plVar5 == (long *)0x0) ||
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 != 0)) {
      lVar4 = *(long *)param_1;
    }
    else {
      (**(code **)(*plVar5 + 8))();
      lVar4 = *(long *)param_1;
    }
    if (lVar4 != 0) {
      if (param_2) {
        this_00 = operator_new(0x70);
        GUITexturedRect::GUITexturedRect(this_00);
        plVar5 = *(long **)(this + 0xf0);
        *(GUITexturedRect **)(this + 0xf0) = this_00;
        if (plVar5 != (long *)0x0) {
          plVar3 = (long *)*plVar5;
          if ((plVar3 != (long *)0x0) &&
             (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 005973d4 to 00697477 has its CatchHandler @ 005973d4
                       catch(type#1 @ 00000000) { ... } // from try @ 005973d4 with catch @ 005973d4
                       catch(type#1 @ 00000000) { ... } // from try @ 0059748c with catch @ 005973d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00597568 with catch @ 005973d4
                        */
            (**(code **)(*plVar3 + 8))();
          }
          operator_delete(plVar5);
          this_00 = *(GUITexturedRect **)(this + 0xf0);
        }
        local_60 = 0;
        uStack_58 = 0;
        GUITexturedRect::InitWithTexture(this_00,param_1,(Rectangle *)&local_60,false);
        *(undefined4 *)(*(long *)(this + 0xf0) + 0x1c) = *(undefined4 *)(this + 0xe9);
      }
      else {
        this_01 = operator_new(0xa8);
        GUIRoundedRect::GUIRoundedRect(this_01);
        plVar5 = *(long **)(this + 0xf8);
        *(GUIRoundedRect **)(this + 0xf8) = this_01;
        if (plVar5 != (long *)0x0) {
          if ((void *)plVar5[0x11] != (void *)0x0) {
            operator_delete__((void *)plVar5[0x11]);
          }
          if ((void *)plVar5[0xe] != (void *)0x0) {
            operator_delete__((void *)plVar5[0xe]);
          }
          plVar3 = (long *)plVar5[10];
          if ((plVar3 != (long *)0x0) &&
             (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*plVar3 + 8))();
          }
          plVar3 = (long *)*plVar5;
                    /* try { // try from 00597478 to 0069748b has its CatchHandler @ 0059751c */
          if ((plVar3 != (long *)0x0) &&
             (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*plVar3 + 8))();
          }
                    /* try { // try from 0059748c to 0069753f has its CatchHandler @ 005973d4 */
          operator_delete(plVar5);
          this_01 = *(GUIRoundedRect **)(this + 0xf8);
        }
        GUIRoundedRect::InitWithTexture(this_01,param_1);
        local_50 = this[0xe9];
        local_4f = this[0xea];
        local_4e = this[0xeb];
        local_4d = this[0xec];
        GUIRoundedRect::SetColor(*(GUIRoundedRect **)(this + 0xf8),&local_50);
      }
      if (DAT_00683734 < *(float *)(this + 0x8c)) {
        (**(code **)(*(long *)this + 0x58))(this);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00597478 with catch @ 0059751c
                        */
  return;
}


