/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002395F4
 * Mangled: _ZN5Caver14ShapeComponent19ImplementsInterfaceEl
 * Demangled: Caver::ShapeComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002395F4 string=0x00000000002395F8 "!D"
 *   insn=0x00000000002395F8 string=0x00000000002395FC "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ShapeComponent::ImplementsInterface(
        Caver::ShapeComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::ShapeComponent *this))(Caver::ShapeComponent *__hidden this))
{
  return a2 == Caver::ShapeComponent::Interface;
}

