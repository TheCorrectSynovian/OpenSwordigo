/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051FB00
 * Mangled: sub_51FB00
 * Demangled: sub_51FB00
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000051FB64  sub_51FB64
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000051FB0C string=0x000000000051FB10 "!"
 *   insn=0x000000000051FB18 string=0x000000000051FB1C "\nC"
 *   insn=0x000000000051FB1C string=0x000000000051FB20 "!"
 *   insn=0x000000000051FB24 string=0x000000000051FB28 "!`C"
 *   insn=0x000000000051FB28 string=0x000000000051FB2C "!@"
 *   insn=0x000000000051FB2C string=0x000000000051FB30 "a"
 *   insn=0x000000000051FB38 string=0x000000000051FB3C " o"
 *   insn=0x000000000051FB48 string=0x000000000051FB4C "!`C"
 *   insn=0x000000000051FB4C string=0x000000000051FB50 "!@"
 *   insn=0x000000000051FB50 string=0x000000000051FB54 "a"
 *   insn=0x000000000051FB5C string=0x000000000051FB60 "Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51FB00(_QWORD *a1)
{
  *a1 = off_6D9BB0;
  sub_570744(a1 + 2);
  *a1 = &unk_6DB060;
  return nullsub_2(a1);
}

