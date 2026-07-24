/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035fef8
 * Function: Caver::CharControllerComponent::TargetPickupObjectPosition
 * Signature: undefined __cdecl TargetPickupObjectPosition(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharControllerComponent::TargetPickupObjectPosition() */

void Caver::CharControllerComponent::TargetPickupObjectPosition(void)

{
  int iVar1;
  long lVar2;
  Component *in_x0;
  long lVar3;
  long *plVar4;
  undefined8 *in_x8;
  Component *pCVar5;
  undefined8 local_1c0;
  Vector3 aVStack_1b8 [16];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float afStack_188 [16];
  float afStack_148 [16];
  Vector4 aVStack_108 [64];
  float afStack_c8 [16];
  float afStack_88 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_198 = _UNK_00687928;
  local_1a0 = _DAT_00687920;
  SceneObject::WorldMatrix();
  pCVar5 = *(Component **)(in_x0 + 400);
  if (pCVar5 == (Component *)0x0) {
    pCVar5 = *(Component **)(in_x0 + 0x98);
    if (pCVar5 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0x88),in_x0);
      pCVar5 = *(Component **)(in_x0 + 0x98);
      if (pCVar5 != (Component *)0x0) goto LAB_0036005c;
    }
    else {
LAB_0036005c:
      *(int *)(pCVar5 + 8) = *(int *)(pCVar5 + 8) + 1;
    }
    plVar4 = *(long **)(in_x0 + 400);
    *(Component **)(in_x0 + 400) = pCVar5;
    if ((plVar4 != (long *)0x0) &&
       (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar4 + 8))();
      pCVar5 = *(Component **)(in_x0 + 400);
      lVar3 = *(long *)(pCVar5 + 0x80);
      goto joined_r0x00360098;
    }
  }
  lVar3 = *(long *)(pCVar5 + 0x80);
joined_r0x00360098:
  if (lVar3 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar5 + 0x70),pCVar5);
  }
  ModelComponent::WorldMatrix();
  C_Matrix4Mul(afStack_c8,(float *)aVStack_108,afStack_88);
  C_Matrix4Mul(afStack_88,(float *)(*(long *)(in_x0 + 0x2c0) + 0x5c),afStack_148);
  C_Matrix4Vector4Mul(afStack_148,(float *)&local_1a0,(float *)aVStack_108);
  Vector3::Vector3(aVStack_1b8,aVStack_108);
  Vector2::Vector2((Vector2 *)&local_1a8,aVStack_1b8);
  C_Matrix4Mul(afStack_88,(float *)(*(long *)(in_x0 + 0x2c8) + 0x5c),afStack_188);
  C_Matrix4Vector4Mul(afStack_188,(float *)&local_1a0,(float *)aVStack_108);
  Vector3::Vector3(aVStack_1b8,aVStack_108);
  Vector2::Vector2((Vector2 *)&local_1c0,aVStack_1b8);
  *in_x8 = CONCAT44(((float)((ulong)local_1a8 >> 0x20) + (float)((ulong)local_1c0 >> 0x20)) * 0.5 +
                    0.0 + (float)((ulong)*(undefined8 *)(in_x0 + 0x2dc) >> 0x20),
                    ((float)local_1a8 + (float)local_1c0) * 0.5 + 0.0 +
                    (float)*(undefined8 *)(in_x0 + 0x2dc));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


