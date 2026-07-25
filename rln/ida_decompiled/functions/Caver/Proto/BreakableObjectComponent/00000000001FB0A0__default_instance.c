/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB0A0
 * Mangled: ._ZN5Caver5Proto24BreakableObjectComponent16default_instanceEv
 * Demangled: Caver::Proto::BreakableObjectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000254730  Caver::BreakableObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA174  Caver::Proto::BreakableObjectComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB0A8 string=0x00000000001FB0AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::BreakableObjectComponent::default_instance(
        Caver::Proto::BreakableObjectComponent *this)
{
  return _ZN5Caver5Proto24BreakableObjectComponent16default_instanceEv(this);
}

