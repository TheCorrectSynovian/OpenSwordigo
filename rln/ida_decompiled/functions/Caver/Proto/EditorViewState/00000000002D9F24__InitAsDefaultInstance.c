/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9F24
 * Mangled: _ZN5Caver5Proto15EditorViewState21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::EditorViewState::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D9F34 string=0x00000000002D9F38 "`6"
 *   insn=0x00000000002D9F34 string=0x00000000001FD230 "0'"
 *   insn=0x00000000002D9F3C string=0x00000000002D9F40 "`:"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EditorViewState::InitAsDefaultInstance(Caver::Proto::EditorViewState *this)
{
  Caver::Proto::Vector3 *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector3 *)Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 13) = v2;
  result = Caver::Proto::Vector3::default_instance(v2);
  *((_QWORD *)this + 14) = result;
  return result;
}

