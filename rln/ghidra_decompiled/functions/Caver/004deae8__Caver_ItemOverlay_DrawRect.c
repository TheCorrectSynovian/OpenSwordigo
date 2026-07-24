/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004deae8
 * Function: Caver::ItemOverlay::DrawRect
 * Signature: undefined __thiscall DrawRect(ItemOverlay * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemOverlay::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::ItemOverlay::DrawRect
          (ItemOverlay *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  if (*(long *)(this + 0x108) != *(long *)(this + 0x110)) {
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
    RenderingContext::SetIdentityMatrix(param_1);
    RenderingContext::SetBlendingEnabled(param_1,true);
    RenderingContext::SetDefaultBlendFunc(param_1);
    RenderingContext::UseProgram(param_1,3);
    Sprite::Draw((Sprite *)(this + 0x150),param_1);
    RenderingContext::SetBlendFunc(param_1,0x302,0x303);
    Sprite::Draw((Sprite *)(this + 0x1a8),param_1);
    return;
  }
  return;
}


