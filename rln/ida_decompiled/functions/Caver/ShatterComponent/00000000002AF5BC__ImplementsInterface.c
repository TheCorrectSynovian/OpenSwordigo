/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF5BC
 * Mangled: _ZN5Caver16ShatterComponent19ImplementsInterfaceEl
 * Demangled: Caver::ShatterComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002560E8  Caver::ShatterComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002AF5BC string=0x00000000002AF5C0 ""
 *   insn=0x00000000002AF5C0 string=0x00000000002AF5C4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ShatterComponent::ImplementsInterface(
        Caver::ShatterComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::ShatterComponent *this))(Caver::ShatterComponent *__hidden this))
{
  return a2 == Caver::ShatterComponent::Interface;
}

