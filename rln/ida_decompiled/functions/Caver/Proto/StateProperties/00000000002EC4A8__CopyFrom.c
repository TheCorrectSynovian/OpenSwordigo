/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC4A8
 * Mangled: _ZN5Caver5Proto15StateProperties8CopyFromERKS1_
 * Demangled: Caver::Proto::StateProperties::CopyFrom(Caver::Proto::StateProperties const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3A60  Caver::Proto::StateProperties::MergeFrom(Caver::Proto::StateProperties const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002EC4BC string=0x00000000002EC4C0 "@"
 *   insn=0x00000000002EC4C8 string=0x00000000002EC4CC ""
 *   insn=0x00000000002EC4E0 string=0x00000000002EC4E4 "_"
 *   insn=0x00000000002EC4E4 string=0x00000000001F3A60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::StateProperties::CopyFrom(
        Caver::Proto::StateProperties *this,
        const Caver::Proto::StateProperties *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::StateProperties *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::StateProperties::MergeFrom();
  }
}

