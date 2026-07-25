/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005618B4
 * Mangled: sub_5618B4
 * Demangled: sub_5618B4
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x000000000051F468  sub_51F468
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x000000000055F8C0  sub_55F8C0
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x00000000005618D8 string=0x00000000005618DC "X"
 *   insn=0x00000000005618EC string=0x00000000005618F0 "B "
 *   insn=0x0000000000561908 string=0x000000000056190C "b"
 *   insn=0x0000000000561918 string=0x000000000056191C "b"
 *   insn=0x000000000056192C string=0x0000000000561930 "!"
 *   insn=0x0000000000561930 string=0x0000000000561934 "`\n"
 *   insn=0x0000000000561938 string=0x000000000056193C "a"
 *   insn=0x0000000000561948 string=0x000000000056194C "ub"
 *   insn=0x0000000000561950 string=0x0000000000561954 "`"
 *   insn=0x0000000000561960 string=0x0000000000561964 "!"
 *   insn=0x0000000000561964 string=0x0000000000561968 "`"
 *   insn=0x000000000056196C string=0x0000000000561970 "a\n"
 *   insn=0x0000000000561990 string=0x0000000000561994 "`"
 *   insn=0x0000000000561994 string=0x0000000000561998 "`"
 *   insn=0x0000000000561994 string=0x00000000005619C0 "`"
 *   insn=0x00000000005619A0 string=0x00000000005619A4 "`"
 *   insn=0x00000000005619C4 string=0x00000000005619C8 "a"
 *   insn=0x00000000005619CC string=0x00000000005619D0 "! @"
 *   insn=0x00000000005619D0 string=0x00000000005619D4 "!"
 *   insn=0x00000000005619F0 string=0x00000000005619F4 "!"
 *   insn=0x00000000005619F8 string=0x00000000005619FC "!<E"
 *   insn=0x00000000005619FC string=0x0000000000561A00 "!@"
 *   insn=0x0000000000561A00 string=0x0000000000561A04 "a"
 *   insn=0x0000000000561A18 string=0x0000000000561A1C "!@"
 *   insn=0x0000000000561A20 string=0x0000000000561A24 "a"
 *   insn=0x0000000000561A24 string=0x0000000000561A28 "Z"
 *   insn=0x0000000000561A28 string=0x0000000000561A2C "`"
 *   insn=0x0000000000561A30 string=0x0000000000561A34 "!"
 *   insn=0x0000000000561A34 string=0x0000000000561A38 "`B"
 *   insn=0x0000000000561A38 string=0x0000000000561A3C "!$E"
 *   insn=0x0000000000561A3C string=0x0000000000561A40 "!@"
 *   insn=0x0000000000561A40 string=0x0000000000561A44 "a"
 *   insn=0x0000000000561A50 string=0x0000000000561A54 "!"
 *   insn=0x0000000000561A58 string=0x0000000000571950 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5618B4(_QWORD *a1, const char *a2, unsigned int a3)
{
  __int64 v3; // x20

  v3 = (__int64)(a1 + 33);
  sub_521E3C((__int64)(a1 + 33));
  *(_QWORD *)(v3 + 216) = 0;
  *(_BYTE *)(v3 + 224) = 0;
  *(_BYTE *)(v3 + 225) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *a1 = &unk_6DB588;
  a1[1] = 0;
  a1[33] = &unk_6DB5B0;
  sub_5210E8(v3, 0);
  a1[2] = &unk_6DB538;
  a1[33] = &unk_6DB560;
  sub_5210E8(v3, 0);
  *a1 = off_6B7DD8;
  a1[33] = off_6B7E28;
  a1[2] = off_6B7E00;
  sub_55EDEC((__int64)(a1 + 3));
  sub_5210E8(v3, (__int64)(a1 + 3));
  if ( sub_55F8C0((__int64)(a1 + 3), a2, a3) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

