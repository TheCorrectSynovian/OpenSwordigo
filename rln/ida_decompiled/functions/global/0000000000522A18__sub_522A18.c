/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522A18
 * Mangled: sub_522A18
 * Demangled: sub_522A18
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x0000000000520E7C  sub_520E7C
 *   0x0000000000521828  sub_521828
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000522C5C  sub_522C5C
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000057121C  sub_57121C
 *   0x0000000000571470  sub_571470
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x0000000000522A20 string=0x0000000000522A24 "3"
 *   insn=0x0000000000522A2C string=0x0000000000522A30 "s"
 *   insn=0x0000000000522A34 string=0x0000000000522A38 "u"
 *   insn=0x0000000000522A64 string=0x0000000000522A68 "7"
 *   insn=0x0000000000522A68 string=0x0000000000522A6C "\n"
 *   insn=0x0000000000522A6C string=0x0000000000522A70 "x"
 *   insn=0x0000000000522A74 string=0x0000000000522A78 "3"
 *   insn=0x0000000000522A7C string=0x0000000000522A80 "s&E"
 *   insn=0x0000000000522A80 string=0x0000000000522A84 "sB"
 *   insn=0x0000000000522A9C string=0x0000000000522AA0 " "
 *   insn=0x0000000000522AA8 string=0x0000000000522AAC "3"
 *   insn=0x0000000000522AB0 string=0x0000000000522AB4 " "
 *   insn=0x0000000000522AB4 string=0x0000000000522AB8 "s"
 *   insn=0x0000000000522AB8 string=0x0000000000522ABC "sB"
 *   insn=0x0000000000522AD4 string=0x0000000000522AD8 "|e"
 *   insn=0x0000000000522AD8 string=0x0000000000522ADC " "
 *   insn=0x0000000000522AE4 string=0x0000000000522AE8 "xe"
 *   insn=0x0000000000522AF8 string=0x0000000000522AFC "!`"
 *   insn=0x0000000000522B00 string=0x0000000000522B04 "8"
 *   insn=0x0000000000522B28 string=0x0000000000522B2C "!"
 *   insn=0x0000000000522B2C string=0x0000000000522B30 "`\nA"
 *   insn=0x0000000000522B34 string=0x0000000000522B38 " "
 *   insn=0x0000000000522B48 string=0x0000000000522B4C " "
 *   insn=0x0000000000522B60 string=0x0000000000522B64 "a\nA"
 *   insn=0x0000000000522B74 string=0x0000000000522B78 "a\nA"
 *   insn=0x0000000000522B94 string=0x0000000000522B98 "!`"
 *   insn=0x0000000000522B9C string=0x0000000000522BA0 "4:"
 *   insn=0x0000000000522BA0 string=0x0000000000522BA4 "7"
 *   insn=0x0000000000522BB4 string=0x0000000000522BB8 ".:"
 *   insn=0x0000000000522BB8 string=0x0000000000522BBC "3"
 *   insn=0x0000000000522BC8 string=0x0000000000522BCC "!"
 *   insn=0x0000000000522BCC string=0x0000000000522BD0 "`^A"
 *   insn=0x0000000000522BD0 string=0x0000000000522BD4 "':"
 *   insn=0x0000000000522BE8 string=0x0000000000522BEC " "
 *   insn=0x0000000000522BF8 string=0x0000000000522BFC ""
 *   insn=0x0000000000522C00 string=0x0000000000522C04 "a^A"
 *   insn=0x0000000000522C10 string=0x0000000000522C14 " "
 *   insn=0x0000000000522C14 string=0x0000000000522C18 "a^A"
 *   insn=0x0000000000522C28 string=0x0000000000522C2C "P"
 *   insn=0x0000000000522C4C string=0x0000000000522C50 "G"
 *   insn=0x0000000000522C54 string=0x0000000000522C58 "{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_522A18(unsigned __int8 a1)
{
  unsigned int v2; // w21

  v2 = (unsigned __int8)byte_6E8920;
  if ( (unsigned __int8)byte_6E8920 > (unsigned int)a1 )
  {
    sub_522294();
    byte_6E8920 = a1;
    qword_6FE310 = (__int64)off_6B7710;
    sub_53C0C8(algn_6FE348);
    qword_6FE0A0 = (__int64)off_6B7710;
    sub_53C0C8(algn_6FE0D8);
    qword_6FDD30 = (__int64)off_6B7710;
    sub_53C0C8(algn_6FDD68);
    qword_6FDAD0 = (__int64)off_6B7790;
    sub_53C0C8(algn_6FDB08);
    qword_6FD340 = (__int64)off_6B7790;
    sub_53C0C8(algn_6FD378);
    qword_6FD4A0 = (__int64)off_6B7790;
    sub_53C0C8(algn_6FD4D8);
    sub_57121C(&unk_6FD6F0, (char *)&_sF + 152, 16, 1024);
    sub_57121C(&unk_6FDD80, &_sF, 8, 1024);
    sub_57121C(&unk_6FDB20, (char *)&_sF + 304, 16, 1024);
    sub_520E7C((__int64)&qword_6FDE78, (__int64)&unk_6FD6F0);
    sub_520E7C((__int64)&qword_6FDF90, (__int64)&unk_6FDD80);
    sub_520E7C((__int64)&qword_6FD398, (__int64)&unk_6FDB20);
    sub_520E7C((__int64)&qword_6FE0F8, (__int64)&unk_6FDB20);
    sub_571470(&unk_6FD9E0, (char *)&_sF + 152, 16, 1024);
    sub_571470(&unk_6FD600, &_sF, 8, 1024);
    sub_571470(&unk_6FD7E0, (char *)&_sF + 304, 16, 1024);
    sub_521828((__int64)&qword_6FD4F8, (__int64)&unk_6FD9E0);
    sub_521828((__int64)&qword_6FDC20, (__int64)&unk_6FD600);
    sub_521828((__int64)&qword_6FE208, (__int64)&unk_6FD7E0);
    sub_521828((__int64)&qword_6FD8D8, (__int64)&unk_6FD7E0);
    sub_52296C();
  }
  return v2;
}

