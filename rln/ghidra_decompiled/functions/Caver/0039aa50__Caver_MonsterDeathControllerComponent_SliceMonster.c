/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039aa50
 * Function: Caver::MonsterDeathControllerComponent::SliceMonster
 * Signature: undefined __thiscall SliceMonster(MonsterDeathControllerComponent * this, intrusive_ptr * param_1, Vector4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::SliceMonster(boost::intrusive_ptr<Caver::SceneObject>
   const&, Caver::Vector4 const&) */

void __thiscall
Caver::MonsterDeathControllerComponent::SliceMonster
          (MonsterDeathControllerComponent *this,intrusive_ptr *param_1,Vector4 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  Model *pMVar5;
  MeshClipper *this_00;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_178;
  long *local_170;
  long local_168;
  float local_160;
  undefined4 uStack_15c;
  MeshClipper *local_158;
  Model *local_150;
  long *local_148;
  Model *local_140;
  long *local_138;
  MeshClipper *local_130;
  undefined8 local_128;
  float local_120;
  float fStack_11c;
  float afStack_e8 [16];
  Matrix4 aMStack_a8 [56];
  float local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  KillMonster(this,param_1);
  plVar4 = (long *)SceneObject::ComponentWithInterface
                             (*(SceneObject **)param_1,(long)PTR_Interface_007e7860);
  if (plVar4 == (long *)0x0) {
LAB_0039af1c:
    if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pMVar5 = operator_new(0x30);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined8 *)(pMVar5 + 0x20) = 0;
  *(undefined8 *)(pMVar5 + 0x28) = 0;
  *(undefined8 *)(pMVar5 + 0x10) = 0;
  *(undefined8 *)(pMVar5 + 0x18) = 0;
  *(undefined **)pMVar5 = puVar1;
  *(undefined8 *)(pMVar5 + 8) = 0;
  local_140 = pMVar5;
  boost::detail::shared_count::shared_count<Caver::Model>((shared_count *)&local_138,pMVar5);
  boost::detail::sp_enable_shared_from_this(&local_140,pMVar5,pMVar5);
  pMVar5 = operator_new(0x30);
  *(undefined8 *)(pMVar5 + 0x20) = 0;
  *(undefined8 *)(pMVar5 + 0x28) = 0;
  *(undefined8 *)(pMVar5 + 0x10) = 0;
  *(undefined8 *)(pMVar5 + 0x18) = 0;
  *(undefined **)pMVar5 = puVar1;
  *(undefined8 *)(pMVar5 + 8) = 0;
  local_150 = pMVar5;
  boost::detail::shared_count::shared_count<Caver::Model>((shared_count *)&local_148,pMVar5);
  boost::detail::sp_enable_shared_from_this(&local_150,pMVar5,pMVar5);
  SceneObject::WorldMatrix();
  ModelComponent::WorldMatrix();
  C_Matrix4Mul(afStack_e8,(float *)&local_128,(float *)aMStack_a8);
  local_128 = CONCAT44(-SUB84(aMStack_a8._48_8_,4),-(float)aMStack_a8._48_8_);
  local_120 = -local_70;
  Matrix4::PreTranslate(aMStack_a8,(Vector3 *)&local_128);
  local_128 = *(undefined8 *)param_2;
  fVar14 = *(float *)(param_2 + 8);
  lVar9 = 0;
  fVar12 = (float)local_128;
  fVar13 = (float)((ulong)local_128 >> 0x20);
  lVar10 = 0;
  fStack_11c = *(float *)(param_2 + 0xc) -
               ((float)aMStack_a8._48_8_ * fVar12 + SUB84(aMStack_a8._48_8_,4) * fVar13 +
               local_70 * fVar14);
  plVar6 = (long *)plVar4[0x11];
  local_120 = fVar14;
  if (plVar6 != (long *)0x0) goto LAB_0039abfc;
LAB_0039abbc:
  (**(code **)(*plVar4 + 0x40))(plVar4);
  lVar7 = *(long *)plVar4[0x11];
  plVar6 = (long *)((long *)plVar4[0x11])[1];
  if (plVar6 != (long *)0x0) goto LAB_0039ac04;
  do {
    uVar11 = *(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8);
    while( true ) {
      if ((int)(uVar11 >> 4) <= lVar10) {
        local_160 = fVar14 * DAT_00689170;
        local_168 = CONCAT44(fVar13 * -300.0,fVar12 * -300.0);
        CreateSliceObject(this,(shared_ptr *)&local_150,(Vector3 *)&local_168);
        local_160 = fVar14 * DAT_0068797c;
        local_168 = CONCAT44(fVar13 * 300.0,fVar12 * 300.0);
        CreateSliceObject(this,(shared_ptr *)&local_140,(Vector3 *)&local_168);
        if ((local_148 != (long *)0x0) &&
           (lVar10 = local_148[1], local_148[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*local_148 + 0x10))(local_148);
          lVar10 = local_148[2];
          local_148[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*local_148 + 0x18))(local_148);
          }
        }
        if ((local_138 != (long *)0x0) &&
           (lVar10 = local_138[1], local_138[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*local_138 + 0x10))(local_138);
          lVar10 = local_138[2];
          local_138[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*local_138 + 0x18))(local_138);
          }
        }
        goto LAB_0039af1c;
      }
      this_00 = operator_new(0xc0);
      MeshClipper::MeshClipper(this_00);
      lVar7 = plVar4[0x11];
      local_158 = this_00;
      if (lVar7 == 0) {
        (**(code **)(*plVar4 + 0x40))(plVar4);
        lVar7 = plVar4[0x11];
      }
      MeshClipper::InitWithMeshInstance
                (this_00,*(MeshInstance **)(*(long *)(lVar7 + 0x28) + lVar9),aMStack_a8);
      MeshClipper::ClipWithPlane(local_158,(Vector4 *)&local_128);
      MeshClipper::ClippedMesh((int)local_158);
      MeshClipper::ClippedMesh((int)local_158);
      if (local_168 != 0) {
        plVar6 = *(long **)(local_140 + 0x10);
        if (plVar6 == *(long **)(local_140 + 0x18)) {
          std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>
          ::_M_insert_aux((vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>
                           *)(local_140 + 8),plVar6,&local_168);
        }
        else {
          *plVar6 = local_168;
          lVar7 = CONCAT44(uStack_15c,local_160);
          plVar6[1] = lVar7;
          if (lVar7 != 0) {
            *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
          }
          *(long **)(local_140 + 0x10) = plVar6 + 2;
        }
      }
      if (local_178 != 0) {
        plVar6 = *(long **)(local_150 + 0x10);
        if (plVar6 == *(long **)(local_150 + 0x18)) {
          std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>
          ::_M_insert_aux((vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>
                           *)(local_150 + 8),plVar6,&local_178);
        }
        else {
          *plVar6 = local_178;
          plVar6[1] = (long)local_170;
          if (local_170 != (long *)0x0) {
            local_170[1] = local_170[1] + 1;
          }
          *(long **)(local_150 + 0x10) = plVar6 + 2;
        }
      }
      local_130 = local_158;
      local_158 = (MeshClipper *)0x0;
      boost::scoped_ptr<Caver::MeshClipper>::~scoped_ptr
                ((scoped_ptr<Caver::MeshClipper> *)&local_130);
      plVar6 = local_170;
      if ((local_170 != (long *)0x0) &&
         (lVar7 = local_170[1], local_170[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_170 + 0x10))(local_170);
        lVar7 = plVar6[2];
        plVar6[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      plVar6 = (long *)CONCAT44(uStack_15c,local_160);
      if ((plVar6 != (long *)0x0) && (lVar7 = plVar6[1], plVar6[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar7 = plVar6[2];
        plVar6[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      boost::scoped_ptr<Caver::MeshClipper>::~scoped_ptr
                ((scoped_ptr<Caver::MeshClipper> *)&local_158);
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x10;
      plVar6 = (long *)plVar4[0x11];
      if (plVar6 == (long *)0x0) goto LAB_0039abbc;
LAB_0039abfc:
      lVar7 = *plVar6;
      plVar6 = (long *)plVar6[1];
      if (plVar6 == (long *)0x0) break;
LAB_0039ac04:
      lVar8 = plVar6[1];
      plVar6[1] = lVar8 + 1;
      lVar2 = *(long *)(lVar7 + 8);
      lVar7 = *(long *)(lVar7 + 0x10);
      plVar6[1] = lVar8;
      uVar11 = lVar7 - lVar2;
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar7 = plVar6[2];
        plVar6[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
    }
  } while( true );
}


