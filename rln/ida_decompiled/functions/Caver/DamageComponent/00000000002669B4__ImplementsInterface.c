/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002669B4
 * Mangled: _ZN5Caver15DamageComponent19ImplementsInterfaceEl
 * Demangled: Caver::DamageComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002669B4 string=0x00000000002669B8 "iF"
 *   insn=0x00000000002669B8 string=0x00000000002669BC "?"
 *   insn=0x00000000002669B8 string=0x000000000021C148 "@&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::DamageComponent::ImplementsInterface(
        Caver::DamageComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::DamageComponent *this))(Caver::DamageComponent *__hidden this))
{
  return a2 == Caver::DamageComponent::Interface;
}

