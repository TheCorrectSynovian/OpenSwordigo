/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E5014
 * Mangled: _ZN5Caver5Proto11GuideTarget8CopyFromERKS1_
 * Demangled: Caver::Proto::GuideTarget::CopyFrom(Caver::Proto::GuideTarget const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F95F0  Caver::Proto::GuideTarget::MergeFrom(Caver::Proto::GuideTarget const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002E5028 string=0x00000000002E502C "@"
 *   insn=0x00000000002E5034 string=0x00000000002E5038 ""
 *   insn=0x00000000002E504C string=0x00000000002E5050 "hQ"
 *   insn=0x00000000002E5050 string=0x00000000001F95F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GuideTarget::CopyFrom(
        Caver::Proto::GuideTarget *this,
        const Caver::Proto::GuideTarget *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GuideTarget *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GuideTarget::MergeFrom();
  }
}

