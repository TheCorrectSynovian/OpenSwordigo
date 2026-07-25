/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD020
 * Mangled: ._ZN5Caver15EntityComponent18SetFacingDirectionEi
 * Demangled: Caver::EntityComponent::SetFacingDirection(int)
 *
 * Callers: 20
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000026BC7C  Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *   0x000000000026C06C  Caver::EntityControllerComponent::SetFacingDirection(int)
 *   0x000000000026C0F0  Caver::EntityControllerComponent::Update(float)
 *   0x000000000026CB50  Caver::EntityControllerComponent::HandleMessage(int,void *)
 *   0x000000000026CEBC  sub_26CEBC
 *   0x0000000000294798  Caver::BouncingMonsterControllerComponent::Prepare(void)
 *   0x0000000000294B58  Caver::BouncingMonsterControllerComponent::Update(float)
 *   0x0000000000295E40  Caver::ChargingMonsterControllerComponent::Prepare(void)
 *   0x00000000002962EC  Caver::ChargingMonsterControllerComponent::Update(float)
 *   0x00000000002969F8  Caver::ChargingMonsterControllerComponent::HandleMessage(int,void *)
 *   0x00000000002975B0  Caver::GenericMonsterControllerComponent::SetFacingDirection(int)
 *   0x000000000029CAB8  Caver::ShootingMonsterControllerComponent::StartMovingToDirection(int)
 *   0x000000000029CB68  Caver::ShootingMonsterControllerComponent::Update(float)
 *   0x000000000029D2D0  Caver::ShootingMonsterControllerComponent::HandleMessage(int,void *)
 *   0x000000000029E128  Caver::SkellyMonsterControllerComponent::Update(float)
 *   0x00000000002A133C  Caver::WalkingMonsterControllerComponent::StartMovingToDirection(int)
 *   0x00000000002A1394  Caver::WalkingMonsterControllerComponent::Update(float)
 *   0x00000000002A16E4  Caver::WalkingMonsterControllerComponent::HandleMessage(int,void *)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Callees: 1
 *   0x0000000000268BB8  Caver::EntityComponent::SetFacingDirection(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD024 string=0x0000000000268BB8 "p@"
 *   insn=0x00000000001FD028 string=0x00000000001FD02C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::SetFacingDirection(Caver::EntityComponent *this, int a2)
{
  return _ZN5Caver15EntityComponent18SetFacingDirectionEi(this, a2);
}

