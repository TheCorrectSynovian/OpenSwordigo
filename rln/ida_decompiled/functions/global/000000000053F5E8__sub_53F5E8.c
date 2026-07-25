/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F5E8
 * Mangled: sub_53F5E8
 * Demangled: sub_53F5E8
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000053F604 string=0x000000000053F608 ""
 *   insn=0x000000000053F618 string=0x000000000053F61C "B`"
 *   insn=0x000000000053F63C string=0x000000000053F640 "B"
 *   insn=0x000000000053F664 string=0x000000000053F668 "!<E"
 *   insn=0x000000000053F668 string=0x000000000053F66C "!@"
 *   insn=0x000000000053F67C string=0x000000000053F680 """
 *   insn=0x000000000053F684 string=0x000000000053F688 "B"
 *   insn=0x000000000053F688 string=0x000000000053F68C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_53F5E8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x19

  v2 = (__int64)(a1 + 1);
  sub_521E3C((__int64)(a1 + 1));
  *(_QWORD *)(v2 + 216) = 0;
  *(_BYTE *)(v2 + 224) = 0;
  *(_BYTE *)(v2 + 225) = 0;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *a1 = &off_6B7158;
  a1[1] = off_6B7180;
  return sub_5210E8(v2, a2);
}

