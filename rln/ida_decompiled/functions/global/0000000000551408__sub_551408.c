/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000551408
 * Mangled: sub_551408
 * Demangled: sub_551408
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x0000000000202DD0  .wcslen
 *   0x000000000054C178  sub_54C178
 *   0x000000000054F6AC  sub_54F6AC
 *   0x00000000005513A0  sub_5513A0
 *
 * Referenced strings: 10
 *   insn=0x0000000000551414 string=0x0000000000551418 "x@"
 *   insn=0x0000000000551458 string=0x000000000055145C "B(@"
 *   insn=0x000000000055145C string=0x0000000000551460 "@"
 *   insn=0x0000000000551494 string=0x0000000000551498 "8"
 *   insn=0x000000000055149C string=0x00000000005514A0 "L"
 *   insn=0x00000000005514A0 string=0x00000000005514A4 "a"
 *   insn=0x00000000005514A8 string=0x00000000005514AC "!"
 *   insn=0x00000000005514BC string=0x00000000005514C0 "c0@"
 *   insn=0x00000000005514C0 string=0x00000000005514C4 "`"
 *   insn=0x00000000005514D8 string=0x00000000005514DC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_551408(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        const struct tm *a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  __int64 v8; // x24
  wchar_t v11; // w21
  wchar_t v12; // w20
  void *v13; // x23
  void *v14; // x24
  wchar_t v15; // w6
  int v16; // w0
  wchar_t v19[4]; // [xsp+50h] [xbp+50h] BYREF
  wchar_t v20[128]; // [xsp+60h] [xbp+60h] BYREF

  v8 = a4 + 208;
  v11 = a7;
  v12 = a8;
  v13 = sub_54F6AC(a4 + 208);
  v14 = sub_5513A0(v8);
  v19[0] = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 80LL))(v13, 37);
  if ( v12 )
  {
    v15 = v11;
    v19[3] = 0;
  }
  else
  {
    v12 = v11;
    v15 = 0;
  }
  v19[2] = v15;
  v19[1] = v12;
  sub_54C178((__int64)v14, v20, 0x80u, v19, a6);
  v16 = wcslen(v20);
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, wchar_t *, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, v20, v16);
  return a2;
}

