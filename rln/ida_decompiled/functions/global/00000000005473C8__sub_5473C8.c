/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005473C8
 * Mangled: sub_5473C8
 * Demangled: sub_5473C8
 *
 * Callers: 3
 *   0x00000000004D56A4  sub_4D56A4
 *   0x00000000004D5CF4  sub_4D5CF4
 *   0x0000000000547234  sub_547234
 *
 * Callees: 9
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x000000000055CDC4  sub_55CDC4
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000547400 string=0x0000000000547404 "B"
 *   insn=0x000000000054741C string=0x0000000000547420 "b"
 *   insn=0x000000000054742C string=0x0000000000547430 "b6"
 *   insn=0x0000000000547430 string=0x0000000000547434 "-g"
 *   insn=0x0000000000547440 string=0x0000000000547444 "!"
 *   insn=0x0000000000547444 string=0x0000000000547448 "`\n"
 *   insn=0x000000000054744C string=0x0000000000547450 "a6"
 *   insn=0x0000000000547454 string=0x0000000000547458 "$g"
 *   insn=0x0000000000547464 string=0x0000000000547468 "`"
 *   insn=0x000000000054746C string=0x0000000000547470 "xB"
 *   insn=0x0000000000547474 string=0x0000000000547478 "`6"
 *   insn=0x000000000054747C string=0x0000000000547480 "ab"
 *   insn=0x0000000000547484 string=0x0000000000547488 "`\n"
 *   insn=0x00000000005474A0 string=0x00000000005474A4 "B@"
 *   insn=0x00000000005474A8 string=0x00000000005474AC "b"
 *   insn=0x00000000005474C8 string=0x00000000005474CC "`"
 *   insn=0x00000000005474D0 string=0x00000000005474D4 "9@"
 *   insn=0x00000000005474D8 string=0x00000000005474DC "B`"
 *   insn=0x00000000005474DC string=0x00000000005474E0 "b2"
 *   insn=0x0000000000547510 string=0x0000000000547514 "v6"
 *   insn=0x0000000000547514 string=0x0000000000547518 "1k"
 *   insn=0x0000000000547524 string=0x0000000000547528 "w"
 *   insn=0x0000000000547528 string=0x000000000054752C "a2@"
 *   insn=0x0000000000547534 string=0x0000000000547538 " `"
 *   insn=0x000000000054753C string=0x0000000000547540 "`"
 *   insn=0x0000000000547544 string=0x0000000000547548 "b"
 *   insn=0x0000000000547554 string=0x0000000000547558 "u"
 *   insn=0x0000000000547564 string=0x0000000000547568 "!`"
 *   insn=0x000000000054756C string=0x0000000000571950 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_5473C8(__int64 a1, int a2)
{
  __int64 v2; // x20

  v2 = a1 + 104;
  sub_521E3C(a1 + 104);
  *(_QWORD *)(v2 + 216) = 0;
  *(_BYTE *)(v2 + 224) = 0;
  *(_BYTE *)(v2 + 225) = 0;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *(_QWORD *)a1 = &unk_6DA928;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 104) = &unk_6DA950;
  sub_5210E8(v2, 0);
  *(_QWORD *)(a1 + 16) = &unk_6DA8D8;
  *(_QWORD *)(a1 + 104) = &unk_6DA900;
  sub_5210E8(v2, 0);
  *(_QWORD *)a1 = off_6B7338;
  *(_QWORD *)(a1 + 104) = off_6B7388;
  *(_QWORD *)(a1 + 16) = off_6B7360;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = off_6B7710;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  sub_53DB28((_QWORD *)(a1 + 80));
  *(_QWORD *)(a1 + 24) = off_6DA7B0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 96) = &byte_6FD2F8;
  return sub_5210E8(v2, a1 + 24);
}

