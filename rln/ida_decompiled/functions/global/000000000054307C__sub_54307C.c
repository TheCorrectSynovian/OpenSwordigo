/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054307C
 * Mangled: sub_54307C
 * Demangled: sub_54307C
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203230  .strlen
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005423A0  sub_5423A0
 *   0x000000000054241C  sub_54241C
 *   0x0000000000542B74  sub_542B74
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x000000000054309C string=0x00000000005430A0 "d"
 *   insn=0x00000000005430B4 string=0x00000000005430B8 "."
 *   insn=0x00000000005430B8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000005430D8 string=0x0000000000543170 "V"
 *   insn=0x00000000005430E4 string=0x00000000005430E8 ""
 *   insn=0x00000000005430F0 string=0x00000000005430F4 "a"
 *   insn=0x0000000000543100 string=0x0000000000543104 "`"
 *   insn=0x0000000000543108 string=0x000000000054310C "B(@"
 *   insn=0x000000000054310C string=0x0000000000543110 "@"
 *   insn=0x0000000000543134 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000054315C string=0x0000000000543160 "! @"
 *   insn=0x0000000000543160 string=0x0000000000543164 "!"
 *   insn=0x000000000054317C string=0x0000000000543180 "x"
 *   insn=0x0000000000543188 string=0x000000000054318C "?"
 *   insn=0x000000000054318C string=0x0000000000543190 "!"
 *   insn=0x0000000000543194 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005431B4 string=0x00000000005431B8 "n"
 *   insn=0x00000000005431B4 string=0x00000000005431D0 "h"
 *   insn=0x00000000005431C4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005431E8 string=0x00000000005431EC "!"
 *   insn=0x00000000005431F0 string=0x00000000005431F4 "b"
 *   insn=0x00000000005431F4 string=0x0000000000543200 "\"
 *   insn=0x000000000054323C string=0x0000000000543240 "X"
 *   insn=0x0000000000543254 string=0x0000000000543258 "u~@"
 *   insn=0x0000000000543258 string=0x000000000054325C "5\t"
 *   insn=0x000000000054325C string=0x0000000000543260 "vv@"
 *   insn=0x0000000000543260 string=0x0000000000543264 "`"
 *   insn=0x000000000054326C string=0x0000000000543270 "@"
 *   insn=0x0000000000543270 string=0x0000000000543274 "d"
 *   insn=0x0000000000543270 string=0x0000000000543318 "`z@"
 *   insn=0x0000000000543280 string=0x0000000000543284 """
 *   insn=0x0000000000543294 string=0x0000000000543298 "!"
 *   insn=0x00000000005432AC string=0x00000000005432B0 "! @"
 *   insn=0x00000000005432B0 string=0x00000000005432B4 "!"
 *   insn=0x00000000005432BC string=0x00000000005432C0 "`"
 *   insn=0x00000000005432C4 string=0x00000000005432C8 "s"
 *   insn=0x00000000005432C8 string=0x00000000005432CC "`"
 *   insn=0x00000000005432CC string=0x00000000005432D0 "`"
 *   insn=0x00000000005432D4 string=0x00000000001F85C0 "0'"
 *   insn=0x00000000005432DC string=0x00000000005432E0 "`v@"
 *   insn=0x00000000005432E8 string=0x00000000005432EC "!"
 *   insn=0x00000000005432EC string=0x00000000005432F0 " "
 *   insn=0x00000000005432F4 string=0x00000000005432F8 "`"
 *   insn=0x0000000000543324 string=0x0000000000543328 "B(@"
 *   insn=0x0000000000543328 string=0x000000000054332C "@"
 *   insn=0x0000000000543330 string=0x0000000000543334 "`"
 *   insn=0x0000000000543334 string=0x0000000000543338 " "
 *   insn=0x0000000000543338 string=0x000000000054333C "`"
 *   insn=0x0000000000543344 string=0x0000000000543348 " "
 *   insn=0x000000000054334C string=0x0000000000543350 "!"
 *   insn=0x0000000000543354 string=0x0000000000543358 "! @"
 *   insn=0x0000000000543358 string=0x000000000054335C "!"
 *   insn=0x00000000005433C4 string=0x00000000005433C8 "?"
 *   insn=0x00000000005433CC string=0x00000000005433D0 "p"
 *   insn=0x00000000005433F8 string=0x00000000005433FC "!"
 *   insn=0x0000000000543400 string=0x0000000000543404 "b"
 *   insn=0x0000000000543404 string=0x0000000000543408 "b"
 *   insn=0x0000000000543414 string=0x0000000000543418 "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_54307C(
        __int64 *a1,
        char *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        char a11,
        __int64 a12)
{
  size_t v14; // x23
  unsigned __int64 v15; // x0
  _DWORD *v16; // x24
  __int64 v17; // x1
  __int64 v18; // x0
  char *v19; // x19
  _DWORD *v20; // x20
  char *v21; // x22
  unsigned int v22; // t1

  if ( a2 )
  {
    v14 = strlen(a2);
    v15 = 4 * v14;
    if ( v14 > 0x1FC0000000000000LL )
      v15 = -1;
    v16 = (_DWORD *)operator new[](v15);
    if ( v14 )
    {
      v17 = (unsigned __int8)*a2;
      v18 = *(__int64 *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 240);
      if ( !v18 )
LABEL_12:
        sub_5652C8(v18);
      v19 = a2 + 1;
      v20 = v16;
      v21 = &a2[v14];
      while ( 1 )
      {
        *v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 80LL))(v18, v17);
        if ( v19 == v21 )
          break;
        ++v20;
        v22 = (unsigned __int8)*v19++;
        v17 = v22;
        v18 = *(__int64 *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 240);
        if ( !v18 )
          goto LABEL_12;
      }
    }
    sub_542B74(a1, (__int64)v16, v14);
    operator delete[](v16);
  }
  else
  {
    sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
  }
  return a1;
}

