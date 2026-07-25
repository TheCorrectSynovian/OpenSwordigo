/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9DA0
 * Mangled: _ZN5Caver5Proto14LightComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::LightComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9DAC string=0x00000000002F9DB0 "X"
 *   insn=0x00000000002F9DB0 string=0x00000000002F9DB4 "`"
 *   insn=0x00000000002F9DB0 string=0x00000000001F6310 "0'"
 *   insn=0x00000000002F9DB8 string=0x00000000002F9DBC "`"
 *   insn=0x00000000002F9DB8 string=0x00000000001FD230 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::InitAsDefaultInstance(Caver::Proto::LightComponent *this)
{
  Caver::Proto::Vector3 *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector3 *)Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 3) = v2;
  result = Caver::Proto::Vector3::default_instance(v2);
  *((_QWORD *)this + 6) = result;
  return result;
}

