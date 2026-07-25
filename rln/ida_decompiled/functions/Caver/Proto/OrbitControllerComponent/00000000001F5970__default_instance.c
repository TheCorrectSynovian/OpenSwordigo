/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5970
 * Mangled: ._ZN5Caver5Proto24OrbitControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::OrbitControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002A3BFC  Caver::OrbitControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA54C  Caver::Proto::OrbitControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5978 string=0x00000000001F597C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::OrbitControllerComponent::default_instance(
        Caver::Proto::OrbitControllerComponent *this)
{
  return _ZN5Caver5Proto24OrbitControllerComponent16default_instanceEv(this);
}

