/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7D50
 * Mangled: ._ZN5Caver5Proto15SpriteComponent16default_instanceEv
 * Demangled: Caver::Proto::SpriteComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000023C100  Caver::SpriteComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F98C4  Caver::Proto::SpriteComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7D58 string=0x00000000001F7D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SpriteComponent::default_instance(Caver::Proto::SpriteComponent *this)
{
  return _ZN5Caver5Proto15SpriteComponent16default_instanceEv(this);
}

