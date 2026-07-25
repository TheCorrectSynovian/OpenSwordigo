/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C5B8
 * Mangled: sub_56C5B8
 * Demangled: sub_56C5B8
 *
 * Callers: 22
 *   0x0000000000544B60  sub_544B60
 *   0x000000000054D924  sub_54D924
 *   0x000000000054DC04  sub_54DC04
 *   0x000000000056C650  sub_56C650
 *   0x000000000056D754  sub_56D754
 *   0x000000000056D7F4  sub_56D7F4
 *   0x000000000056D97C  sub_56D97C
 *   0x000000000056DA58  sub_56DA58
 *   0x000000000056DF24  sub_56DF24
 *   0x000000000056E000  sub_56E000
 *   0x000000000056E0DC  sub_56E0DC
 *   0x000000000056E200  sub_56E200
 *   0x000000000056E28C  sub_56E28C
 *   0x000000000056E318  sub_56E318
 *   0x000000000056EB28  sub_56EB28
 *   0x000000000056ECAC  sub_56ECAC
 *   0x000000000056EFD4  sub_56EFD4
 *   0x000000000056F2A0  sub_56F2A0
 *   0x000000000056F378  sub_56F378
 *   0x000000000056F43C  sub_56F43C
 *   0x000000000056F4F8  sub_56F4F8
 *   0x000000000056F5CC  sub_56F5CC
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056554C  sub_56554C
 *
 * Referenced strings: 13
 *   insn=0x000000000056C5CC string=0x000000000056C5D0 "h"
 *   insn=0x000000000056C5D4 string=0x000000000056C5D8 ")"
 *   insn=0x000000000056C5D8 string=0x000000000056C5DC " "
 *   insn=0x000000000056C5D8 string=0x000000000056C61C "`"
 *   insn=0x000000000056C5E0 string=0x000000000056C5E4 "s""
 *   insn=0x000000000056C5E4 string=0x000000000056C5E8 "`"
 *   insn=0x000000000056C5F8 string=0x000000000056C5FC "?"
 *   insn=0x000000000056C5FC string=0x000000000056C600 "B"
 *   insn=0x000000000056C600 string=0x000000000056C604 "c,@"
 *   insn=0x000000000056C60C string=0x000000000056C610 "s\nA"
 *   insn=0x000000000056C614 string=0x000000000056C618 "s"
 *   insn=0x000000000056C624 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000056C63C string=0x000000000059F980 "basic_string::_S_create"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56C5B8(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x19
  __int64 v3; // x0
  unsigned __int64 v4; // x0
  __int64 result; // x0

  v2 = a1;
  if ( a1 > 0xFFFFFFFFFFFFFFELL )
    sub_56554C("basic_string::_S_create");
  if ( a1 > a2 )
  {
    if ( a1 < 2 * a2 )
      v2 = 2 * a2;
    v3 = 4 * (v2 + 1);
    if ( (unsigned __int64)(v3 + 56) <= 0x1000 || a2 >= v2 )
    {
      v4 = v3 + 24;
      goto LABEL_10;
    }
    v2 += (4096 - (unsigned __int64)(((_WORD)v3 + 56) & 0xFFF)) >> 2;
    if ( v2 > 0xFFFFFFFFFFFFFFELL )
      v2 = 0xFFFFFFFFFFFFFFELL;
  }
  v4 = 4 * v2 + 28;
LABEL_10:
  result = operator new(v4);
  *(_QWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 16) = 0;
  return result;
}

