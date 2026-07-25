/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033799C
 * Mangled: _ZN5Caver5Proto23DimensionSpellComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::DimensionSpellComponent::CopyFrom(Caver::Proto::DimensionSpellComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201EF0  Caver::Proto::DimensionSpellComponent::MergeFrom(Caver::Proto::DimensionSpellComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000003379B0 string=0x00000000003379B4 "@"
 *   insn=0x00000000003379BC string=0x00000000003379C0 ""
 *   insn=0x00000000003379D4 string=0x00000000003379D8 "F)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DimensionSpellComponent::CopyFrom(
        Caver::Proto::DimensionSpellComponent *this,
        const Caver::Proto::DimensionSpellComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::DimensionSpellComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::DimensionSpellComponent::MergeFrom();
  }
}

