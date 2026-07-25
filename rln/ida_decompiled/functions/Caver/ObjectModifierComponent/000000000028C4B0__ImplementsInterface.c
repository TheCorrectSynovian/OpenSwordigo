/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C4B0
 * Mangled: _ZN5Caver23ObjectModifierComponent19ImplementsInterfaceEl
 * Demangled: Caver::ObjectModifierComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000271E48  Caver::ObjectModifierComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000028C4B0 string=0x000000000028C4B4 ""
 *   insn=0x000000000028C4B4 string=0x000000000028C4B8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ObjectModifierComponent::ImplementsInterface(
        Caver::ObjectModifierComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::ObjectModifierComponent *this))(Caver::ObjectModifierComponent *__hidden this))
{
  return a2 == Caver::ObjectModifierComponent::Interface;
}

