/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e0734
 * Function: Caver::OverlayButton::DrawRect
 * Signature: undefined __thiscall DrawRect(OverlayButton * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayButton::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::OverlayButton::DrawRect
          (OverlayButton *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  OverlayButton OVar1;
  OverlayButton OVar2;
  OverlayButton OVar3;
  OverlayButton OVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  OverlayButton local_80;
  OverlayButton local_7f;
  OverlayButton local_7e;
  OverlayButton local_7d;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  GUIButton::DrawRect((GUIButton *)this,param_1,param_2,param_3);
  if ((this[0x1d8] != (OverlayButton)0x0) || (DAT_00683944 < *(float *)(this + 0x1dc))) {
    fVar10 = *(float *)(this + 0x1d4);
    OVar1 = this[0x1bc];
    OVar2 = this[0x1bd];
    OVar3 = this[0x1be];
    OVar4 = this[0x1bf];
    if (fVar10 <= 0.5) {
      fVar10 = ((0.5 - fVar10) + (0.5 - fVar10)) * 0.75;
      iVar9 = (int)(fVar10 * 0.0);
      iVar7 = (int)(fVar10 * DAT_00683ffc);
      if (0xfe < iVar7) {
        iVar7 = 0xff;
      }
      if (0xfe < iVar9) {
        iVar9 = -1;
      }
      puVar6 = &local_78;
      local_78 = (undefined1)iVar9;
      local_75 = (undefined1)iVar7;
      local_77 = local_78;
      local_76 = local_78;
    }
    else {
      fVar10 = fVar10 + -0.5 + fVar10 + -0.5;
      iVar7 = (int)(fVar10 * 0.0);
      iVar9 = (int)(fVar10 * DAT_00690224);
      if (0xfe < iVar7) {
        iVar7 = 0xff;
      }
      if (0xfe < iVar9) {
        iVar9 = -1;
      }
      local_70 = (undefined1)iVar9;
      local_6d = (undefined1)iVar7;
      puVar6 = &local_70;
      local_6f = local_70;
      local_6e = local_70;
    }
    GUIButton::SetTintColor((GUIButton *)this,puVar6);
    lVar8 = *(long *)(this + 0x1e0);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0xe4) != '\0')) {
      GUIButton::DrawRect((GUIButton *)this,param_1,param_2,param_3);
    }
    else {
      *(undefined1 *)(lVar8 + 0xe4) = 1;
      GUIButton::DrawRect((GUIButton *)this,param_1,param_2,param_3);
      *(undefined1 *)(*(long *)(this + 0x1e0) + 0xe4) = 0;
    }
    local_80 = OVar1;
    local_7f = OVar2;
    local_7e = OVar3;
    local_7d = OVar4;
    GUIButton::SetTintColor((GUIButton *)this,&local_80);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


