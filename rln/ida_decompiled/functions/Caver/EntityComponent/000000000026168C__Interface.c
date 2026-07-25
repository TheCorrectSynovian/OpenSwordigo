/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026168C
 * Mangled: _ZN5Caver15EntityComponent9InterfaceEv
 * Demangled: Caver::EntityComponent::Interface(void)
 *
 * Callers: 14
 *   0x00000000002615BC  Caver::ComponentOutlet<Caver::EntityComponent>::Interface(void)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *   0x00000000002696F0  sub_2696F0
 *   0x000000000026974C  sub_26974C
 *   0x00000000002697D4  sub_2697D4
 *   0x0000000000269858  sub_269858
 *   0x00000000002698F4  sub_2698F4
 *   0x0000000000269BBC  Caver::EntityComponent::ImplementsInterface(long)
 *   0x0000000000269BD0  Caver::EntityComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000274464  Caver::HeroEntityComponent::ImplementsInterface(long)
 *   0x000000000027448C  Caver::HeroEntityComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000027DC68  Caver::MonsterEntityComponent::ImplementsInterface(long)
 *   0x000000000027DC90  Caver::MonsterEntityComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000261690 string=0x000000000026168C " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::EntityComponent::Interface(
        Caver::EntityComponent *this))(Caver::EntityComponent *__hidden this)
{
  return Caver::EntityComponent::Interface;
}

