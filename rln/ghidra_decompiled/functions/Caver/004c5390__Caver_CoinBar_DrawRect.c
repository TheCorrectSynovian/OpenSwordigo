/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c5390
 * Function: Caver::CoinBar::DrawRect
 * Signature: undefined __thiscall DrawRect(CoinBar * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CoinBar::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::CoinBar::DrawRect
          (CoinBar *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined4 local_4c;
  long local_48;
  
                    /* try { // try from 004c53a8 to 005c53bb has its CatchHandler @ 004c5554 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004c53bc to 005c541f has its CatchHandler @ 004c5558 */
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,1);
  local_4c = 0xffffffff;
  RenderingContext::SetColor(param_1,(Color *)&local_4c);
  Sprite::Draw((Sprite *)(this + 0xf8),param_1);
                    /* try { // try from 004c542c to 005c5433 has its CatchHandler @ 004c5520 */
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
                    /* try { // try from 004c5434 to 005c5543 has its CatchHandler @ 004c528c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


