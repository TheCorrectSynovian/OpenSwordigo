/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00597aa0
 * Function: Caver::GUILabel::DrawRect
 * Signature: undefined __thiscall DrawRect(GUILabel * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUILabel::DrawRect
          (GUILabel *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
                    /* catch() { ... } // from try @ 00597920 with catch @ 00597aa0
                       catch() { ... } // from try @ 00597a90 with catch @ 00597aa0 */
                    /* catch() { ... } // from try @ 00597ac0 with catch @ 00597aac */
  lVar1 = tpidr_el0;
                    /* try { // try from 00597abc to 00697abf has its CatchHandler @ 00597ad0 */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00597ac0 to 00697ae3 has its CatchHandler @ 00597aac */
                    /* catch() { ... } // from try @ 00597abc with catch @ 00597ad0 */
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  uStack_68 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  local_70 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_58 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  uStack_60 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  uStack_88 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  local_90 = *(undefined8 *)PTR_identityMatrix_007e74c8;
  uStack_78 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  uStack_80 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_90);
  FontText::Draw(*(FontText **)(this + 0x120),param_1);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


