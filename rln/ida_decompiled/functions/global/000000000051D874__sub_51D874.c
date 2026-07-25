/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D874
 * Mangled: sub_51D874
 * Demangled: sub_51D874
 *
 * Callers: 2
 *   0x000000000051D9B4  __gxx_personality_v0
 *   0x000000000051DEF0  __cxa_call_unexpected
 *
 * Callees: 2
 *   0x00000000001FE620  .abort
 *   0x000000000051D5DC  sub_51D5DC
 *
 * Referenced strings: 19
 *   insn=0x000000000051D890 string=0x000000000059CA84 """
 *   insn=0x000000000051D8B8 string=0x000000000051D8BC "`"
 *   insn=0x000000000051D8C0 string=0x000000000051D8C4 "!"
 *   insn=0x000000000051D8C4 string=0x000000000051D8C8 "B"
 *   insn=0x000000000051D8C8 string=0x000000000051D8CC "c"
 *   insn=0x000000000051D8CC string=0x000000000051D8D0 "B"
 *   insn=0x000000000051D8E0 string=0x000000000051D8E4 "?"
 *   insn=0x000000000051D8E4 string=0x000000000051D8E8 "I"
 *   insn=0x000000000051D8E8 string=0x000000000051D8EC "M"
 *   insn=0x000000000051D8F0 string=0x000000000051D8F4 "c"
 *   insn=0x000000000051D8F4 string=0x000000000051D8F8 "a"
 *   insn=0x000000000051D8F8 string=0x000000000051D8FC " "
 *   insn=0x000000000051D910 string=0x000000000051D914 "2"
 *   insn=0x000000000051D918 string=0x000000000051D91C "a"
 *   insn=0x000000000051D924 string=0x000000000051D928 "!@"
 *   insn=0x000000000051D928 string=0x000000000051D92C " "
 *   insn=0x000000000051D934 string=0x000000000051D944 "$"
 *   insn=0x000000000051D950 string=0x000000000051D954 "#"
 *   insn=0x000000000051D960 string=0x000000000051D964 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51D874(__int64 a1, __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  char *v7; // x23
  __int64 v8; // x2
  int v9; // w1
  char v10; // t1
  unsigned __int64 v11; // x0
  int v12; // w0
  __int64 v13; // x2
  unsigned __int64 v14; // x25
  __int64 v15; // x1
  __int64 result; // x0
  unsigned __int64 *v17; // [xsp+58h] [xbp+58h] BYREF

  v7 = (char *)(*(_QWORD *)(a1 + 24) + ~a4);
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = *v7++;
      v11 = (unsigned __int64)(v10 & 0x7F) << v9;
      v9 += 7;
      v8 |= v11;
    }
    while ( v10 < 0 );
    if ( !v8 )
      break;
    v12 = *(unsigned __int8 *)(a1 + 40);
    if ( v12 == 255 )
    {
      v13 = 0;
    }
    else
    {
      switch ( v12 & 7 )
      {
        case 0:
        case 4:
          v13 = -8 * v8;
          break;
        case 2:
          v13 = -2 * v8;
          break;
        case 3:
          v13 = -4 * v8;
          break;
        default:
          abort();
          return result;
      }
    }
    sub_51D5DC(v12, *(char **)(a1 + 16), (char *)(*(_QWORD *)(a1 + 24) + v13), (unsigned __int64 *)&v17);
    v14 = (unsigned __int64)v17;
    v15 = *a2;
    v17 = a3;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v15 + 16))(a2) )
      v17 = (unsigned __int64 *)*v17;
    result = (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64 *, unsigned __int64 **, __int64))(*(_QWORD *)v14 + 32LL))(
               v14,
               a2,
               &v17,
               1);
    if ( (_BYTE)result )
      return result;
  }
  return 0;
}

