/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA294
 * Mangled: _ZN5Caver5Proto19HeroEntityComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::HeroEntityComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FA2A0 string=0x00000000002FA2A4 "'"
 *   insn=0x00000000002FA2A4 string=0x00000000002FA2A8 "`\n"
 *   insn=0x00000000002FA2A4 string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::InitAsDefaultInstance(Caver::Proto::HeroEntityComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

