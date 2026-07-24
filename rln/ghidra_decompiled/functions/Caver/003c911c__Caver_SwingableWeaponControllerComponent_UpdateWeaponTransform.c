/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c911c
 * Function: Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform
 * Signature: undefined __thiscall UpdateWeaponTransform(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform() */

void __thiscall
Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform
          (SwingableWeaponControllerComponent *this)

{
  long lVar1;
  long lVar2;
  float afStack_138 [16];
  float afStack_f8 [16];
  float afStack_b8 [16];
  Matrix4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xa0) == 0) {
    lVar2 = BoneForName(this,(string *)(this + 0x88));
    *(long *)(this + 0xa0) = lVar2;
    if (lVar2 == 0) goto LAB_003c91c0;
  }
  if (*(long *)(this + 0x98) != 0) {
    SceneObject::WorldMatrix();
    if (*(long *)(this + 0x80) == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    }
    ModelComponent::WorldMatrix();
    C_Matrix4Mul(afStack_b8,afStack_f8,afStack_138);
    C_Matrix4Mul(afStack_138,(float *)(*(long *)(this + 0xa0) + 0x5c),(float *)aMStack_78);
    SwingableWeaponComponent::UpdateTransform
              (*(SwingableWeaponComponent **)(this + 0x98),aMStack_78);
  }
LAB_003c91c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


