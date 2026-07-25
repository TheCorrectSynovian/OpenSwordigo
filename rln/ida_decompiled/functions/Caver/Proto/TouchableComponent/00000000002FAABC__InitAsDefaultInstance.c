/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAABC
 * Mangled: _ZN5Caver5Proto18TouchableComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::TouchableComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FAACC string=0x00000000002FAAD0 "`\n"
 *   insn=0x00000000002FAACC string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::InitAsDefaultInstance(Caver::Proto::TouchableComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

