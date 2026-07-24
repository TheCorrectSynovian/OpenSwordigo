/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052a45c
 * Function: Caver::MenuItemSlot::DrawRect
 * Signature: undefined __thiscall DrawRect(MenuItemSlot * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MenuItemSlot::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::MenuItemSlot::DrawRect
          (MenuItemSlot *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  GUITexturedRect::Draw((GUITexturedRect *)(this + 0x128),param_1);
  GUITexturedRect::Draw((GUITexturedRect *)(this + 0x208),param_1);
  if (this[0x121] == (MenuItemSlot)0x0) {
    if (this[0x278] == (MenuItemSlot)0x0) {
      return;
    }
    fVar3 = sinf((float)((double)*(float *)(this + 0x27c) * _DAT_00694a00 + DAT_00688608));
    uVar2 = (uint)((fVar3 * 0.5 + 0.5) * DAT_00683ffc);
    if (0xfe < (int)uVar2) {
      uVar2 = 0xff;
    }
    uVar1 = uVar2 & 0xff;
    *(uint *)(this + 0x1b4) = uVar2 << 0x18 | uVar1 << 0x10 | uVar1 | uVar1 << 8;
  }
  else {
    *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  }
  GUITexturedRect::Draw((GUITexturedRect *)(this + 0x198),param_1);
  return;
}


