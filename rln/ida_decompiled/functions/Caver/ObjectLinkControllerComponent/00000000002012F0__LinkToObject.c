/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002012F0
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent12LinkToObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::ObjectLinkControllerComponent::LinkToObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 5
 *   0x000000000022A1A0  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x000000000022AE98  Caver::ObjectLinkControllerComponent::LinkToBone(boost::intrusive_ptr<Caver::SceneObject> const&,std::string const&)
 *   0x000000000022B11C  sub_22B11C
 *   0x0000000000268FF0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Callees: 1
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002012F8 string=0x00000000002012FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ObjectLinkControllerComponent::LinkToObject()
{
  JUMPOUT(0x22A5FC);
}

