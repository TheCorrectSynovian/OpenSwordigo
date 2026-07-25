/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7410
 * Mangled: ._ZN5Caver5Proto22Texture_ConversionInfo9MergeFromERKS1_
 * Demangled: Caver::Proto::Texture_ConversionInfo::MergeFrom(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Callers: 4
 *   0x00000000002D1D18  Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(Caver::Proto::Texture_ConversionInfo const&)
 *   0x00000000002D2410  Caver::Proto::Texture_ConversionInfo::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D2414  Caver::Proto::Texture_ConversionInfo::CopyFrom(Caver::Proto::Texture_ConversionInfo const&)
 *   0x00000000002D25A0  Caver::Proto::Texture::Texture(Caver::Proto::Texture const&)
 *
 * Callees: 1
 *   0x00000000002D1D18  Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7418 string=0x00000000001F741C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::Texture_ConversionInfo::MergeFrom()
{
  JUMPOUT(0x2D1D64);
}

