/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00525ea0
 * Function: Caver::MapView::DrawRect
 * Signature: undefined __thiscall DrawRect(MapView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::MapView::DrawRect
          (MapView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,3);
  Sprite::Draw((Sprite *)(this + 0x1e0),param_1);
  Sprite::Draw((Sprite *)(this + 0x130),param_1);
  Sprite::Draw((Sprite *)(this + 0x188),param_1);
  RenderingContext::UseProgram(param_1,1);
  local_4c = 0xffffffff;
  RenderingContext::SetColor(param_1,(Color *)&local_4c);
  Sprite::Draw((Sprite *)(this + 0x2f0),param_1);
  RenderingContext::UseProgram(param_1,3);
  Sprite::Draw((Sprite *)(this + 0x238),param_1);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


