/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9610
 * Mangled: ._ZN5Caver23ConvertFromFileBuffer16EPhi
 * Demangled: Caver::ConvertFromFileBuffer16(uchar *,int)
 *
 * Callers: 1
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D0C5C  Caver::ConvertFromFileBuffer16(uchar *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9618 string=0x00000000001F961C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ConvertFromFileBuffer16(Caver *this, unsigned __int8 *a2, int a3)
{
  return _ZN5Caver23ConvertFromFileBuffer16EPhi(this, a2, a3);
}

