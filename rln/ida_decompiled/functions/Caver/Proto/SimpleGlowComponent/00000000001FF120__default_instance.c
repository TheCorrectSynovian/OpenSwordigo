/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF120
 * Mangled: ._ZN5Caver5Proto19SimpleGlowComponent16default_instanceEv
 * Demangled: Caver::Proto::SimpleGlowComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002AF810  Caver::SimpleGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA4C4  Caver::Proto::SimpleGlowComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF128 string=0x00000000001FF12C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SimpleGlowComponent::default_instance(Caver::Proto::SimpleGlowComponent *this)
{
  return _ZN5Caver5Proto19SimpleGlowComponent16default_instanceEv(this);
}

