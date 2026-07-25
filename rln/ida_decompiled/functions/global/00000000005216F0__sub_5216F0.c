/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005216F0
 * Mangled: sub_5216F0
 * Demangled: sub_5216F0
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x0000000000522C5C  sub_522C5C
 *   0x000000000054F6AC  sub_54F6AC
 *   0x00000000005503C0  sub_5503C0
 *   0x0000000000550428  sub_550428
 *   0x0000000000551634  sub_551634
 *   0x00000000005517E4  sub_5517E4
 *   0x0000000000551850  sub_551850
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x0000000000521710 string=0x0000000000521714 "!@-"
 *   insn=0x0000000000521718 string=0x000000000052171C "a"
 *   insn=0x000000000052171C string=0x0000000000521720 "tB"
 *   insn=0x0000000000521738 string=0x000000000052173C "H"
 *   insn=0x0000000000521754 string=0x0000000000521758 "`z"
 *   insn=0x000000000052175C string=0x0000000000521760 "!"
 *   insn=0x0000000000521770 string=0x0000000000521774 "`~"
 *   insn=0x0000000000521778 string=0x000000000052177C "5"
 *   insn=0x0000000000521780 string=0x0000000000521784 "@"
 *   insn=0x0000000000521788 string=0x000000000052178C "'"
 *   insn=0x000000000052178C string=0x0000000000521790 "`"
 *   insn=0x0000000000521794 string=0x0000000000521798 "uv"
 *   insn=0x00000000005217AC string=0x00000000005217B0 "`""
 *   insn=0x00000000005217F8 string=0x00000000005217FC "x"
 *   insn=0x0000000000521800 string=0x0000000000521804 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5216F0(__int64 a1, __int64 a2)
{
  _BOOL8 result; // x0

  sub_521E3C(a1);
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)a1 = off_6B6B50;
  *(_DWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 228) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  sub_522C5C(a1);
  if ( (unsigned __int8)sub_551634(a1 + 208) )
  {
    *(_QWORD *)(a1 + 240) = sub_54F6AC(a1 + 208);
    if ( (unsigned __int8)sub_5517E4(a1 + 208) )
      goto LABEL_3;
LABEL_7:
    *(_QWORD *)(a1 + 248) = 0;
    if ( (unsigned __int8)sub_551850(a1 + 208) )
      goto LABEL_4;
LABEL_8:
    *(_QWORD *)(a1 + 256) = 0;
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 240) = 0;
  if ( !(unsigned __int8)sub_5517E4(a1 + 208) )
    goto LABEL_7;
LABEL_3:
  *(_QWORD *)(a1 + 248) = sub_5503C0(a1 + 208);
  if ( !(unsigned __int8)sub_551850(a1 + 208) )
    goto LABEL_8;
LABEL_4:
  *(_QWORD *)(a1 + 256) = sub_550428(a1 + 208);
LABEL_5:
  *(_QWORD *)(a1 + 232) = a2;
  *(_DWORD *)(a1 + 224) = 0;
  result = a2 == 0;
  *(_BYTE *)(a1 + 228) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = result;
  return result;
}

