/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366470
 * Function: Caver::DamageComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(DamageComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::DamageComponent::HandleMessage(DamageComponent *this,int param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Vector2 *pVVar4;
  CollisionShapeComponent *this_00;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 local_58;
  Vector2 aVStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((param_1 == 7) && (this[0xd0] != (DamageComponent)0x0)) &&
     (*(char *)(*(long *)param_2 + 0x17d) != '\0')) {
    this_00 = *(CollisionShapeComponent **)((long)param_2 + 8);
    uVar6 = *(undefined8 *)((long)param_2 + 0x28);
    if (this_00[0x17c] == (CollisionShapeComponent)0x0) {
      if ((*(char *)((long)param_2 + 0x34) == '\0') || (*(int *)(this_00 + 0x180) != 6))
      goto LAB_003664ec;
    }
    else if (*(char *)((long)param_2 + 0x34) == '\0') goto LAB_003664ec;
    if (((*(long *)(*(long *)(this + 0x28) + 0x30) == 0) &&
        (lVar3 = SceneObject::ComponentWithInterface
                           (*(SceneObject **)(this_00 + 0x28),(long)PTR_Interface_007e7450),
        this[0xbc] != (DamageComponent)0x0)) &&
       ((lVar3 == 0 || (*(int *)(this + 0xb4) != *(int *)(lVar3 + 0x88))))) {
      pVVar4 = (Vector2 *)CollisionShapeComponent::collisionShape(this_00);
      CollisionShape::NearestPointInShape(pVVar4);
      local_58 = CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
      plVar5 = *(long **)(this_00 + 0x28);
      if (plVar5 != (long *)0x0) {
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      }
      local_70 = 0;
      uStack_68 = 0;
      local_60 = plVar5;
      AddPotentialImpact(this,(intrusive_ptr *)&local_60,aVStack_50,(Vector2 *)&local_58,
                         *(int *)(this_00 + 0x180) == 6,(Vector4 *)&local_70);
      if ((plVar5 != (long *)0x0) &&
         (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
LAB_003664ec:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


