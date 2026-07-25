/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581EC4
 * Mangled: sub_581EC4
 * Demangled: sub_581EC4
 *
 * Callers: 9
 *   0x0000000000581FB4  sub_581FB4
 *   0x0000000000582044  sub_582044
 *   0x0000000000582140  sub_582140
 *   0x00000000005822B0  sub_5822B0
 *   0x00000000005826CC  sub_5826CC
 *   0x0000000000582768  sub_582768
 *   0x00000000005828C8  sub_5828C8
 *   0x00000000005829FC  sub_5829FC
 *   0x0000000000583248  sub_583248
 *
 * Callees: 3
 *   0x00000000001FE620  .abort
 *   0x0000000000581BAC  sub_581BAC
 *   0x0000000000581BD4  sub_581BD4
 *
 * Referenced strings: 15
 *   insn=0x0000000000581EE8 string=0x0000000000581EEC "S"
 *   insn=0x0000000000581EEC string=0x0000000000581EF0 "`"
 *   insn=0x0000000000581EF4 string=0x0000000000581EF8 "*"
 *   insn=0x0000000000581EFC string=0x0000000000581F00 "?0"
 *   insn=0x0000000000581F10 string=0x0000000000581F14 "a"
 *   insn=0x0000000000581F14 string=0x0000000000581F18 " "
 *   insn=0x0000000000581F24 string=0x0000000000581F28 "!"
 *   insn=0x0000000000581F34 string=0x0000000000581F38 "'"
 *   insn=0x0000000000581F54 string=0x0000000000581F58 ""
 *   insn=0x0000000000581F60 string=0x0000000000581F64 ""
 *   insn=0x0000000000581F88 string=0x0000000000581F8C "_@"
 *   insn=0x0000000000581F8C string=0x0000000000581F90 "s"
 *   insn=0x0000000000581F90 string=0x0000000000581F94 "!"
 *   insn=0x0000000000581F94 string=0x0000000000581F98 "T"
 *   insn=0x0000000000581F98 string=0x0000000000581F9C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_581EC4(char a1, char *a2, char *a3, unsigned __int64 *a4)
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
        result = sub_581BAC(a3, &v12);
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
        result = sub_581BD4(a3, &v12);
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

