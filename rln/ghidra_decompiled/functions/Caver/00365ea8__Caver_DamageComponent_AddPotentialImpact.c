/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00365ea8
 * Function: Caver::DamageComponent::AddPotentialImpact
 * Signature: undefined __thiscall AddPotentialImpact(DamageComponent * this, intrusive_ptr * param_1, Vector2 * param_2, Vector2 * param_3, bool param_4, Vector4 * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::AddPotentialImpact(boost::intrusive_ptr<Caver::SceneObject> const&,
   Caver::Vector2 const&, Caver::Vector2 const&, bool, Caver::Vector4 const&) */

void __thiscall
Caver::DamageComponent::AddPotentialImpact
          (DamageComponent *this,intrusive_ptr *param_1,Vector2 *param_2,Vector2 *param_3,
          bool param_4,Vector4 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  DamageComponent *local_68;
  long *local_60;
  float local_58;
  float fStack_54;
  undefined8 local_50;
  float local_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_60 = *(long **)param_1;
  if (local_60 != (long *)0x0) {
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
  }
  local_58 = *(float *)param_2;
  fStack_54 = *(float *)(param_2 + 4);
  local_50 = *(undefined8 *)param_3;
  uStack_44 = 0;
  local_40 = 0;
  fVar4 = *(float *)(*(long *)(this + 0x28) + 0x70) - local_58;
  fVar5 = *(float *)(*(long *)(this + 0x28) + 0x74) - fStack_54;
  local_48 = fVar4 * fVar4 + fVar5 * fVar5;
  uStack_34 = *(undefined8 *)(param_5 + 8);
  local_3c = *(undefined8 *)param_5;
  local_68 = this;
  if (param_4) {
    if (this[0xd1] != (DamageComponent)0x0) {
      puVar1 = *(undefined8 **)(this + 0x90);
      if (puVar1 == *(undefined8 **)(this + 0x98)) {
        std::vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>>::_M_insert_aux
                  ((vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>> *)(this + 0x88),
                   puVar1,&local_68);
      }
      else {
        *puVar1 = this;
        puVar1[1] = local_60;
        if (local_60 != (long *)0x0) {
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        }
        *(float *)(puVar1 + 2) = local_58;
        *(float *)((long)puVar1 + 0x14) = fStack_54;
        puVar1[3] = local_50;
        *(undefined4 *)(puVar1 + 5) = 0;
        puVar1[4] = CONCAT26(uStack_42,(uint6)(uint)local_48);
        *(undefined8 *)((long)puVar1 + 0x34) = uStack_34;
        *(undefined8 *)((long)puVar1 + 0x2c) = local_3c;
        *(long *)(this + 0x90) = *(long *)(this + 0x90) + 0x40;
      }
    }
  }
  else {
    puVar1 = *(undefined8 **)(this + 0x78);
    if (puVar1 == *(undefined8 **)(this + 0x80)) {
      std::vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>>::_M_insert_aux
                ((vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>> *)(this + 0x70),
                 puVar1,&local_68);
    }
    else {
      *puVar1 = this;
      puVar1[1] = local_60;
      if (local_60 != (long *)0x0) {
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      }
      *(float *)(puVar1 + 2) = local_58;
      *(float *)((long)puVar1 + 0x14) = fStack_54;
      puVar1[3] = local_50;
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[4] = CONCAT26(uStack_42,(uint6)(uint)local_48);
      *(undefined8 *)((long)puVar1 + 0x34) = uStack_34;
      *(undefined8 *)((long)puVar1 + 0x2c) = local_3c;
      *(long *)(this + 0x78) = *(long *)(this + 0x78) + 0x40;
    }
  }
  if ((local_60 != (long *)0x0) &&
     (iVar2 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*local_60 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


