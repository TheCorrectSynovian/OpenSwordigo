/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F59D0
 * Mangled: ._ZNK5Caver9Rectangle18IntersectsWithRectERKS0_
 * Demangled: Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *
 * Callers: 10
 *   0x000000000027BF1C  Caver::MonsterEntityComponent::Update(float)
 *   0x000000000027F4C8  Caver::PhysicsObjectComponent::RegisterLibrary(void)
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x00000000004665D4  Caver::Scene::DrawModels(Caver::RenderingContext *,Caver::Matrix4 const&,bool,bool)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000046E074  Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004B18E8  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F59D4 string=0x00000000004B18E8 " "
 *   insn=0x00000000001F59D8 string=0x00000000001F59DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::IntersectsWithRect(Caver::Rectangle *this, const Caver::Rectangle *a2)
{
  return _ZNK5Caver9Rectangle18IntersectsWithRectERKS0_(this, a2);
}

