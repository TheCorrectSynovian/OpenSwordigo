/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6614
 * Mangled: _ZN5Caver5Proto10GUIMargins8CopyFromERKS1_
 * Demangled: Caver::Proto::GUIMargins::CopyFrom(Caver::Proto::GUIMargins const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD960  Caver::Proto::GUIMargins::MergeFrom(Caver::Proto::GUIMargins const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D6628 string=0x00000000002D662C "@"
 *   insn=0x00000000002D6634 string=0x00000000002D6638 ""
 *   insn=0x00000000002D6650 string=0x00000000001FD960 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GUIMargins::CopyFrom(Caver::Proto::GUIMargins *this, const Caver::Proto::GUIMargins *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GUIMargins *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GUIMargins::MergeFrom();
  }
}

