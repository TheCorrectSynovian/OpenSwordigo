/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2578
 * Mangled: _ZN5Caver5Proto10LevelState8CopyFromERKS1_
 * Demangled: Caver::Proto::LevelState::CopyFrom(Caver::Proto::LevelState const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0C0  Caver::Proto::LevelState::MergeFrom(Caver::Proto::LevelState const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002F258C string=0x00000000002F2590 "@"
 *   insn=0x00000000002F2598 string=0x00000000002F259C ""
 *   insn=0x00000000002F25B4 string=0x00000000001FB0C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::LevelState::CopyFrom(Caver::Proto::LevelState *this, const Caver::Proto::LevelState *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::LevelState *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::LevelState::MergeFrom(this, a2);
  }
}

