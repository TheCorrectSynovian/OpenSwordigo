/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057FCC8
 * Mangled: sub_57FCC8
 * Demangled: sub_57FCC8
 *
 * Callers: 3
 *   0x00000000005801B0  sub_5801B0
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000580ACC  sub_580ACC
 *
 * Callees: 3
 *   0x00000000001FE620  .abort
 *   0x000000000057FC60  sub_57FC60
 *   0x000000000057FC88  sub_57FC88
 *
 * Referenced strings: 14
 *   insn=0x000000000057FCEC string=0x000000000057FCF0 "S"
 *   insn=0x000000000057FCF0 string=0x000000000057FCF4 "`"
 *   insn=0x000000000057FCF8 string=0x000000000057FCFC "*"
 *   insn=0x000000000057FD00 string=0x000000000057FD04 "?0"
 *   insn=0x000000000057FD08 string=0x000000000057FD84 "'"
 *   insn=0x000000000057FD14 string=0x000000000057FD18 "a"
 *   insn=0x000000000057FD18 string=0x000000000057FD1C " "
 *   insn=0x000000000057FD58 string=0x000000000057FD5C ""
 *   insn=0x000000000057FD64 string=0x000000000057FD68 ""
 *   insn=0x000000000057FD8C string=0x000000000057FD90 "_@"
 *   insn=0x000000000057FD90 string=0x000000000057FD94 "s"
 *   insn=0x000000000057FD94 string=0x000000000057FD98 "!"
 *   insn=0x000000000057FD98 string=0x000000000057FD9C "T"
 *   insn=0x000000000057FD9C string=0x000000000057FDA0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_57FCC8(char a1, char *a2, char *a3, unsigned __int64 *a4)
{
  char *v5; // x19
  _QWORD *v8; // x0
  char *result; // x0
  unsigned __int64 v10; // x1
  _QWORD *v11; // t1
  _QWORD *v12; // [xsp+38h] [xbp+38h] BYREF

  v5 = a3;
  if ( a1 == 80 )
  {
    v8 = (_QWORD *)((unsigned __int64)(a3 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v11 = (_QWORD *)*v8;
    result = (char *)(v8 + 1);
    v10 = (unsigned __int64)v11;
  }
  else
  {
    switch ( a1 & 0xF )
    {
      case 0:
      case 4:
      case 0xC:
        result = a3 + 8;
        v10 = *(_QWORD *)a3;
        break;
      case 1:
        result = sub_57FC60(a3, &v12);
        goto LABEL_6;
      case 2:
        result = a3 + 2;
        v10 = *(unsigned __int16 *)a3;
        break;
      case 3:
        result = a3 + 4;
        v10 = *(unsigned int *)a3;
        break;
      case 9:
        result = sub_57FC88(a3, &v12);
LABEL_6:
        v10 = (unsigned __int64)v12;
        break;
      case 0xA:
        result = a3 + 2;
        v10 = *(__int16 *)a3;
        break;
      case 0xB:
        result = a3 + 4;
        v10 = *(int *)a3;
        break;
      default:
        abort();
        return result;
    }
    if ( v10 )
    {
      if ( (a1 & 0x70) != 0x10 )
        v5 = a2;
      v10 += (unsigned __int64)v5;
      if ( a1 < 0 )
        v10 = *(_QWORD *)v10;
    }
  }
  *a4 = v10;
  return result;
}

