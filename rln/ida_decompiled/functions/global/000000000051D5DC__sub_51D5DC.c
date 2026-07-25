/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D5DC
 * Mangled: sub_51D5DC
 * Demangled: sub_51D5DC
 *
 * Callers: 3
 *   0x000000000051D768  sub_51D768
 *   0x000000000051D874  sub_51D874
 *   0x000000000051D9B4  __gxx_personality_v0
 *
 * Callees: 2
 *   0x00000000001FE620  .abort
 *   0x000000000051D59C  sub_51D59C
 *
 * Referenced strings: 17
 *   insn=0x000000000051D5F4 string=0x000000000051D5F8 "`"
 *   insn=0x000000000051D5F4 string=0x000000000051D6D0 "B"
 *   insn=0x000000000051D5FC string=0x000000000051D600 "I"
 *   insn=0x000000000051D600 string=0x000000000051D604 ""
 *   insn=0x000000000051D608 string=0x000000000051D610 " H`8a"
 *   insn=0x000000000051D610 string=0x000000000051D614 "a"
 *   insn=0x000000000051D614 string=0x000000000051D618 " "
 *   insn=0x000000000051D628 string=0x000000000051D62C "d\n"
 *   insn=0x000000000051D628 string=0x000000000051D644 "a"
 *   insn=0x000000000051D630 string=0x000000000051D634 "B"
 *   insn=0x000000000051D634 string=0x000000000051D638 "!"
 *   insn=0x000000000051D638 string=0x000000000051D63C "S"
 *   insn=0x000000000051D63C string=0x000000000051D640 "!"
 *   insn=0x000000000051D6C0 string=0x000000000051D6C4 "!"
 *   insn=0x000000000051D6C4 string=0x000000000051D6C8 "f"
 *   insn=0x000000000051D6D0 string=0x000000000051D6D4 "@"
 *   insn=0x000000000051D6DC string=0x000000000051D6E0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_51D5DC(char a1, char *a2, char *a3, unsigned __int64 *a4)
{
  char *result; // x0
  unsigned __int64 v7; // x1
  int v8; // w5
  char v9; // t1
  unsigned __int64 v10; // x4
  unsigned __int64 v11; // x2
  unsigned __int64 *v12; // [xsp+20h] [xbp+20h]
  char *v13; // [xsp+28h] [xbp+28h]
  _QWORD *v14; // [xsp+38h] [xbp+38h] BYREF

  if ( a1 == 80 )
  {
    v11 = (unsigned __int64)(a3 + 7);
    result = (char *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    *a4 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    switch ( a1 & 0xF )
    {
      case 0:
      case 4:
      case 0xC:
        result = a3 + 8;
        v7 = *(_QWORD *)a3;
        break;
      case 1:
        result = a3;
        v7 = 0;
        v8 = 0;
        do
        {
          v9 = *result++;
          v10 = (unsigned __int64)(v9 & 0x7F) << v8;
          v8 += 7;
          v7 |= v10;
        }
        while ( v9 < 0 );
        break;
      case 2:
        result = a3 + 2;
        v7 = *(unsigned __int16 *)a3;
        break;
      case 3:
        result = a3 + 4;
        v7 = *(unsigned int *)a3;
        break;
      case 9:
        v12 = a4;
        v13 = a3;
        result = sub_51D59C(a3, &v14);
        v7 = (unsigned __int64)v14;
        a3 = v13;
        a4 = v12;
        break;
      case 0xA:
        result = a3 + 2;
        v7 = *(__int16 *)a3;
        break;
      case 0xB:
        result = a3 + 4;
        v7 = *(int *)a3;
        break;
      default:
        abort();
        return result;
    }
    if ( v7 )
    {
      if ( (a1 & 0x70) != 0x10 )
        a3 = a2;
      v7 += (unsigned __int64)a3;
      if ( a1 < 0 )
        v7 = *(_QWORD *)v7;
    }
    *a4 = v7;
  }
  return result;
}

