/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00388320
 * Function: Caver::MagicExplosionComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(MagicExplosionComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::MagicExplosionComponent::HandleMessage
          (MagicExplosionComponent *this,int param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  DamageComponent *this_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0xd) {
    if (*(SceneObject **)(this + 0x180) != (SceneObject *)0x0) {
      SceneObject::HandleMessage(*(SceneObject **)(this + 0x180),0xd,param_2);
    }
  }
  else if (param_1 == 7) {
    if (((((*(char *)((long)param_2 + 0x34) != '\0') &&
          (*(char *)(*(long *)param_2 + 0x17d) != '\0')) &&
         (*(char *)(*(long *)((long)param_2 + 8) + 0x17c) != '\0')) &&
        ((this_00 = *(DamageComponent **)(this + 0xa0), this_00 != (DamageComponent *)0x0 &&
         (*(int *)(this_00 + 0xb8) == 2)))) && (this_00[0xbc] != (DamageComponent)0x0)) {
      local_40 = *(long **)(*(long *)((long)param_2 + 8) + 0x28);
      if (local_40 != (long *)0x0) {
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      }
      lVar3 = *(long *)(this + 0x28);
      uVar4 = *(undefined8 *)(lVar3 + 0x70);
      local_48 = CONCAT44((float)((ulong)local_40[0xe] >> 0x20) - (float)((ulong)uVar4 >> 0x20),
                          (float)local_40[0xe] - (float)uVar4);
      Vector2::Normalize((Vector2 *)&local_48);
      local_58 = 0;
      uStack_50 = 0;
      DamageComponent::AddPotentialImpact
                (this_00,(intrusive_ptr *)&local_40,(Vector2 *)(lVar3 + 0x70),(Vector2 *)&local_48,
                 false,(Vector4 *)&local_58);
      if ((local_40 != (long *)0x0) &&
         (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*local_40 + 8))();
      }
    }
  }
  else if (param_1 == 6) {
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


