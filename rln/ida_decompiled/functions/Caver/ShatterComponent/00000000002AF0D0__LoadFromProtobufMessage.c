/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF0D0
 * Mangled: _ZN5Caver16ShatterComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ShatterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002AF0D0 string=0x00000000001FA840 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShatterComponent::LoadFromProtobufMessage(
        Caver::ShatterComponent *this,
        const Caver::Proto::Component *a2)
{
  return Caver::Component::LoadFromProtobufMessage(this, a2);
}

