/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337394
 * Mangled: _ZN5Caver5Proto14SpellComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SpellComponent::CopyFrom(Caver::Proto::SpellComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9960  Caver::Proto::SpellComponent::MergeFrom(Caver::Proto::SpellComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000003373A8 string=0x00000000003373AC "@"
 *   insn=0x00000000003373B4 string=0x00000000003373B8 ""
 *   insn=0x00000000003373CC string=0x00000000003373D0 "d\t"
 *   insn=0x00000000003373D0 string=0x00000000001F9960 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SpellComponent::CopyFrom(
        Caver::Proto::SpellComponent *this,
        const Caver::Proto::SpellComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SpellComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SpellComponent::MergeFrom();
  }
}

