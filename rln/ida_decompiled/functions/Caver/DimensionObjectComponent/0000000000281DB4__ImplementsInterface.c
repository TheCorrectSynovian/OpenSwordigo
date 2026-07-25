/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281DB4
 * Mangled: _ZN5Caver24DimensionObjectComponent19ImplementsInterfaceEl
 * Demangled: Caver::DimensionObjectComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000281DFC  Caver::DimensionObjectComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000281DB4 string=0x0000000000281DB8 "yC"
 *   insn=0x0000000000281DB8 string=0x0000000000281DBC "?"
 *   insn=0x0000000000281DB8 string=0x0000000000281E54 " #"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::DimensionObjectComponent::ImplementsInterface(
        Caver::DimensionObjectComponent *this,
        _QWORD (*a2)(Caver::DimensionObjectComponent *__hidden this))
{
  return a2 == Caver::DimensionObjectComponent::Interface;
}

