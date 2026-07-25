/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBA94
 * Mangled: _ZN5Caver5Proto11GameOptions21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::GameOptions::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC930  Caver::Proto::GUIViewLayout::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002DBAA4 string=0x00000000002DBAA8 "`."
 *   insn=0x00000000002DBAA4 string=0x00000000001FC930 "0'"
 *   insn=0x00000000002DBAAC string=0x00000000002DBAB0 "`2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameOptions::InitAsDefaultInstance(Caver::Proto::GameOptions *this)
{
  Caver::Proto::GUIViewLayout *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::GUIViewLayout *)Caver::Proto::GUIViewLayout::default_instance(this);
  *((_QWORD *)this + 11) = v2;
  result = Caver::Proto::GUIViewLayout::default_instance(v2);
  *((_QWORD *)this + 12) = result;
  return result;
}

