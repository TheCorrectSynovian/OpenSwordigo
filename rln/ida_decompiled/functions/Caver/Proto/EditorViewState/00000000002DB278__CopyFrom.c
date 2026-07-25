/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DB278
 * Mangled: _ZN5Caver5Proto15EditorViewState8CopyFromERKS1_
 * Demangled: Caver::Proto::EditorViewState::CopyFrom(Caver::Proto::EditorViewState const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7B10  Caver::Proto::EditorViewState::MergeFrom(Caver::Proto::EditorViewState const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002DB28C string=0x00000000002DB290 "@"
 *   insn=0x00000000002DB298 string=0x00000000002DB29C ""
 *   insn=0x00000000002DB2B4 string=0x00000000001F7B10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EditorViewState::CopyFrom(
        Caver::Proto::EditorViewState *this,
        const Caver::Proto::EditorViewState *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::EditorViewState *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::EditorViewState::MergeFrom();
  }
}

