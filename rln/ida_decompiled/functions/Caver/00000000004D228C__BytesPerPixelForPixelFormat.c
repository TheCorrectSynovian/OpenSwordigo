/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D228C
 * Mangled: _ZN5Caver27BytesPerPixelForPixelFormatENS_11PixelFormatE
 * Demangled: Caver::BytesPerPixelForPixelFormat(Caver::PixelFormat)
 *
 * Callers: 1
 *   0x00000000001FACD0  Caver::BytesPerPixelForPixelFormat(Caver::PixelFormat)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004D2294 string=0x00000000004D2298 ")"
 *   insn=0x00000000004D2298 string=0x00000000004D22A0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BytesPerPixelForPixelFormat(int a1)
{
  if ( (unsigned int)(a1 - 1) > 7 )
    return 0;
  else
    return (unsigned int)dword_598170[a1 - 1];
}

