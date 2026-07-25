/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F77B0
 * Mangled: ._ZNK5Caver28AnimationControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x0000000000256ADC  Caver::CharAnimControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x000000000021C604  Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F77B8 string=0x00000000001F77BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimationControllerComponent::SaveToProtobufMessage(
        Caver::AnimationControllerComponent *this,
        Caver::Proto::Component *a2)
{
  return _ZNK5Caver28AnimationControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE(this, a2);
}

