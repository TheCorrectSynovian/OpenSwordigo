/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038ef00
 * Function: Caver::SkillComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::Update(float) */

void Caver::SkillComponent::Update(float param_1)

{
  long lVar1;
  float fVar2;
  long in_x0;
  Vector2 *pVVar3;
  long lVar4;
  long lVar5;
  SceneObject *pSVar6;
  float local_50;
  float local_4c;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pSVar6 = *(SceneObject **)(in_x0 + 0xb0);
  if (pSVar6 != (SceneObject *)0x0) {
    SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(in_x0 + 0x28));
    fVar2 = DAT_00683488;
    param_1 = local_50;
    if ((DAT_00683488 < ABS(local_50 - *(float *)(pSVar6 + 0x70))) ||
       (DAT_00683488 < ABS(local_4c - *(float *)(pSVar6 + 0x74)))) {
      *(float *)(pSVar6 + 0x70) = local_50;
      *(float *)(pSVar6 + 0x74) = local_4c;
      if (pSVar6[0xb4] == (SceneObject)0x0) {
        param_1 = (float)SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
        pSVar6[0xb4] = (SceneObject)0x1;
      }
    }
    pVVar3 = *(Vector2 **)(in_x0 + 0x28);
    lVar5 = *(long *)(in_x0 + 0xb0);
    *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)(pVVar3 + 0x78);
    *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(pVVar3 + 0x68);
    pSVar6 = *(SceneObject **)(in_x0 + 0xc0);
    if (pSVar6 != (SceneObject *)0x0) {
      SceneObject::WorldPointFromLocalPoint(pVVar3);
      if ((fVar2 < ABS(local_50 - *(float *)(pSVar6 + 0x70))) ||
         (fVar2 < ABS(local_4c - *(float *)(pSVar6 + 0x74)))) {
        *(float *)(pSVar6 + 0x70) = local_50;
        *(float *)(pSVar6 + 0x74) = local_4c;
        if (pSVar6[0xb4] == (SceneObject)0x0) {
          local_50 = (float)SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
          pSVar6[0xb4] = (SceneObject)0x1;
        }
      }
      *(undefined4 *)(*(long *)(in_x0 + 0xc0) + 0x78) =
           *(undefined4 *)(*(long *)(in_x0 + 0x28) + 0x78);
      param_1 = local_50;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


