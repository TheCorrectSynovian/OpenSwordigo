/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b73d4
 * Function: Caver::GroundMeshComponent::AddSurfaceMesh
 * Signature: undefined __cdecl AddSurfaceMesh(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::AddSurfaceMesh(boost::shared_ptr<Caver::Mesh> const&) */

void Caver::GroundMeshComponent::AddSurfaceMesh(shared_ptr *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  MeshInstance *in_x1;
  bool in_w2;
  long lVar3;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(long *)in_x1 != 0) {
    MeshInstance::InstanceWithMesh(in_x1,(shared_ptr *)0x1,in_w2);
    puVar1 = *(undefined8 **)(param_1 + 0x78);
    if (puVar1 == *(undefined8 **)(param_1 + 0x80)) {
      std::
      vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>
                       *)(param_1 + 0x70),puVar1,&local_38);
    }
    else {
      *puVar1 = local_38;
      puVar1[1] = local_30;
      if (local_30 != (long *)0x0) {
        local_30[1] = local_30[1] + 1;
      }
      *(undefined8 **)(param_1 + 0x78) = puVar1 + 2;
    }
    if ((local_30 != (long *)0x0) &&
       (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_30 + 0x10))(local_30);
      lVar3 = local_30[2];
      local_30[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_30 + 0x18))(local_30);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


