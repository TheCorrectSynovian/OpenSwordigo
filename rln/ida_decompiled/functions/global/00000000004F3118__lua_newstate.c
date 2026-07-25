/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3118
 * Mangled: _Z12lua_newstatePFPvS_S_mmES_
 * Demangled: lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *
 * Callers: 1
 *   0x0000000000200680  lua_newstate(void * (*)(void *,void *,ulong,ulong),void *)
 *
 * Callees: 4
 *   0x00000000001FBC40  .memset
 *   0x00000000004EB998  sub_4EB998
 *   0x00000000004F3230  sub_4F3230
 *   0x00000000004F3344  sub_4F3344
 *
 * Referenced strings: 23
 *   insn=0x00000000004F3148 string=0x00000000004F314C "h"
 *   insn=0x00000000004F314C string=0x00000000004F3150 "\t!"
 *   insn=0x00000000004F3150 string=0x00000000004F3154 "*"
 *   insn=0x00000000004F315C string=0x00000000004F3160 "i"
 *   insn=0x00000000004F3160 string=0x00000000004F3164 "i"
 *   insn=0x00000000004F3164 string=0x00000000004F3168 "jb"
 *   insn=0x00000000004F3168 string=0x00000000004F316C "j"
 *   insn=0x00000000004F316C string=0x00000000004F3170 "h"
 *   insn=0x00000000004F3170 string=0x00000000004F3174 "M"
 *   insn=0x00000000004F3174 string=0x00000000004F3178 "`"
 *   insn=0x00000000004F3178 string=0x00000000004F317C "`"
 *   insn=0x00000000004F317C string=0x00000000004F3180 "`"
 *   insn=0x00000000004F3180 string=0x00000000004F3184 "`"
 *   insn=0x00000000004F3188 string=0x00000000004F318C "`b"
 *   insn=0x00000000004F31A4 string=0x00000000004F31A8 "u"
 *   insn=0x00000000004F31BC string=0x00000000004F31C0 "s"
 *   insn=0x00000000004F31DC string=0x00000000004F31E0 "k"
 *   insn=0x00000000004F31E0 string=0x00000000004F31E4 "i"
 *   insn=0x00000000004F31E4 string=0x00000000004F31E8 "s*"
 *   insn=0x00000000004F31E8 string=0x00000000004F31EC "h"
 *   insn=0x00000000004F31EC string=0x00000000004F31F0 "`"
 *   insn=0x00000000004F31F4 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004F3210 string=0x00000000004F3214 "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_newstate(void *(*a1)(void *, void *, unsigned __int64, unsigned __int64), void *a2)
{
  char *v4; // x0
  __int64 v5; // x19

  v4 = (char *)a1(a2, 0, 0, 616u);
  v5 = (__int64)v4;
  if ( v4 )
  {
    strcpy(v4 + 8, "\ba");
    v4[216] = 33;
    *((_QWORD *)v4 + 4) = v4 + 184;
    *(_OWORD *)(v4 + 168) = 0u;
    *(_OWORD *)(v4 + 40) = 0u;
    *(_OWORD *)(v4 + 184) = 0u;
    *((_OWORD *)v4 + 15) = 0u;
    *((_OWORD *)v4 + 16) = 0u;
    *(_QWORD *)v4 = 0;
    *((_QWORD *)v4 + 8) = 0;
    *((_DWORD *)v4 + 22) = 0;
    *((_QWORD *)v4 + 13) = 0;
    *((_QWORD *)v4 + 14) = 0;
    *((_QWORD *)v4 + 25) = a1;
    *((_QWORD *)v4 + 26) = a2;
    *((_QWORD *)v4 + 19) = 0;
    *((_QWORD *)v4 + 10) = 0;
    *((_DWORD *)v4 + 32) = 0;
    *(_QWORD *)(v4 + 92) = 0;
    *((_QWORD *)v4 + 45) = v4;
    *((_QWORD *)v4 + 36) = 0;
    *((_QWORD *)v4 + 37) = 0;
    *((_DWORD *)v4 + 88) = 0;
    *((_QWORD *)v4 + 34) = 0;
    *((_QWORD *)v4 + 42) = 0;
    v4[217] = 0;
    *((_DWORD *)v4 + 55) = 0;
    *((_QWORD *)v4 + 40) = 0;
    *((_WORD *)v4 + 50) = 256;
    *((_QWORD *)v4 + 49) = v4 + 368;
    *((_QWORD *)v4 + 50) = v4 + 368;
    *((_QWORD *)v4 + 28) = v4;
    *((_QWORD *)v4 + 29) = v4 + 224;
    *((_QWORD *)v4 + 38) = 616;
    *((_QWORD *)v4 + 41) = 0xC8000000C8LL;
    memset(v4 + 408, 0, 0x48u);
    if ( (unsigned int)sub_4EB998(v5, (void (*)(void))sub_4F3230) )
    {
      sub_4F3344(v5);
      return 0;
    }
  }
  return v5;
}

