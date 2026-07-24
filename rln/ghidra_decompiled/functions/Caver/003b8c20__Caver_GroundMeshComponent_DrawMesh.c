/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8c20
 * Function: Caver::GroundMeshComponent::DrawMesh
 * Signature: undefined __thiscall DrawMesh(GroundMeshComponent * this, RenderingContext * param_1, MeshInstance * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::DrawMesh(Caver::RenderingContext*, Caver::MeshInstance*) const */

void __thiscall
Caver::GroundMeshComponent::DrawMesh
          (GroundMeshComponent *this,RenderingContext *param_1,MeshInstance *param_2)

{
  if (*(Texture **)(*(long *)param_2 + 0xd8) != (Texture *)0x0) {
    RenderingContext::BindTexture(param_1,*(Texture **)(*(long *)param_2 + 0xd8));
  }
  MeshInstance::Draw(param_2,param_1);
  return;
}


