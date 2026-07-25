/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051868C
 * Mangled: _Z17Pow2FromDimensioni
 * Demangled: Pow2FromDimension(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000518694 string=0x0000000000518698 "\ty"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Pow2FromDimension(int a1)
{
  int v1; // w9
  unsigned int v2; // w8
  bool v3; // cc

  v1 = 1;
  do
  {
    v2 = v1;
    v3 = v1 < a1;
    v1 *= 2;
  }
  while ( v3 );
  return v2;
}

