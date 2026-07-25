/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563B38
 * Mangled: sub_563B38
 * Demangled: sub_563B38
 *
 * Callers: 2
 *   0x0000000000563BC4  sub_563BC4
 *   0x0000000000563BCC  sub_563BCC
 *
 * Callees: 4
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 19
 *   insn=0x0000000000563B4C string=0x0000000000563B54 "!"
 *   insn=0x0000000000563B54 string=0x0000000000563B58 "t""
 *   insn=0x0000000000563B58 string=0x0000000000563B5C "`"
 *   insn=0x0000000000563B60 string=0x0000000000563B64 "a\n"
 *   insn=0x0000000000563B6C string=0x0000000000563B70 "`"
 *   insn=0x0000000000563B70 string=0x0000000000563B74 "!@"
 *   insn=0x0000000000563B74 string=0x0000000000563B78 "`b"
 *   insn=0x0000000000563B78 string=0x0000000000563B7C "a"
 *   insn=0x0000000000563B80 string=0x0000000000563B84 "`"
 *   insn=0x0000000000563B84 string=0x0000000000563B88 "8"
 *   insn=0x0000000000563B8C string=0x0000000000563B90 "`B"
 *   insn=0x0000000000563B90 string=0x0000000000563B94 "!"
 *   insn=0x0000000000563B94 string=0x0000000000563B98 "!@"
 *   insn=0x0000000000563B98 string=0x0000000000563B9C "a"
 *   insn=0x0000000000563B9C string=0x0000000000563BA0 "Ja"
 *   insn=0x0000000000563BA0 string=0x0000000000563BA4 "!"
 *   insn=0x0000000000563BA8 string=0x0000000000563BAC "!$E"
 *   insn=0x0000000000563BAC string=0x0000000000563BB0 "!@"
 *   insn=0x0000000000563BB0 string=0x0000000000563BB4 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563B38(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)(a1 + 264);
  *(_QWORD *)a1 = off_6B7F88;
  *(_QWORD *)(a1 + 16) = off_6B7FB0;
  *(_QWORD *)(a1 + 264) = off_6B7FD8;
  *(_QWORD *)(a1 + 24) = off_6DB650;
  sub_562F10(a1 + 24);
  sub_51F468(a1 + 128);
  *(_QWORD *)(a1 + 24) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 80));
  *(_QWORD *)(a1 + 264) = off_6B6B50;
  return sub_5221DC(v2);
}

