/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005950a4
 * Function: Caver::GUIButton::GUIButton
 * Signature: undefined __thiscall GUIButton(GUIButton * this, GUIButtonType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::GUIButton(Caver::GUIButtonType) */

void __thiscall Caver::GUIButton::GUIButton(GUIButton *this,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  GUIButton *pGVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined8 *)(this + 0x118) = 0;
  puVar3 = PTR_vtable_007e75d0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  puVar2 = PTR_identityMatrix_007e74c8;
  pGVar5 = this + 0xf8;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)pGVar5 = 0;
  *(undefined4 *)(this + 0x120) = 0;
  this[0x124] = (GUIButton)0x0;
  *(GUIButton **)(this + 0x108) = pGVar5;
  *(GUIButton **)(this + 0x110) = pGVar5;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  uVar6 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(this + 400) = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(this + 0x188) = uVar6;
  uVar6 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(this + 0x180) = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(this + 0x178) = uVar6;
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(this + 0x170) = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(this + 0x168) = uVar6;
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)(this + 0x160) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(this + 0x158) = uVar6;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  puVar2 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0xffffffff;
  *(undefined **)(this + 0x1c0) = puVar2 + 0x18;
  *(undefined8 *)(this + 0x1c8) = 0;
  SetButtonType(this,param_2);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


