/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00335720
 * Function: Caver::ShadowComponent::UpdateShadowBounds
 * Signature: undefined __thiscall UpdateShadowBounds(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::UpdateShadowBounds() */

void __thiscall Caver::ShadowComponent::UpdateShadowBounds(ShadowComponent *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Matrix4 aMStack_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x70) + 0xe0))(aMStack_98);
  SceneObject::WorldMatrix();
  Rectangle::TransformedRectangle(aMStack_98);
  *(undefined8 *)(this + 0x98) = uStack_80;
  *(undefined8 *)(this + 0x90) = local_88;
  fVar3 = *(float *)(*(long *)(this + 0x28) + 0x78);
  fVar2 = (float)(**(code **)(**(long **)(this + 0x70) + 0xe8))();
  *(float *)(this + 0xa0) = fVar3 + fVar2 * *(float *)(*(long *)(this + 0x28) + 0x8c);
  fVar4 = *(float *)(*(long *)(this + 0x28) + 0x78);
  fVar2 = (float)(**(code **)(**(long **)(this + 0x70) + 0xf0))();
  fVar3 = *(float *)(*(long *)(this + 0x28) + 0x8c);
  *(float *)(this + 0xb0) = *(float *)(this + 0x94) - *(float *)(this + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(this + 0x98);
  *(float *)(this + 0xb8) = *(float *)(this + 0xa8) + *(float *)(this + 0x9c) * 0.5;
  *(float *)(this + 0xa4) = fVar4 + fVar2 * fVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


