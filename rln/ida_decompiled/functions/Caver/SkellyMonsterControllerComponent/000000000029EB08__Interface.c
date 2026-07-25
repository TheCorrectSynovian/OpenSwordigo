/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029EB08
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent9InterfaceEv
 * Demangled: Caver::SkellyMonsterControllerComponent::Interface(void)
 *
 * Callers: 3
 *   0x000000000029E970  Caver::SkellyMonsterControllerComponent::ImplementsInterface(long)
 *   0x000000000029E998  Caver::SkellyMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000029EB08  Caver::SkellyMonsterControllerComponent::Interface(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000029EB0C string=0x000000000029EB08 " ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::SkellyMonsterControllerComponent::Interface(
        Caver::SkellyMonsterControllerComponent *this))(Caver::SkellyMonsterControllerComponent *__hidden this)
{
  return Caver::SkellyMonsterControllerComponent::Interface;
}

