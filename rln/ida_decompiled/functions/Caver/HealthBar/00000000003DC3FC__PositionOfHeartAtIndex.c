/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DC3FC
 * Mangled: _ZN5Caver9HealthBar22PositionOfHeartAtIndexEi
 * Demangled: Caver::HealthBar::PositionOfHeartAtIndex(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000003DC3FC string=0x000000000058493C "fff?"
 *   insn=0x00000000003DC400 string=0x00000000003DC404 " =I"
 *   insn=0x00000000003DC404 string=0x00000000003DC408 "\t D9  "
 *   insn=0x00000000003DC408 string=0x00000000003DC40C "  "
 *   insn=0x00000000003DC40C string=0x00000000003DC410 ")"
 *   insn=0x00000000003DC410 string=0x00000000003DC414 "\t"
 *   insn=0x00000000003DC420 string=0x00000000003DC424 "?"
 *   insn=0x00000000003DC424 string=0x00000000003DC428 ")"
 *   insn=0x00000000003DC428 string=0x00000000003DC42C ")}"
 *   insn=0x00000000003DC42C string=0x00000000003DC430 ")"
 *   insn=0x00000000003DC430 string=0x00000000003DC434 "%"
 *   insn=0x00000000003DC438 string=0x00000000003DC43C "B$"
 *   insn=0x00000000003DC43C string=0x00000000003DC440 "!(%"
 *   insn=0x00000000003DC440 string=0x00000000003DC444 "b(""
 *   insn=0x00000000003DC444 string=0x00000000003DC448 "!$"
 *   insn=0x00000000003DC448 string=0x00000000003DC44C "A8!"
 *   insn=0x00000000003DC450 string=0x00000000003DC458 """
 *   insn=0x00000000003DC458 string=0x00000000003DC45C "\t"
 *   insn=0x00000000003DC46C string=0x00000000003DC470 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::HealthBar::PositionOfHeartAtIndex@<S0>(
        Caver::HealthBar *this@<X0>,
        int a2@<W1>,
        __int64 a3@<X8>)
{
  float v3; // s1
  float v4; // s0
  float v5; // s1
  int v6; // w9
  float result; // s0

  v3 = *((float *)this + 71);
  v4 = v3 * 0.9;
  if ( *((_BYTE *)this + 264) )
    v5 = (float)(*((float *)this + 33) + (float)(*((float *)this + 35) * 0.5))
       - (float)((float)(v3 + (float)((float)(v3 * 0.9) * (float)(*((_DWORD *)this + 67) / 2 - 1))) * 0.5);
  else
    v5 = 0.0;
  v6 = *((_DWORD *)this + 34);
  result = roundf((float)(v4 * (float)a2) + v5);
  *(float *)a3 = result;
  *(_DWORD *)(a3 + 4) = v6;
  return result;
}

