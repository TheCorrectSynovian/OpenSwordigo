/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202780
 * Mangled: ._ZN5Caver5Proto15EntityComponent16default_instanceEv
 * Demangled: Caver::Proto::EntityComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000267D30  Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9F24  Caver::Proto::EntityComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202788 string=0x000000000020278C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::EntityComponent::default_instance(Caver::Proto::EntityComponent *this)
{
  return _ZN5Caver5Proto15EntityComponent16default_instanceEv(this);
}

