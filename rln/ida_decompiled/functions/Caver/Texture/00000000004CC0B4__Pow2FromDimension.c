/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC0B4
 * Mangled: _ZN5Caver7Texture17Pow2FromDimensionEi
 * Demangled: Caver::Texture::Pow2FromDimension(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004CC0BC string=0x00000000004CC0C0 "x"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::Pow2FromDimension(Caver::Texture *this, int a2)
{
  int v2; // w8
  __int64 result; // x0
  bool v4; // cc

  v2 = 1;
  do
  {
    result = (unsigned int)v2;
    v4 = v2 < a2;
    v2 *= 2;
  }
  while ( v4 );
  return result;
}

