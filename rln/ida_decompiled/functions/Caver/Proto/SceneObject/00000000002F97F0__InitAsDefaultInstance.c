/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F97F0
 * Mangled: _ZN5Caver5Proto11SceneObject21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::SceneObject::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *   0x00000000001F9600  Caver::Proto::Rectangle::default_instance(void)
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000002F97FC string=0x00000000002F9800 ","
 *   insn=0x00000000002F9800 string=0x00000000002F9804 "`."
 *   insn=0x00000000002F9800 string=0x00000000001FB0B0 "0'"
 *   insn=0x00000000002F9804 string=0x00000000002F9808 "~"
 *   insn=0x00000000002F9808 string=0x00000000002F980C "`:"
 *   insn=0x00000000002F9808 string=0x00000000001F9600 "0'"
 *   insn=0x00000000002F9810 string=0x00000000002F9814 "`B"
 *   insn=0x00000000002F9810 string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObject::InitAsDefaultInstance(Caver::Proto::SceneObject *this)
{
  Caver::Proto::Rectangle *v2; // x0
  Caver::Proto::Program *v3; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Rectangle *)Caver::Proto::Vector2::default_instance(this);
  *((_QWORD *)this + 11) = v2;
  v3 = (Caver::Proto::Program *)Caver::Proto::Rectangle::default_instance(v2);
  *((_QWORD *)this + 14) = v3;
  result = Caver::Proto::Program::default_instance(v3);
  *((_QWORD *)this + 16) = result;
  return result;
}

