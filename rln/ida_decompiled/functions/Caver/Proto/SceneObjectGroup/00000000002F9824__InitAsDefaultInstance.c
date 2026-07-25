/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9824
 * Mangled: _ZN5Caver5Proto16SceneObjectGroup21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::SceneObjectGroup::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002F9834 string=0x00000000002F9838 "`."
 *   insn=0x00000000002F9834 string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::InitAsDefaultInstance(Caver::Proto::SceneObjectGroup *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 11) = result;
  return result;
}

