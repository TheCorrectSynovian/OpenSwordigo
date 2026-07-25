/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AE38
 * Mangled: _ZN5Caver13ManaComponent19ImplementsInterfaceEl
 * Demangled: Caver::ManaComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000027AE38 string=0x000000000027AE3C "YE"
 *   insn=0x000000000027AE3C string=0x000000000027AE40 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ManaComponent::ImplementsInterface(
        Caver::ManaComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::ManaComponent *this))(Caver::ManaComponent *__hidden this))
{
  return a2 == Caver::ManaComponent::Interface;
}

