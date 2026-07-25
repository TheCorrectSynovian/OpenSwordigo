/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA650
 * Mangled: ._ZN5Caver5Proto27CharAnimControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::CharAnimControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000256ADC  Caver::CharAnimControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9EBC  Caver::Proto::CharAnimControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA658 string=0x00000000001FA65C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CharAnimControllerComponent::default_instance(
        Caver::Proto::CharAnimControllerComponent *this)
{
  return _ZN5Caver5Proto27CharAnimControllerComponent16default_instanceEv(this);
}

