/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E330
 * Mangled: _ZN5Caver19BackgroundComponent9InterfaceEv
 * Demangled: Caver::BackgroundComponent::Interface(void)
 *
 * Callers: 8
 *   0x000000000021E28C  Caver::BackgroundComponent::ImplementsInterface(long)
 *   0x000000000021E2A0  Caver::BackgroundComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021E330  Caver::BackgroundComponent::Interface(void)
 *   0x00000000002B6AF4  Caver::RotatingBackgroundComponent::ImplementsInterface(long)
 *   0x00000000002B6B1C  Caver::RotatingBackgroundComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000021E334 string=0x000000000021E330 " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::BackgroundComponent::Interface(
        Caver::BackgroundComponent *this))(Caver::BackgroundComponent *__hidden this)
{
  return Caver::BackgroundComponent::Interface;
}

