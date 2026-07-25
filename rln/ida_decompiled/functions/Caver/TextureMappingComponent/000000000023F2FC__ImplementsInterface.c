/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F2FC
 * Mangled: _ZN5Caver23TextureMappingComponent19ImplementsInterfaceEl
 * Demangled: Caver::TextureMappingComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000023F344  Caver::TextureMappingComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000023F2FC string=0x000000000023F300 ""
 *   insn=0x000000000023F300 string=0x000000000023F304 "?"
 *   insn=0x000000000023F300 string=0x000000000023F39C "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::TextureMappingComponent::ImplementsInterface(
        Caver::TextureMappingComponent *this,
        _QWORD (*a2)(Caver::TextureMappingComponent *__hidden this))
{
  return a2 == Caver::TextureMappingComponent::Interface;
}

