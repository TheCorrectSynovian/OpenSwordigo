/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201410
 * Mangled: ._ZN5Caver7Texture16CreateSubtextureERKNS_9RectangleEf
 * Demangled: Caver::Texture::CreateSubtexture(Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Callees: 1
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201418 string=0x000000000020141C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Texture::CreateSubtexture()
{
  JUMPOUT(0x4C8F18);
}

