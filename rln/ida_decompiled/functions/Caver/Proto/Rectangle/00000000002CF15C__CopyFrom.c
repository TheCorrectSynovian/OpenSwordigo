/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF15C
 * Mangled: _ZN5Caver5Proto9Rectangle8CopyFromERKS1_
 * Demangled: Caver::Proto::Rectangle::CopyFrom(Caver::Proto::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002021D0  Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CF170 string=0x00000000002CF174 "@"
 *   insn=0x00000000002CF17C string=0x00000000002CF180 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Rectangle::CopyFrom(Caver::Proto::Rectangle *this, const Caver::Proto::Rectangle *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Rectangle *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Rectangle::MergeFrom(this, a2);
  }
}

