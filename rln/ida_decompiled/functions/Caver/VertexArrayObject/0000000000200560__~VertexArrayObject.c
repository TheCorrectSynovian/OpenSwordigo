/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200560
 * Mangled: ._ZN5Caver17VertexArrayObjectD2Ev
 * Demangled: Caver::VertexArrayObject::~VertexArrayObject()
 *
 * Callers: 7
 *   0x00000000002AC548  Caver::ParticleSystem::~ParticleSystem()
 *   0x00000000002C1D0C  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *   0x00000000002C3190  Caver::WaterMeshComponent::~WaterMeshComponent()
 *   0x00000000004493B4  Caver::MeshInstance::~MeshInstance()
 *   0x000000000045A05C  Caver::LightOverlay::CreateVertices(void)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000462DAC  Caver::Scene::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x000000000048D238  Caver::VertexArrayObject::~VertexArrayObject()
 *
 * Referenced strings: 2
 *   insn=0x0000000000200564 string=0x000000000048D238 "V"
 *   insn=0x0000000000200568 string=0x000000000020056C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::VertexArrayObject::~VertexArrayObject(Caver::VertexArrayObject *this)
{
  _ZN5Caver17VertexArrayObjectD2Ev(this);
}

