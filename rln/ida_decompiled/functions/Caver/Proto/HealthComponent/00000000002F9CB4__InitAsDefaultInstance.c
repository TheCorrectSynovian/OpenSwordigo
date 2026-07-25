/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9CB4
 * Mangled: _ZN5Caver5Proto15HealthComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::HealthComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002F9CC4 string=0x00000000002F9CC8 "`"
 *   insn=0x00000000002F9CC4 string=0x00000000001FB0B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::InitAsDefaultInstance(Caver::Proto::HealthComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector2::default_instance(this);
  *((_QWORD *)this + 3) = result;
  return result;
}

