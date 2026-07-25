/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DC68
 * Mangled: _ZN5Caver22MonsterEntityComponent19ImplementsInterfaceEl
 * Demangled: Caver::MonsterEntityComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *   0x0000000000274FA8  Caver::MonsterEntityComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000027DC68 string=0x000000000027DC6C ""
 *   insn=0x000000000027DC6C string=0x000000000027DC70 "I#"
 *   insn=0x000000000027DC70 string=0x000000000027DC74 ")1F"
 *   insn=0x000000000027DC74 string=0x000000000027DC78 "?"
 *   insn=0x000000000027DC74 string=0x000000000026168C " $"
 *   insn=0x000000000027DC7C string=0x000000000027DC80 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::ImplementsInterface(
        Caver::MonsterEntityComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterEntityComponent *this))(Caver::MonsterEntityComponent *__hidden this))
{
  return (a2 == Caver::MonsterEntityComponent::Interface) | (unsigned int)(a2 == Caver::EntityComponent::Interface);
}

