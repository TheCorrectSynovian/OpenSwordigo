/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002782F8
 * Mangled: _ZN5Caver17ItemDropComponent16RandomSingleItemEiPNS0_13ItemDropEntryE
 * Demangled: Caver::ItemDropComponent::RandomSingleItem(int,Caver::ItemDropComponent::ItemDropEntry *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Referenced strings: 15
 *   insn=0x000000000027830C string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000278318 string=0x000000000027831C "i#"
 *   insn=0x000000000027831C string=0x0000000000278320 ")"
 *   insn=0x0000000000278320 string=0x0000000000278324 "J"
 *   insn=0x0000000000278324 string=0x0000000000278328 "@"
 *   insn=0x000000000027832C string=0x0000000000278330 """
 *   insn=0x0000000000278338 string=0x000000000027833C "iB"
 *   insn=0x000000000027833C string=0x0000000000278340 "B"
 *   insn=0x0000000000278340 string=0x0000000000278344 "!"
 *   insn=0x0000000000278348 string=0x000000000027834C "#"
 *   insn=0x000000000027834C string=0x0000000000278350 "B(#"
 *   insn=0x0000000000278350 string=0x0000000000278354 "C( "
 *   insn=0x0000000000278354 string=0x0000000000278358 "  #"
 *   insn=0x0000000000278364 string=0x0000000000278368 ")"
 *   insn=0x0000000000278368 string=0x000000000027836C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ItemDropComponent::RandomSingleItem(Caver *a1, int a2, __int64 a3)
{
  int v5; // w8
  __int64 result; // x0
  float *v7; // x9
  float v8; // s2

  v5 = Caver::fastrandom(a1);
  if ( a2 < 1 )
    return 0xFFFFFFFFLL;
  result = 0;
  v7 = (float *)(a3 + 16);
  v8 = 0.0;
  while ( 1 )
  {
    v8 = v8 + *v7;
    if ( (float)((float)v5 / (float)Caver::FASTRANDOM_MAX) < (float)(v8 + 0.0001) )
      break;
    ++result;
    v7 += 8;
    if ( result >= a2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

