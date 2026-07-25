/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002345F4
 * Mangled: _ZN5Caver19PropertiesComponent19ImplementsInterfaceEl
 * Demangled: Caver::PropertiesComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000023463C  Caver::PropertiesComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002345F4 string=0x00000000002345F8 ""
 *   insn=0x00000000002345F8 string=0x00000000002345FC "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::PropertiesComponent::ImplementsInterface(
        Caver::PropertiesComponent *this,
        _QWORD (*a2)(Caver::PropertiesComponent *__hidden this))
{
  return a2 == Caver::PropertiesComponent::Interface;
}

