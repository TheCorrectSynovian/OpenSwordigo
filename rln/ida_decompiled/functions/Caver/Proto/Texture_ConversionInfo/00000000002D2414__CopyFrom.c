/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2414
 * Mangled: _ZN5Caver5Proto22Texture_ConversionInfo8CopyFromERKS1_
 * Demangled: Caver::Proto::Texture_ConversionInfo::CopyFrom(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7410  Caver::Proto::Texture_ConversionInfo::MergeFrom(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D2428 string=0x00000000002D242C "@"
 *   insn=0x00000000002D2434 string=0x00000000002D2438 ""
 *   insn=0x00000000002D2450 string=0x00000000001F7410 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Texture_ConversionInfo::CopyFrom(
        Caver::Proto::Texture_ConversionInfo *this,
        const Caver::Proto::Texture_ConversionInfo *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Texture_ConversionInfo *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Texture_ConversionInfo::MergeFrom();
  }
}

