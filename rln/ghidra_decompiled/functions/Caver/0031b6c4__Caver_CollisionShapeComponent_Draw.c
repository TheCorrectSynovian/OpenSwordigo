/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031b6c4
 * Function: Caver::CollisionShapeComponent::Draw
 * Signature: undefined __thiscall Draw(CollisionShapeComponent * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) */

void __thiscall
Caver::CollisionShapeComponent::Draw
          (CollisionShapeComponent *this,RenderingContext *param_1,Matrix4 *param_2)

{
  long lVar1;
  float fVar2;
  float afStack_c8 [16];
  Matrix4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x128))();
  if (*(int *)(this + 0x108) != 0) {
    if (*PTR_drawDepth_007e6018 == '\0') {
      fVar2 = 0.0;
    }
    else {
      WorldMatrix(*(float *)(this + 0x13c));
      C_Matrix4Mul((float *)param_2,afStack_c8,(float *)aMStack_88);
      ShapeComponent::DrawShape((ShapeComponent *)this,param_1,(Shape *)(this + 0x108),aMStack_88);
      fVar2 = *(float *)(this + 0x140);
    }
    WorldMatrix(fVar2);
    C_Matrix4Mul((float *)param_2,afStack_c8,(float *)aMStack_88);
    ShapeComponent::DrawShape((ShapeComponent *)this,param_1,(Shape *)(this + 0x108),aMStack_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


