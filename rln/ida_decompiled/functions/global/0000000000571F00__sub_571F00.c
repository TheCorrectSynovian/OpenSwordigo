/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571F00
 * Mangled: sub_571F00
 * Demangled: sub_571F00
 *
 * Callers: 14
 *   0x0000000000572000  sub_572000
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005761AC  sub_5761AC
 *   0x00000000005762BC  sub_5762BC
 *   0x00000000005764B0  sub_5764B0
 *   0x0000000000576A34  sub_576A34
 *   0x0000000000576FE0  sub_576FE0
 *   0x00000000005776A4  sub_5776A4
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577E84  sub_577E84
 *   0x0000000000577FB4  sub_577FB4
 *   0x000000000057F3DC  sub_57F3DC
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000571F08 string=0x0000000000571F18 "e"
 *   insn=0x0000000000571F20 string=0x0000000000571F24 "e"
 *   insn=0x0000000000571F2C string=0x0000000000571F80 "b"
 *   insn=0x0000000000571F2C string=0x0000000000571F84 "C"
 *   insn=0x0000000000571F40 string=0x0000000000571F44 "j"
 *   insn=0x0000000000571F48 string=0x0000000000571F4C ""
 *   insn=0x0000000000571F60 string=0x0000000000571F64 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_571F00(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // x0
  int v5; // w4
  __int64 v6; // x7

  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 11:
    case 33:
    case 43:
    case 45:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 60:
    case 61:
    case 63:
    case 75:
    case 76:
      if ( !a3 )
        return 0;
      goto LABEL_9;
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 51:
    case 52:
    case 53:
    case 59:
    case 62:
    case 66:
    case 67:
    case 68:
    case 72:
    case 73:
    case 74:
      if ( a3 )
        goto LABEL_5;
      return 0;
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 41:
    case 46:
    case 47:
LABEL_5:
      v5 = *(_DWORD *)(a1 + 40);
      if ( v5 < *(_DWORD *)(a1 + 44) )
        goto LABEL_6;
      return 0;
    case 42:
    case 48:
LABEL_9:
      if ( !a4 )
        return 0;
      v5 = *(_DWORD *)(a1 + 40);
      if ( v5 >= *(_DWORD *)(a1 + 44) )
        return 0;
LABEL_6:
      v6 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 40) = v5 + 1;
      result = v6 + 24LL * v5;
      if ( !result )
        return 0;
      *(_DWORD *)(v6 + 24LL * v5) = a2;
      *(_QWORD *)(result + 8) = a3;
      *(_QWORD *)(result + 16) = a4;
      return result;
    default:
      return 0;
  }
}

