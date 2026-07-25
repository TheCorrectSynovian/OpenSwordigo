/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA518
 * Mangled: _ZN5Caver14SwingComponent19ImplementsInterfaceEl
 * Demangled: Caver::SwingComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000261334  Caver::SwingComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002CA518 string=0x00000000002CA51C ""
 *   insn=0x00000000002CA51C string=0x00000000002CA520 "?"
 *   insn=0x00000000002CA51C string=0x0000000000261334 " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SwingComponent::ImplementsInterface(
        Caver::SwingComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::SwingComponent *this))(Caver::SwingComponent *__hidden this))
{
  return a2 == Caver::SwingComponent::Interface;
}

