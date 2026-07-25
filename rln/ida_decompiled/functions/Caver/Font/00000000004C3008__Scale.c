/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C3008
 * Mangled: _ZN5Caver4Font5ScaleEf
 * Demangled: Caver::Font::Scale(float)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FDD00  Caver::Rectangle::Scale(Caver::Vector2 const&)
 *
 * Referenced strings: 37
 *   insn=0x00000000004C3028 string=0x00000000004C302C "V"
 *   insn=0x00000000004C3034 string=0x00000000004C3038 ""
 *   insn=0x00000000004C3038 string=0x00000000004C303C "`2"
 *   insn=0x00000000004C3040 string=0x00000000004C3044 "`J@"
 *   insn=0x00000000004C304C string=0x00000000004C3050 "`J"
 *   insn=0x00000000004C3054 string=0x00000000004C3058 "*"
 *   insn=0x00000000004C3058 string=0x00000000004C305C "h&A"
 *   insn=0x00000000004C3058 string=0x00000000001FDD00 "0'"
 *   insn=0x00000000004C305C string=0x00000000004C3060 "?"
 *   insn=0x00000000004C3064 string=0x00000000004C3068 "yt"
 *   insn=0x00000000004C3078 string=0x00000000004C307C "y"
 *   insn=0x00000000004C3094 string=0x00000000004C3098 "\t"
 *   insn=0x00000000004C3098 string=0x00000000004C309C "\t"
 *   insn=0x00000000004C30A4 string=0x00000000004C30A8 "h&A"
 *   insn=0x00000000004C30A8 string=0x00000000004C30AC "?"
 *   insn=0x00000000004C30AC string=0x00000000004C30B0 "`"
 *   insn=0x00000000004C30B4 string=0x00000000004C30B8 "t"@"
 *   insn=0x00000000004C30B8 string=0x00000000004C30BC "("
 *   insn=0x00000000004C30BC string=0x00000000004C30C0 ""
 *   insn=0x00000000004C30C0 string=0x00000000004C30C4 "}"
 *   insn=0x00000000004C30E4 string=0x00000000004C30E8 "4"
 *   insn=0x00000000004C30E8 string=0x00000000004C30EC "u"
 *   insn=0x00000000004C30F4 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C3100 string=0x00000000004C3104 "t""
 *   insn=0x00000000004C3108 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004C3110 string=0x00000000004C3114 "h&A"
 *   insn=0x00000000004C3114 string=0x00000000004C3118 "Z"
 *   insn=0x00000000004C3118 string=0x00000000004C311C "*"
 *   insn=0x00000000004C311C string=0x00000000004C3120 "J"
 *   insn=0x00000000004C3120 string=0x00000000004C3124 "J}"
 *   insn=0x00000000004C3124 string=0x00000000004C3128 "_"
 *   insn=0x00000000004C3128 string=0x00000000004C312C "h"
 *   insn=0x00000000004C3130 string=0x00000000004C3134 "_"
 *   insn=0x00000000004C3134 string=0x00000000004C3138 "H"
 *   insn=0x00000000004C3144 string=0x00000000004C3148 "A"
 *   insn=0x00000000004C3148 string=0x00000000004C3170 "X"
 *   insn=0x00000000004C3170 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::Font::Scale(Caver::Font *this, float a2)
{
  void *result; // x0
  __int64 v5; // x8
  unsigned __int64 v6; // x23
  __int64 v7; // x8
  __int64 v8; // x9
  unsigned __int64 v9; // x26
  char *v10; // x20
  __int64 v11; // x27
  int v12; // w8
  char v13; // w28
  unsigned __int64 v14; // x10
  float v15; // [xsp+0h] [xbp-70h] BYREF
  float v16; // [xsp+4h] [xbp-6Ch]
  __int64 v17; // [xsp+8h] [xbp-68h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((float *)this + 18) = *((float *)this + 18) * a2;
  v15 = a2;
  v16 = a2;
  result = (void *)Caver::Rectangle::Scale((Caver::Font *)((char *)this + 76), (const Caver::Vector2 *)&v15);
  v5 = *((_QWORD *)this + 2);
  if ( *((_QWORD *)this + 3) != v5 )
  {
    v6 = 0;
    do
    {
      v7 = v5 + 44 * v6;
      *(_DWORD *)(v7 + 24) = llroundf((float)*(int *)(v7 + 24) * a2);
      v15 = a2;
      v16 = a2;
      result = (void *)Caver::Rectangle::Scale((Caver::Rectangle *)(v7 + 8), (const Caver::Vector2 *)&v15);
      v5 = *((_QWORD *)this + 2);
      v8 = *((_QWORD *)this + 3);
      if ( v8 == v5 )
        break;
      v9 = 0;
      do
      {
        v10 = (char *)*((_QWORD *)this + 8);
        v11 = 0x2E8BA2E8BA2E8BA3LL * ((v8 - v5) >> 2);
        if ( v10 )
          v12 = v10[(int)v9 + (int)v6 * (int)v11];
        else
          v12 = 0;
        v13 = llroundf((float)v12 * a2);
        if ( !v10 )
        {
          v10 = (char *)operator new[]((unsigned int)(v11 * v11));
          *((_QWORD *)this + 8) = v10;
          result = memset(v10, 0, (unsigned int)(v11 * v11));
        }
        v10[(int)v9 + (int)v6 * (int)v11] = v13;
        v5 = *((_QWORD *)this + 2);
        v8 = *((_QWORD *)this + 3);
        ++v9;
        v14 = 0x2E8BA2E8BA2E8BA3LL * ((v8 - v5) >> 2);
      }
      while ( v14 > v9 );
      ++v6;
    }
    while ( v14 > v6 );
  }
  return result;
}

