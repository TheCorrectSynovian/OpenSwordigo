/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA04C
 * Mangled: _ZN5Caver5Proto16ProgramComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ProgramComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FA05C string=0x00000000002FA060 "`"
 *   insn=0x00000000002FA05C string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::InitAsDefaultInstance(Caver::Proto::ProgramComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 3) = result;
  return result;
}

