/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b9cb0
 * Function: Caver::GUITextFieldImpl::DrawRect
 * Signature: undefined __thiscall DrawRect(GUITextFieldImpl * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::GUITextFieldImpl::DrawRect
          (GUITextFieldImpl *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined4 local_58 [4];
  float local_48 [2];
  undefined4 local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  if (this[0x199] == (GUITextFieldImpl)0x0) goto LAB_005b9d94;
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  GUILabel::BoundsForCharacterAtIndex
            (*(GUILabel **)(this + 0x148),*(int *)(*(long *)(this + 0x188) + -0x18));
  GUIView::ConvertRectFromView((Rectangle *)this,(GUIView *)local_58);
  iVar2 = (int)*(long *)(*(long *)(this + 0x188) + -0x18);
  if (iVar2 == 0) {
    fVar3 = -2.0;
LAB_005b9d50:
    local_48[0] = fVar3 + local_48[0];
  }
  else if (*(long *)(*(long *)(this + 0x188) + -0x18) == (long)iVar2) {
    fVar3 = 2.0;
    goto LAB_005b9d50;
  }
  local_40 = 0x40400000;
  local_3c = local_3c + 2.0;
  local_58[0] = 0xff3bb0fb;
  RenderingContext::FillRect(param_1,(Rectangle *)local_48,(Color *)local_58,0.0);
LAB_005b9d94:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


