/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED5F4
 * Mangled: sub_4ED5F4
 * Demangled: sub_4ED5F4
 *
 * Callers: 6
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EC9BC  sub_4EC9BC
 *   0x00000000004F30A8  sub_4F30A8
 *   0x00000000004F3344  sub_4F3344
 *   0x00000000004F33F0  lua_close(lua_State *)
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 2
 *   0x00000000004EE4B0  sub_4EE4B0
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 31
 *   insn=0x00000000004ED604 string=0x00000000004ED608 "hN@"
 *   insn=0x00000000004ED60C string=0x00000000004ED610 "H"
 *   insn=0x00000000004ED610 string=0x00000000004ED614 "u"
 *   insn=0x00000000004ED614 string=0x00000000004ED618 "\n\t@"
 *   insn=0x00000000004ED618 string=0x00000000004ED61C "_"
 *   insn=0x00000000004ED620 string=0x00000000004ED624 "\t"
 *   insn=0x00000000004ED624 string=0x00000000004ED628 "iN"
 *   insn=0x00000000004ED628 string=0x00000000004ED62C "\t%@9"
 *   insn=0x00000000004ED630 string=0x00000000004ED634 ")"
 *   insn=0x00000000004ED634 string=0x00000000004ED638 "?"
 *   insn=0x00000000004ED638 string=0x00000000004ED63C "\ta"
 *   insn=0x00000000004ED640 string=0x00000000004ED644 "_"
 *   insn=0x00000000004ED640 string=0x00000000004ED67C "\n"
 *   insn=0x00000000004ED648 string=0x00000000004ED64C "\t"
 *   insn=0x00000000004ED64C string=0x00000000004ED650 "I"
 *   insn=0x00000000004ED650 string=0x00000000004ED654 "\t"
 *   insn=0x00000000004ED654 string=0x00000000004ED658 "*"
 *   insn=0x00000000004ED66C string=0x00000000004ED670 "hN@"
 *   insn=0x00000000004ED670 string=0x00000000004ED674 "("
 *   insn=0x00000000004ED684 string=0x00000000004ED688 "j"
 *   insn=0x00000000004ED688 string=0x00000000004ED68C "\n"
 *   insn=0x00000000004ED68C string=0x00000000004ED690 "K"
 *   insn=0x00000000004ED690 string=0x00000000004ED694 "\n\t@"
 *   insn=0x00000000004ED694 string=0x00000000004ED698 "K"
 *   insn=0x00000000004ED698 string=0x00000000004ED69C ""
 *   insn=0x00000000004ED69C string=0x00000000004ED6A0 "J\t@"
 *   insn=0x00000000004ED6A0 string=0x00000000004ED6A4 "\t\t"
 *   insn=0x00000000004ED6A4 string=0x00000000004ED6A8 "\n!"
 *   insn=0x00000000004ED6AC string=0x00000000004ED6B0 "hN@"
 *   insn=0x00000000004ED6AC string=0x00000000004EE4B0 ""
 *   insn=0x00000000004ED6B0 string=0x00000000004ED6B4 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED5F4(__int64 result, unsigned __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x8
  __int64 v5; // x21
  unsigned __int64 v6; // x10
  __int64 v7; // x9
  __int64 v8; // x10

  v2 = result;
  v3 = *(_QWORD *)(result + 152);
  if ( v3 )
  {
    v5 = *(_QWORD *)(result + 32);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      if ( v6 < a2 )
        break;
      *(_QWORD *)(v2 + 152) = *(_QWORD *)v3;
      v7 = v3 + 24;
      if ( (*(_BYTE *)(v3 + 9) & (unsigned __int8)~*(_BYTE *)(v5 + 32) & 3) != 0 )
      {
        if ( v6 != v7 )
        {
          *(_QWORD *)(*(_QWORD *)(v3 + 32) + 24LL) = *(_QWORD *)(v3 + 24);
          *(_QWORD *)(*(_QWORD *)(v3 + 24) + 32LL) = *(_QWORD *)(v3 + 32);
        }
        result = sub_4EED74(v2, v3, 40, 0);
        v3 = *(_QWORD *)(v2 + 152);
        if ( !v3 )
          return result;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v3 + 32) + 24LL) = *(_QWORD *)(v3 + 24);
        *(_QWORD *)(*(_QWORD *)(v3 + 24) + 32LL) = *(_QWORD *)(v3 + 32);
        v8 = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 24) = *(_QWORD *)v8;
        LODWORD(v8) = *(_DWORD *)(v8 + 8);
        *(_QWORD *)(v3 + 16) = v7;
        *(_DWORD *)(v3 + 32) = v8;
        result = sub_4EE4B0(v2, v3);
        v3 = *(_QWORD *)(v2 + 152);
        if ( !v3 )
          return result;
      }
    }
  }
  return result;
}

