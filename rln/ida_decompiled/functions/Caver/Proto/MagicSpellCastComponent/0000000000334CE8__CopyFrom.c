/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334CE8
 * Mangled: _ZN5Caver5Proto23MagicSpellCastComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::MagicSpellCastComponent::CopyFrom(Caver::Proto::MagicSpellCastComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201550  Caver::Proto::MagicSpellCastComponent::MergeFrom(Caver::Proto::MagicSpellCastComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000334CFC string=0x0000000000334D00 "@"
 *   insn=0x0000000000334D08 string=0x0000000000334D0C ""
 *   insn=0x0000000000334D20 string=0x0000000000334D24 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MagicSpellCastComponent::CopyFrom(
        Caver::Proto::MagicSpellCastComponent *this,
        const Caver::Proto::MagicSpellCastComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MagicSpellCastComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MagicSpellCastComponent::MergeFrom();
  }
}

