/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b88a8
 * Function: Caver::GroundMeshComponent::GetAllMeshes
 * Signature: undefined __thiscall GetAllMeshes(GroundMeshComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::GetAllMeshes(std::vector<boost::shared_ptr<Caver::MeshInstance>,
   std::allocator<boost::shared_ptr<Caver::MeshInstance> > >*) */

void __thiscall Caver::GroundMeshComponent::GetAllMeshes(GroundMeshComponent *this,vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(this + 0x78);
  for (puVar1 = *(undefined8 **)(this + 0x70); puVar1 != puVar3; puVar1 = puVar1 + 2) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
      std::
      vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>
                       *)param_1,puVar2,puVar1);
    }
    else {
      *puVar2 = *puVar1;
      lVar4 = puVar1[1];
      puVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      }
      *(undefined8 **)(param_1 + 8) = puVar2 + 2;
    }
  }
  puVar3 = *(undefined8 **)(this + 0x90);
  for (puVar1 = *(undefined8 **)(this + 0x88); puVar1 != puVar3; puVar1 = puVar1 + 2) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
      std::
      vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::MeshInstance>,std::allocator<boost::shared_ptr<Caver::MeshInstance>>>
                       *)param_1,puVar2,puVar1);
    }
    else {
      *puVar2 = *puVar1;
      lVar4 = puVar1[1];
      puVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      }
      *(undefined8 **)(param_1 + 8) = puVar2 + 2;
    }
  }
  return;
}


