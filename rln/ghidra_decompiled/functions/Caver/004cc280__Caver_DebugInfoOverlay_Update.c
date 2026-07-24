/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cc280
 * Function: Caver::DebugInfoOverlay::Update
 * Signature: undefined __thiscall Update(DebugInfoOverlay * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::Update(float) */

void __thiscall Caver::DebugInfoOverlay::Update(DebugInfoOverlay *this,float param_1)

{
  int iVar1;
  int iVar2;
  TextureLibrary *this_00;
  float fVar3;
  
  if (*(int *)(this + 0x164) != 1) {
    if (*(int *)(this + 0x164) == 0) {
      fVar3 = *(float *)(this + 0x150) + param_1;
      *(float *)(this + 0x150) = fVar3;
      if (0.5 < fVar3) {
        SetFPS(this,(float)*(int *)(this + 0x14c) / fVar3);
        *(undefined8 *)(this + 0x14c) = 0;
      }
    }
    return;
  }
  this_00 = (TextureLibrary *)TextureLibrary::sharedLibrary();
  iVar1 = TextureLibrary::TotalByteSize(this_00);
  SetTextureMemoryUsage(this,iVar1);
  iVar1 = MeshInstance::NumStaticVerticesDrawn();
  iVar2 = MeshInstance::NumSkinnedVerticesDrawn();
  SetNumVertices(this,iVar1,iVar2);
  iVar1 = MeshInstance::NumTrianglesDrawn();
  SetNumTriangles(this,iVar1);
  MeshInstance::ResetDrawCounters();
  return;
}


