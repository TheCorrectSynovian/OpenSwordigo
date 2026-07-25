/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7488
 * Mangled: _ZN5Caver5Proto13GUIViewLayout8CopyFromERKS1_
 * Demangled: Caver::Proto::GUIViewLayout::CopyFrom(Caver::Proto::GUIViewLayout const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA6C0  Caver::Proto::GUIViewLayout::MergeFrom(Caver::Proto::GUIViewLayout const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D749C string=0x00000000002D74A0 "@"
 *   insn=0x00000000002D74A8 string=0x00000000002D74AC ""
 *   insn=0x00000000002D74C4 string=0x00000000001FA6C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GUIViewLayout::CopyFrom(
        Caver::Proto::GUIViewLayout *this,
        const Caver::Proto::GUIViewLayout *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GUIViewLayout *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GUIViewLayout::MergeFrom(this, a2);
  }
}

