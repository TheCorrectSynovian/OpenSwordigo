/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570D4C
 * Mangled: sub_570D4C
 * Demangled: sub_570D4C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB980  .mbrtowc
 *
 * Referenced strings: 13
 *   insn=0x0000000000570D4C string=0x0000000000570D50 "_"
 *   insn=0x0000000000570D68 string=0x0000000000570D6C " "
 *   insn=0x0000000000570D88 string=0x0000000000570D8C "\n"
 *   insn=0x0000000000570D90 string=0x0000000000570D94 "s"
 *   insn=0x0000000000570DA4 string=0x0000000000570DA8 "6"
 *   insn=0x0000000000570DAC string=0x0000000000570DB0 "t"
 *   insn=0x0000000000570DC4 string=0x00000000001FB980 "0'"
 *   insn=0x0000000000570DC8 string=0x0000000000570DCC "_"
 *   insn=0x0000000000570DCC string=0x0000000000570DD0 "!"
 *   insn=0x0000000000570DD0 string=0x0000000000570DD4 "I"
 *   insn=0x0000000000570DD8 string=0x0000000000570DDC " "
 *   insn=0x0000000000570DE0 string=0x0000000000570DE4 "s"
 *   insn=0x0000000000570DF0 string=0x0000000000570DF4 "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570D4C(int a1, mbstate_t *a2, char *s, unsigned __int64 a4, __int64 a5)
{
  const char *v5; // x19
  __int64 v8; // x20
  unsigned int v9; // w22
  size_t v10; // x0
  mbstate_t p; // [xsp+48h] [xbp+48h] BYREF

  v5 = s;
  p = *a2;
  v8 = a5;
  v9 = 0;
  if ( (unsigned __int64)s < a4 && a5 )
  {
    do
    {
      v10 = mbrtowc(0, v5, a4 - (_QWORD)v5, &p);
      if ( v10 + 2 <= 1 )
        break;
      if ( v10 )
      {
        v5 += v10;
        *a2 = p;
        --v8;
        v9 += v10;
        if ( a4 <= (unsigned __int64)v5 )
          return v9;
      }
      else
      {
        --v8;
        ++v5;
        *a2 = p;
        ++v9;
        if ( a4 <= (unsigned __int64)v5 )
          return v9;
      }
    }
    while ( v8 );
  }
  return v9;
}

