/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA42C
 * Mangled: _ZN5Caver5Proto20FireEmitterComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::FireEmitterComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 9
 *   insn=0x00000000002FA43C string=0x00000000002FA440 "`"
 *   insn=0x00000000002FA43C string=0x00000000001FB0B0 "0'"
 *   insn=0x00000000002FA440 string=0x00000000002FA444 "{"
 *   insn=0x00000000002FA444 string=0x00000000002FA448 "`"
 *   insn=0x00000000002FA444 string=0x00000000001FD230 "0'"
 *   insn=0x00000000002FA44C string=0x00000000002FA450 "`"
 *   insn=0x00000000002FA44C string=0x00000000001F6310 "0'"
 *   insn=0x00000000002FA450 string=0x00000000002FA454 "w"
 *   insn=0x00000000002FA454 string=0x00000000002FA458 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::InitAsDefaultInstance(Caver::Proto::FireEmitterComponent *this)
{
  Caver::Proto::Vector3 *v2; // x0
  Caver::Proto::FloatColor *v3; // x0
  Caver::Proto::Vector3 *v4; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector3 *)Caver::Proto::Vector2::default_instance(this);
  *((_QWORD *)this + 3) = v2;
  v3 = (Caver::Proto::FloatColor *)Caver::Proto::Vector3::default_instance(v2);
  *((_QWORD *)this + 4) = v3;
  v4 = (Caver::Proto::Vector3 *)Caver::Proto::FloatColor::default_instance(v3);
  *((_QWORD *)this + 5) = v4;
  result = Caver::Proto::Vector3::default_instance(v4);
  *((_QWORD *)this + 7) = result;
  return result;
}

