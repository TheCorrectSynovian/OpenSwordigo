/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B23E4
 * Mangled: _ZN5Caver9Rectangle24ExpandToincludeRectangleERKS0_
 * Demangled: Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000004B23EC string=0x00000000004B23F0 "   "
 *   insn=0x00000000004B23F4 string=0x00000000004B2414 "#@"
 *   insn=0x00000000004B2404 string=0x00000000004B2408 "#"
 *   insn=0x00000000004B2408 string=0x00000000004B240C " "
 *   insn=0x00000000004B240C string=0x00000000004B2410 "a"
 *   insn=0x00000000004B2418 string=0x00000000004B241C "!(#"
 *   insn=0x00000000004B241C string=0x00000000004B2420 "  ""
 *   insn=0x00000000004B2420 string=0x00000000004B2424 "m"
 *   insn=0x00000000004B2424 string=0x00000000004B2428 " 8 "
 *   insn=0x00000000004B2424 string=0x00000000004B2430 "!"
 *   insn=0x00000000004B2438 string=0x00000000004B243C "   "
 *   insn=0x00000000004B2440 string=0x00000000004B2460 "#"
 *   insn=0x00000000004B2450 string=0x00000000004B2454 "#"
 *   insn=0x00000000004B2454 string=0x00000000004B2458 " "
 *   insn=0x00000000004B2458 string=0x00000000004B245C "a"
 *   insn=0x00000000004B2464 string=0x00000000004B2468 "!(#"
 *   insn=0x00000000004B2468 string=0x00000000004B246C "  ""
 *   insn=0x00000000004B246C string=0x00000000004B2470 "m"
 *   insn=0x00000000004B2470 string=0x00000000004B2474 " 8 "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle *this, const Caver::Rectangle *a2)
{
  float v2; // s1
  float v3; // s0
  float v4; // s2
  float v5; // s1
  float v6; // s1
  float result; // s0
  float v8; // s2
  float v9; // s1

  v2 = *(float *)a2;
  v3 = *(float *)this;
  v4 = *((float *)this + 2);
  if ( *(float *)a2 < *(float *)this )
  {
    v4 = (float)(v3 + v4) - v2;
    *((float *)this + 2) = v4;
    *(float *)this = v2;
    v3 = v2;
    v2 = *(float *)a2;
  }
  v5 = v2 + *((float *)a2 + 2);
  if ( v5 > (float)(v3 + v4) )
    *((float *)this + 2) = v5 - v3;
  v6 = *((float *)a2 + 1);
  result = *((float *)this + 1);
  v8 = *((float *)this + 3);
  if ( v6 < result )
  {
    v8 = (float)(result + v8) - v6;
    *((float *)this + 3) = v8;
    *((float *)this + 1) = v6;
    result = v6;
    v6 = *((float *)a2 + 1);
  }
  v9 = v6 + *((float *)a2 + 3);
  if ( v9 > (float)(result + v8) )
  {
    result = v9 - result;
    *((float *)this + 3) = result;
  }
  return result;
}

