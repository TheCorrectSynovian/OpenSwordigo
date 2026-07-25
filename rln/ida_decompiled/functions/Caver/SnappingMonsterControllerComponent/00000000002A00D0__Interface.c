/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A00D0
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent9InterfaceEv
 * Demangled: Caver::SnappingMonsterControllerComponent::Interface(void)
 *
 * Callers: 4
 *   0x000000000029FC10  sub_29FC10
 *   0x000000000029FF38  Caver::SnappingMonsterControllerComponent::ImplementsInterface(long)
 *   0x000000000029FF60  Caver::SnappingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002A00D0  Caver::SnappingMonsterControllerComponent::Interface(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002A00D4 string=0x00000000002A00D0 " ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::SnappingMonsterControllerComponent::Interface(
        Caver::SnappingMonsterControllerComponent *this))(Caver::SnappingMonsterControllerComponent *__hidden this)
{
  return Caver::SnappingMonsterControllerComponent::Interface;
}

