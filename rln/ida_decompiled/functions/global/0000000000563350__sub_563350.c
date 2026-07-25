/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563350
 * Mangled: sub_563350
 * Demangled: sub_563350
 *
 * Callers: 1
 *   0x00000000005633D0  sub_5633D0
 *
 * Callees: 4
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 17
 *   insn=0x0000000000563364 string=0x000000000056336C "!@"
 *   insn=0x000000000056336C string=0x0000000000563370 "t"
 *   insn=0x0000000000563370 string=0x0000000000563374 "`"
 *   insn=0x0000000000563378 string=0x0000000000563380 "a\n"
 *   insn=0x0000000000563380 string=0x0000000000563384 "`"
 *   insn=0x0000000000563384 string=0x0000000000563388 "`B"
 *   insn=0x000000000056338C string=0x0000000000563390 "`"
 *   insn=0x0000000000563390 string=0x0000000000563394 "5"
 *   insn=0x0000000000563398 string=0x000000000056339C "`""
 *   insn=0x000000000056339C string=0x00000000005633A0 "!"
 *   insn=0x00000000005633A0 string=0x00000000005633A4 "!@"
 *   insn=0x00000000005633A4 string=0x00000000005633A8 "a\n"
 *   insn=0x00000000005633A8 string=0x00000000005633AC "Gc"
 *   insn=0x00000000005633AC string=0x00000000005633B0 "!"
 *   insn=0x00000000005633B4 string=0x00000000005633B8 "!$E"
 *   insn=0x00000000005633B8 string=0x00000000005633BC "!@"
 *   insn=0x00000000005633BC string=0x00000000005633C0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563350(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)(a1 + 256);
  *(_QWORD *)a1 = off_6B7E78;
  *(_QWORD *)(a1 + 16) = off_6DB650;
  *(_QWORD *)(a1 + 256) = off_6B7EA0;
  sub_562F10(a1 + 16);
  sub_51F468(a1 + 120);
  *(_QWORD *)(a1 + 16) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 72));
  *(_QWORD *)(a1 + 256) = off_6B6B50;
  return sub_5221DC(v2);
}

