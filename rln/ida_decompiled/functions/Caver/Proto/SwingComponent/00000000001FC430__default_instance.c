/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC430
 * Mangled: ._ZN5Caver5Proto14SwingComponent16default_instanceEv
 * Demangled: Caver::Proto::SwingComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002C97A4  Caver::SwingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA900  Caver::Proto::SwingComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC438 string=0x00000000001FC43C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SwingComponent::default_instance(Caver::Proto::SwingComponent *this)
{
  return _ZN5Caver5Proto14SwingComponent16default_instanceEv(this);
}

