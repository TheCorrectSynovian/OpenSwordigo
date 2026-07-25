/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F714
 * Mangled: sub_54F714
 * Demangled: sub_54F714
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054F6AC  sub_54F6AC
 *
 * Referenced strings: 26
 *   insn=0x000000000054F720 string=0x000000000054F724 "`@"
 *   insn=0x000000000054F764 string=0x000000000054F768 "E"
 *   insn=0x000000000054F76C string=0x000000000054F770 "4"
 *   insn=0x000000000054F770 string=0x000000000054F794 "s"
 *   insn=0x000000000054F788 string=0x000000000054F78C "?"
 *   insn=0x000000000054F7A4 string=0x000000000054F7A8 "a"
 *   insn=0x000000000054F7AC string=0x000000000054F7B0 "c0@"
 *   insn=0x000000000054F7B0 string=0x000000000054F7B4 "`"
 *   insn=0x000000000054F7BC string=0x000000000054F7C0 "a"
 *   insn=0x000000000054F7C0 string=0x000000000054F7C4 "{"
 *   insn=0x000000000054F7C0 string=0x000000000054F76C "a"
 *   insn=0x000000000054F7D4 string=0x000000000054F7D8 "a"
 *   insn=0x000000000054F7E4 string=0x000000000054F7E8 ""
 *   insn=0x000000000054F7EC string=0x000000000054F7F0 "`"
 *   insn=0x000000000054F7F0 string=0x000000000054F7FC "c""
 *   insn=0x000000000054F7F4 string=0x000000000054F7F8 "a"
 *   insn=0x000000000054F810 string=0x000000000054F814 "a\n@"
 *   insn=0x000000000054F820 string=0x000000000054F824 "`"
 *   insn=0x000000000054F82C string=0x000000000054F830 "$"
 *   insn=0x000000000054F850 string=0x000000000054F854 "s"
 *   insn=0x000000000054F868 string=0x000000000054F86C " "
 *   insn=0x000000000054F86C string=0x000000000054F870 "4"
 *   insn=0x000000000054F874 string=0x000000000054F878 "A"
 *   insn=0x000000000054F8A8 string=0x000000000054F8AC ""
 *   insn=0x000000000054F8B8 string=0x000000000054F8BC "B4@"
 *   insn=0x000000000054F8BC string=0x000000000054F8C0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_54F714(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int *a7,
        unsigned int *a8)
{
  void *v15; // x21
  int i; // w20
  __int64 v17; // x1
  _DWORD *v18; // x0
  unsigned __int8 v19; // w0
  __int64 v20; // x1
  unsigned int *v21; // x19
  __int64 v22; // x6
  __int64 v23; // x7
  unsigned __int64 v24; // x24
  unsigned __int8 v25; // w1
  __int64 v28; // [xsp+68h] [xbp+68h]

  v15 = sub_54F6AC(a4 + 208);
  for ( i = (unsigned __int8)a3; a8 != a7; a3 = v24 & 0xFFFFFFFFFFFFFF00LL | v25 )
  {
    while ( (*(unsigned __int8 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v15 + 96LL))(v15, *a7, 0) != 37 )
    {
      v17 = *a7;
      if ( !i )
      {
        v18 = (_DWORD *)a2[5];
        if ( (unsigned __int64)v18 >= a2[6] )
        {
          LODWORD(v17) = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 104LL))(a2, v17);
        }
        else
        {
          *v18 = v17;
          a2[5] = v18 + 1;
        }
        i = v17 == -1;
      }
      if ( a8 == ++a7 )
        return a2;
    }
    if ( a8 == a7 + 1 )
      return a2;
    v19 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v15 + 96LL))(v15, a7[1], 0);
    if ( v19 == 79 || v19 == 69 )
    {
      v28 = v19;
      if ( a8 == a7 + 2 )
        return a2;
      v20 = a7[2];
      v21 = a7 + 2;
      v22 = (*(unsigned __int8 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v15 + 96LL))(v15, v20, 0);
      v23 = v28;
    }
    else
    {
      v22 = v19;
      v21 = a7 + 1;
      v23 = 0;
    }
    v24 = a3 & 0xFFFFFFFFFFFFFF00LL | (unsigned __int8)i;
    a7 = v21 + 1;
    a2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
                     a1,
                     a2,
                     v24,
                     a4,
                     a5,
                     a6,
                     v22,
                     v23);
    i = v25;
  }
  return a2;
}

