/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200330
 * Mangled: ._ZN5Caver7Vector39NormalizeEv
 * Demangled: Caver::Vector3::Normalize(void)
 *
 * Callers: 23
 *   0x0000000000222E68  Caver::LightComponent::Direction(void)
 *   0x0000000000222F98  Caver::LightComponent::Enable(Caver::RenderingContext *,int)
 *   0x0000000000227ECC  Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002283D8  sub_2283D8
 *   0x00000000002A4364  Caver::OrbitControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A4428  `non-virtual thunk to'Caver::OrbitControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x00000000002B0E90  Caver::SimpleGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x00000000002BAC60  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *   0x00000000002C6580  Caver::SwingableWeaponComponent::CurrentSwingPlane(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x0000000000445CB8  Caver::Mesh::NormalizeNormals(void)
 *   0x0000000000454268  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000004545B4  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Matrix4 const&)
 *   0x0000000000458650  Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *   0x00000000004588E8  Caver::CameraController::FocusAtRectangle(Caver::Rectangle const&,float,bool)
 *   0x00000000004AF474  Caver::Matrix4::LookAt(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000004D562C  sub_4D562C
 *
 * Callees: 1
 *   0x00000000004B2BC0  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200338 string=0x000000000020033C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector3::Normalize(Caver::Vector3 *this)
{
  return _ZN5Caver7Vector39NormalizeEv(this);
}

