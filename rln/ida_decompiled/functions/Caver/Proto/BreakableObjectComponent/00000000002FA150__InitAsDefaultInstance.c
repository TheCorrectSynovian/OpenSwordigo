/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA150
 * Mangled: _ZN5Caver5Proto24BreakableObjectComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::BreakableObjectComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FA15C string=0x00000000002FA160 "x"
 *   insn=0x00000000002FA160 string=0x00000000002FA164 "`"
 *   insn=0x00000000002FA160 string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::InitAsDefaultInstance(
        Caver::Proto::BreakableObjectComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 3) = result;
  return result;
}

