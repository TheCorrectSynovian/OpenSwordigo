/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2410
 * Mangled: _ZN5Caver5Proto22Texture_ConversionInfo21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Texture_ConversionInfo::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7410  Caver::Proto::Texture_ConversionInfo::MergeFrom(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D2410 string=0x00000000001F7410 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture_ConversionInfo::CheckTypeAndMergeFrom(
        Caver::Proto::Texture_ConversionInfo *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::Texture_ConversionInfo::MergeFrom();
}

