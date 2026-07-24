/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ae884
 * Function: Caver::PortalEffectComponent::Draw
 * Signature: undefined __cdecl Draw(RenderingContext * param_1, Matrix4 * param_2, Vector3 * param_3, Vector3 * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&,
   Caver::Vector3 const&, Caver::Vector3 const&) */

void Caver::PortalEffectComponent::Draw
               (RenderingContext *param_1,Matrix4 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  long lVar2;
  float afStack_b8 [16];
  Matrix4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0xd8) == 0) {
    CreateVertices((PortalEffectComponent *)param_1);
  }
  SceneObject::WorldMatrix();
  C_Matrix4Mul((float *)param_3,afStack_b8,(float *)aMStack_78);
  RenderingContext::SetMatrix((RenderingContext *)param_2,aMStack_78);
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(param_1 + 0xa0),(Component *)param_1);
    lVar2 = *(long *)(param_1 + 0xb0);
    if (lVar2 == 0) goto LAB_003ae910;
  }
  RenderingContext::BindTexture((RenderingContext *)param_2,*(Texture **)(lVar2 + 0x78));
LAB_003ae910:
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8074,3,0x1406,0x20,*(undefined8 *)(param_1 + 0xe0));
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8078,2,0x1406,0x20,*(long *)(param_1 + 0xe0) + 0xc);
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8076,4,0x1401,0x20,*(long *)(param_1 + 0xe0) + 0x14);
  RenderingContext::SetAlpha
            ((RenderingContext *)param_2,*(float *)(*(long *)(param_1 + 0x28) + 0x8c));
  RenderingContext::DrawElements
            ((RenderingContext *)param_2,4,*(undefined4 *)(param_1 + 0xe8),0x1403,
             *(undefined8 *)(param_1 + 0xf0));
  RenderingContext::SetAlpha((RenderingContext *)param_2,1.0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


