/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBB14
 * Mangled: _ZN5Caver5Proto9Component8CopyFromERKS1_
 * Demangled: Caver::Proto::Component::CopyFrom(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAB70  Caver::Proto::Component::MergeFrom(Caver::Proto::Component const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002FBB28 string=0x00000000002FBB2C "@"
 *   insn=0x00000000002FBB34 string=0x00000000002FBB38 ""
 *   insn=0x00000000002FBB4C string=0x00000000002FBB50 ""
 *   insn=0x00000000002FBB50 string=0x00000000001FAB70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Component::CopyFrom(Caver::Proto::Component *this, const Caver::Proto::Component *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Component *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Component::MergeFrom();
  }
}

