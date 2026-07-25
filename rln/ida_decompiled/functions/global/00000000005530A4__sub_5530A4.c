/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005530A4
 * Mangled: sub_5530A4
 * Demangled: sub_5530A4
 *
 * Callers: 7
 *   0x0000000000553280  sub_553280
 *   0x00000000005532C0  sub_5532C0
 *   0x0000000000553630  sub_553630
 *   0x0000000000553A38  sub_553A38
 *   0x0000000000553F40  sub_553F40
 *   0x00000000005542C8  sub_5542C8
 *   0x0000000000554584  sub_554584
 *
 * Callees: 3
 *   0x00000000001F6A30  .wmemset
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000054F6AC  sub_54F6AC
 *
 * Referenced strings: 44
 *   insn=0x00000000005530C0 string=0x00000000005530C4 "A"
 *   insn=0x00000000005530C8 string=0x00000000005530CC "?"
 *   insn=0x00000000005530D4 string=0x00000000005530D8 "?@"
 *   insn=0x00000000005530D8 string=0x00000000005530DC "`"
 *   insn=0x00000000005530F8 string=0x00000000005530FC "M"
 *   insn=0x00000000005530FC string=0x00000000001F6A30 "0'"
 *   insn=0x0000000000553100 string=0x0000000000553104 "`\n"
 *   insn=0x000000000055310C string=0x0000000000553110 "a"
 *   insn=0x0000000000553120 string=0x0000000000553124 "g"
 *   insn=0x0000000000553130 string=0x0000000000553134 "^"
 *   insn=0x0000000000553140 string=0x0000000000553144 "B(@"
 *   insn=0x0000000000553144 string=0x0000000000553148 "@"
 *   insn=0x0000000000553150 string=0x0000000000553154 "a"
 *   insn=0x0000000000553154 string=0x0000000000553158 "?"
 *   insn=0x000000000055315C string=0x0000000000553238 "aF"
 *   insn=0x0000000000553160 string=0x0000000000553164 "a"
 *   insn=0x0000000000553168 string=0x000000000055316C "B(@"
 *   insn=0x000000000055316C string=0x0000000000553170 "@"
 *   insn=0x0000000000553178 string=0x000000000055317C "a"
 *   insn=0x000000000055317C string=0x0000000000553180 "?"
 *   insn=0x0000000000553198 string=0x000000000055319C "B(@"
 *   insn=0x000000000055319C string=0x00000000005531A0 "@"
 *   insn=0x00000000005531A8 string=0x00000000005531AC "a"
 *   insn=0x00000000005531AC string=0x00000000005531B0 "?"
 *   insn=0x00000000005531B0 string=0x00000000005531B4 "a"
 *   insn=0x00000000005531B8 string=0x00000000005531BC "-"
 *   insn=0x00000000005531D0 string=0x00000000005531D4 "B(@"
 *   insn=0x00000000005531D4 string=0x00000000005531D8 "@"
 *   insn=0x00000000005531E0 string=0x00000000005531E4 "a"
 *   insn=0x00000000005531E4 string=0x00000000005531E8 "?"
 *   insn=0x00000000005531E8 string=0x00000000005531EC "`"
 *   insn=0x00000000005531EC string=0x0000000000553218 "s""
 *   insn=0x00000000005531F8 string=0x00000000005531FC "B(@"
 *   insn=0x00000000005531FC string=0x0000000000553200 "@"
 *   insn=0x0000000000553208 string=0x000000000055320C "a"
 *   insn=0x000000000055320C string=0x0000000000553210 "?"
 *   insn=0x0000000000553210 string=0x0000000000553214 "a"
 *   insn=0x0000000000553218 string=0x000000000055321C "`"
 *   insn=0x0000000000553220 string=0x0000000000553224 "V"
 *   insn=0x0000000000553224 string=0x0000000000553228 "`"
 *   insn=0x0000000000553228 string=0x000000000055322C "`"
 *   insn=0x000000000055322C string=0x0000000000553230 "`"
 *   insn=0x000000000055323C string=0x0000000000553240 "6"
 *   insn=0x000000000055326C string=0x0000000000553270 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wchar_t *__fastcall sub_5530A4(__int64 a1, wchar_t c, wchar_t *s1, wchar_t *s2, __int64 a5, __int64 n)
{
  wchar_t *v6; // x19
  int v8; // w1
  size_t v9; // x20
  __int64 v10; // x23
  __int64 v11; // x22
  void *v13; // x22
  int v14; // w0
  wchar_t v15; // w1
  int v16; // w0
  int v17; // w0
  int v18; // w0
  int v19; // w0
  size_t v20; // [xsp+40h] [xbp+40h]
  __int64 v21; // [xsp+40h] [xbp+40h]
  wchar_t *v22; // [xsp+48h] [xbp+48h]
  wchar_t *v23; // [xsp+48h] [xbp+48h]
  size_t v24; // [xsp+48h] [xbp+48h]

  v6 = s1;
  v8 = *(_DWORD *)(a1 + 24) & 0xB0;
  v9 = a5 - n;
  if ( v8 != 32 )
  {
    if ( v8 != 16 )
      goto LABEL_3;
    v21 = n;
    v23 = s2;
    v13 = sub_54F6AC(a1 + 208);
    v14 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 80LL))(v13, 45);
    s2 = v23;
    n = v21;
    v15 = *v23;
    if ( *v23 == v14
      || (v16 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 80LL))(v13, 43),
          s2 = v23,
          n = v21,
          v15 = *v23,
          *v23 == v16) )
    {
      *v6++ = v15;
      v10 = 1;
      v11 = 1;
      goto LABEL_4;
    }
    v17 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 80LL))(v13, 48);
    s2 = v23;
    n = v21;
    if ( *v23 != v17 )
      goto LABEL_3;
    if ( v21 > 1
      && ((v18 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 80LL))(v13, 120),
           s2 = v23,
           n = v21,
           v23[1] == v18)
       || (v19 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 80LL))(v13, 88),
           s2 = v23,
           n = v21,
           v23[1] == v19)) )
    {
      v6 += 2;
      v10 = 2;
      v11 = 2;
      *(v6 - 2) = *s2;
      *(v6 - 1) = s2[1];
    }
    else
    {
LABEL_3:
      v10 = 0;
      v11 = 0;
    }
LABEL_4:
    v20 = n;
    v22 = s2;
    wmemset(v6, c, v9);
    return wmemcpy(&v6[v9], &v22[v10], v20 - v11);
  }
  v24 = n;
  wmemcpy(s1, s2, n);
  return wmemset(&v6[v24], c, v9);
}

