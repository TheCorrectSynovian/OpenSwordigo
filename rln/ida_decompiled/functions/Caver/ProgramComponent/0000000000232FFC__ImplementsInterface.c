/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232FFC
 * Mangled: _ZN5Caver16ProgramComponent19ImplementsInterfaceEl
 * Demangled: Caver::ProgramComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000233044  Caver::ProgramComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000232FFC string=0x0000000000233000 ""
 *   insn=0x0000000000233000 string=0x0000000000233004 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ProgramComponent::ImplementsInterface(
        Caver::ProgramComponent *this,
        _QWORD (*a2)(Caver::ProgramComponent *__hidden this))
{
  return a2 == Caver::ProgramComponent::Interface;
}

