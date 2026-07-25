/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE190
 * Mangled: ._ZN5Caver5Proto14ShapeComponent16default_instanceEv
 * Demangled: Caver::Proto::ShapeComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000002F9BEC  Caver::Proto::ShapeComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE198 string=0x00000000001FE19C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ShapeComponent::default_instance(Caver::Proto::ShapeComponent *this)
{
  return _ZN5Caver5Proto14ShapeComponent16default_instanceEv(this);
}

