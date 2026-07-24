/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b6f2c
 * Function: Caver::GroundMeshComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GroundMeshComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::GroundMeshComponent::LoadFromProtobufMessage(GroundMeshComponent *this,Component *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  Mesh *pMVar4;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  FloatColor *extraout_x1_02;
  FloatColor *extraout_x1_03;
  FloatColor *extraout_x1_04;
  FloatColor *pFVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  Mesh *local_58;
  long *plStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  auVar9 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5418,
                      *(MessageLite **)(PTR_extension_007e5418 + 8));
  pFVar5 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  if (0 < *(int *)(lVar3 + 0x68)) {
    lVar8 = 0;
    do {
      pMVar4 = operator_new(0x160);
      Mesh::Mesh(pMVar4);
      local_58 = pMVar4;
      boost::detail::shared_count::shared_count<Caver::Mesh>((shared_count *)&plStack_50,pMVar4);
      boost::detail::sp_enable_shared_from_this(&local_58,pMVar4,pMVar4);
      Mesh::LoadFromProtobufMessage(local_58,*(Mesh **)(*(long *)(lVar3 + 0x60) + lVar8 * 8));
      AddSurfaceMesh((shared_ptr *)this);
      plVar2 = plStack_50;
      pFVar5 = extraout_x1;
      if ((plStack_50 != (long *)0x0) &&
         (lVar6 = plStack_50[1], plStack_50[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        lVar6 = plVar2[2];
        plVar2[2] = lVar6 + -1;
        pFVar5 = extraout_x1_00;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
          pFVar5 = extraout_x1_01;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar3 + 0x68));
  }
  if (0 < *(int *)(lVar3 + 0xa0)) {
    lVar8 = 0;
    do {
      pMVar4 = operator_new(0x160);
      Mesh::Mesh(pMVar4);
      local_58 = pMVar4;
      boost::detail::shared_count::shared_count<Caver::Mesh>((shared_count *)&plStack_50,pMVar4);
      boost::detail::sp_enable_shared_from_this(&local_58,pMVar4,pMVar4);
      Mesh::LoadFromProtobufMessage(local_58,*(Mesh **)(*(long *)(lVar3 + 0x98) + lVar8 * 8));
      AddFrontMesh((shared_ptr *)this);
      plVar2 = plStack_50;
      pFVar5 = extraout_x1_02;
      if ((plStack_50 != (long *)0x0) &&
         (lVar6 = plStack_50[1], plStack_50[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        lVar6 = plVar2[2];
        plVar2[2] = lVar6 + -1;
        pFVar5 = extraout_x1_03;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
          pFVar5 = extraout_x1_04;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar3 + 0xa0));
  }
  lVar6 = *(long *)PTR_default_instance__007e5600;
  lVar8 = lVar6;
  if (*(long *)(lVar3 + 0x58) != 0) {
    lVar8 = lVar3;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x58) + 0x14);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(*(long *)(lVar8 + 0x58) + 0xc);
  *(undefined8 *)(this + 0xa8) = uVar7;
  if ((*(byte *)(lVar3 + 0xdc) >> 6 & 1) != 0) {
    if (*(long *)(lVar3 + 0xd0) != 0) {
      lVar6 = lVar3;
    }
    FloatColorFromProtobufMessage(*(Caver **)(lVar6 + 0xd0),pFVar5);
    *(long **)(this + 0xb8) = plStack_50;
    *(Mesh **)(this + 0xb0) = local_58;
  }
  this[0xc0] = *(GroundMeshComponent *)(lVar3 + 0xd8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


