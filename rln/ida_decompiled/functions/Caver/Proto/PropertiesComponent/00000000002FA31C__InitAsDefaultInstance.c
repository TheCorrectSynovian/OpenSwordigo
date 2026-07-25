/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA31C
 * Mangled: _ZN5Caver5Proto19PropertiesComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::PropertiesComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FA32C string=0x00000000002FA330 "`\n"
 *   insn=0x00000000002FA32C string=0x00000000001F6B40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::InitAsDefaultInstance(Caver::Proto::PropertiesComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

