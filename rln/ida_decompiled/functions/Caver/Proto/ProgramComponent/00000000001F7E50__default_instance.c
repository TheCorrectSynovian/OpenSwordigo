/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7E50
 * Mangled: ._ZN5Caver5Proto16ProgramComponent16default_instanceEv
 * Demangled: Caver::Proto::ProgramComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000231738  Caver::ProgramComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA070  Caver::Proto::ProgramComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7E58 string=0x00000000001F7E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ProgramComponent::default_instance(Caver::Proto::ProgramComponent *this)
{
  return _ZN5Caver5Proto16ProgramComponent16default_instanceEv(this);
}

