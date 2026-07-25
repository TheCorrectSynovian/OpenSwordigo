/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561C08
 * Mangled: sub_561C08
 * Demangled: sub_561C08
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
 *   insn=0x0000000000561C40 string=0x0000000000561C44 "B "
 *   insn=0x0000000000561C5C string=0x0000000000561C60 "b"
 *   insn=0x0000000000561C6C string=0x0000000000561C70 "b"
 *   insn=0x0000000000561C80 string=0x0000000000561C84 "!"
 *   insn=0x0000000000561C84 string=0x0000000000561C88 "`\n"
 *   insn=0x0000000000561C8C string=0x0000000000561C90 "a"
 *   insn=0x0000000000561C9C string=0x0000000000561CA0 "ub"
 *   insn=0x0000000000561CA4 string=0x0000000000561CA8 "`"
 *   insn=0x0000000000561CB4 string=0x0000000000561CB8 "!"
 *   insn=0x0000000000561CB8 string=0x0000000000561CBC "`"
 *   insn=0x0000000000561CC0 string=0x0000000000561CC4 "a\n"
 *   insn=0x0000000000561CC4 string=0x0000000000561CC8 "I"
 *   insn=0x0000000000561CE4 string=0x0000000000561CE8 "`"
 *   insn=0x0000000000561CE8 string=0x0000000000561CEC "`"
 *   insn=0x0000000000561CE8 string=0x0000000000561D14 "`"
 *   insn=0x0000000000561CF4 string=0x0000000000561CF8 "`"
 *   insn=0x0000000000561D18 string=0x0000000000561D1C "a"
 *   insn=0x0000000000561D20 string=0x0000000000561D24 "! @"
 *   insn=0x0000000000561D24 string=0x0000000000561D28 "!"
 *   insn=0x0000000000561D44 string=0x0000000000561D48 "!"
 *   insn=0x0000000000561D4C string=0x0000000000561D50 "!<E"
 *   insn=0x0000000000561D50 string=0x0000000000561D54 "!@"
 *   insn=0x0000000000561D54 string=0x0000000000561D58 "a"
 *   insn=0x0000000000561D58 string=0x0000000000561D5C " "
 *   insn=0x0000000000561D6C string=0x0000000000561D70 "!@"
 *   insn=0x0000000000561D74 string=0x0000000000561D78 "a"
 *   insn=0x0000000000561D7C string=0x0000000000561D80 "`"
 *   insn=0x0000000000561D84 string=0x0000000000561D88 "!"
 *   insn=0x0000000000561D88 string=0x0000000000561D8C "`B"
 *   insn=0x0000000000561D8C string=0x0000000000561D90 "!$E"
 *   insn=0x0000000000561D90 string=0x0000000000561D94 "!@"
 *   insn=0x0000000000561D94 string=0x0000000000561D98 "a"
 *   insn=0x0000000000561DA4 string=0x0000000000561DA8 "!"
 *   insn=0x0000000000561DAC string=0x0000000000571950 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561C08(_QWORD *a1, const char **a2, unsigned int a3)
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
  if ( sub_55F8C0((__int64)(a1 + 3), *a2, a3) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

