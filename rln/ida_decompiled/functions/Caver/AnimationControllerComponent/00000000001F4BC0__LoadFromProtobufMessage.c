/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4BC0
 * Mangled: ._ZN5Caver28AnimationControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::AnimationControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000002568EC  Caver::CharAnimControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x000000000021C504  Caver::AnimationControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4BC8 string=0x00000000001F4BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimationControllerComponent::LoadFromProtobufMessage(
        Caver::AnimationControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver28AnimationControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

