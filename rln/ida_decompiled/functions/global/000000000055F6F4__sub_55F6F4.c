/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F6F4
 * Mangled: sub_55F6F4
 * Demangled: sub_55F6F4
 *
 * Callers: 1
 *   0x000000000055F774  sub_55F774
 *
 * Callees: 4
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 16
 *   insn=0x000000000055F70C string=0x000000000055F710 "!"
 *   insn=0x000000000055F718 string=0x000000000055F71C "`""
 *   insn=0x000000000055F71C string=0x000000000055F720 "a~"
 *   insn=0x000000000055F724 string=0x000000000055F72C "a"
 *   insn=0x000000000055F730 string=0x000000000055F734 "`"
 *   insn=0x000000000055F734 string=0x000000000055F738 "L"
 *   insn=0x000000000055F738 string=0x000000000055F73C "!"
 *   insn=0x000000000055F73C string=0x000000000055F740 "`"
 *   insn=0x000000000055F740 string=0x000000000055F744 "!$E"
 *   insn=0x000000000055F744 string=0x000000000055F748 "!@"
 *   insn=0x000000000055F748 string=0x000000000055F74C "a"
 *   insn=0x000000000055F74C string=0x000000000055F750 "^r"
 *   insn=0x000000000055F750 string=0x000000000055F754 "!"
 *   insn=0x000000000055F758 string=0x000000000055F75C "!<E"
 *   insn=0x000000000055F75C string=0x000000000055F760 "!@"
 *   insn=0x000000000055F760 string=0x000000000055F764 "a~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55F6F4(__int64 a1)
{
  _QWORD *v2; // x20

  *(_QWORD *)a1 = off_6B7D38;
  v2 = (_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = off_6B7D60;
  *(_QWORD *)(a1 + 8) = off_6DB410;
  sub_55F390(a1 + 8);
  sub_51F468(a1 + 112);
  *(_QWORD *)(a1 + 8) = off_6B7710;
  sub_53C0C8((unsigned int **)(a1 + 64));
  *(_QWORD *)(a1 + 248) = off_6B6B30;
  return sub_5221DC(v2);
}

