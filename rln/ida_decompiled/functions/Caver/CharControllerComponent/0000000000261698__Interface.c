/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261698
 * Mangled: _ZN5Caver23CharControllerComponent9InterfaceEv
 * Demangled: Caver::CharControllerComponent::Interface(void)
 *
 * Callers: 11
 *   0x00000000002601E0  Caver::CharControllerComponent::FinishCasting(void)
 *   0x0000000000260514  sub_260514
 *   0x00000000002605C0  sub_2605C0
 *   0x000000000026064C  sub_26064C
 *   0x0000000000261174  Caver::CharControllerComponent::ImplementsInterface(long)
 *   0x0000000000261188  Caver::CharControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000029E9E0  Caver::SkellyMonsterControllerComponent::className(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000026169C string=0x0000000000261698 " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::CharControllerComponent::Interface(
        Caver::CharControllerComponent *this))(Caver::CharControllerComponent *__hidden this)
{
  return Caver::CharControllerComponent::Interface;
}

