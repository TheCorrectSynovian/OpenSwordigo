/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00595bcc
 * Function: Caver::GUIButton::SetImage
 * Signature: undefined __thiscall SetImage(GUIButton * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::GUIButton::SetImage(GUIButton *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  GUITexturedRect *this_00;
  long *plVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)param_1 == 0) {
    plVar4 = *(long **)(this + 0x148);
    *(undefined8 *)(this + 0x148) = 0;
    if (plVar4 != (long *)0x0) {
      plVar3 = (long *)*plVar4;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      operator_delete(plVar4);
    }
  }
  else {
    this_00 = *(GUITexturedRect **)(this + 0x148);
    if (this_00 == (GUITexturedRect *)0x0) {
      this_00 = operator_new(0x70);
      GUITexturedRect::GUITexturedRect(this_00);
      plVar4 = *(long **)(this + 0x148);
      *(GUITexturedRect **)(this + 0x148) = this_00;
      if (plVar4 != (long *)0x0) {
        plVar3 = (long *)*plVar4;
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar3 + 8))();
        }
        operator_delete(plVar4);
        this_00 = *(GUITexturedRect **)(this + 0x148);
      }
    }
    local_50 = 0x3f0000003f000000;
    GUITexturedRect::InitWithTexture(this_00,param_1,(Vector2 *)&local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


