/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAC00
 * Mangled: _ZN5Caver5Proto18MagicBoltComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::MagicBoltComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FAC10 string=0x00000000002FAC14 "`"
 *   insn=0x00000000002FAC10 string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBoltComponent::InitAsDefaultInstance(Caver::Proto::MagicBoltComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 3) = result;
  return result;
}

