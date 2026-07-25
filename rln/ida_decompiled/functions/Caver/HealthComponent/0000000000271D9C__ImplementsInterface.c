/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271D9C
 * Mangled: _ZN5Caver15HealthComponent19ImplementsInterfaceEl
 * Demangled: Caver::HealthComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000271D9C string=0x0000000000271DA0 ")B"
 *   insn=0x0000000000271DA0 string=0x0000000000271DA4 "?"
 *   insn=0x0000000000271DA0 string=0x000000000021C13C "@&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::HealthComponent::ImplementsInterface(
        Caver::HealthComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::HealthComponent *this))(Caver::HealthComponent *__hidden this))
{
  return a2 == Caver::HealthComponent::Interface;
}

