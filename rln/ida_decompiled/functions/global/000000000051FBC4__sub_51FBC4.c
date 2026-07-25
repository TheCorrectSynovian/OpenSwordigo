/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051FBC4
 * Mangled: sub_51FBC4
 * Demangled: sub_51FBC4
 *
 * Callers: 1
 *   0x000000000051FB64  sub_51FB64
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x000000000051FBD0 string=0x000000000051FBD4 "!"
 *   insn=0x000000000051FBE0 string=0x000000000051FBE4 "!"
 *   insn=0x000000000051FBE8 string=0x000000000051FBEC "!`C"
 *   insn=0x000000000051FBEC string=0x000000000051FBF0 "!@"
 *   insn=0x000000000051FBF0 string=0x000000000051FBF4 "a"
 *   insn=0x000000000051FC08 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000051FC14 string=0x000000000051FC18 "!`C"
 *   insn=0x000000000051FC18 string=0x000000000051FC1C "!@"
 *   insn=0x000000000051FC1C string=0x000000000051FC20 "a"
 *   insn=0x000000000051FC28 string=0x000000000051FC2C "&"
 *   insn=0x000000000051FC3C string=0x000000000051FC40 "!"
 *   insn=0x000000000051FC4C string=0x000000000051FC50 "!"
 *   insn=0x000000000051FC54 string=0x000000000051FC58 "!`C"
 *   insn=0x000000000051FC58 string=0x000000000051FC5C "!@"
 *   insn=0x000000000051FC5C string=0x000000000051FC60 "a"
 *   insn=0x000000000051FC80 string=0x000000000051FC84 "!`C"
 *   insn=0x000000000051FC84 string=0x000000000051FC88 "!@"
 *   insn=0x000000000051FC88 string=0x000000000051FC8C "a"
 *   insn=0x000000000051FC94 string=0x000000000051FC98 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_51FBC4(_QWORD *a1)
{
  *a1 = off_6D9BB0;
  sub_570744(a1 + 2);
  *a1 = &unk_6DB060;
  nullsub_2(a1);
  operator delete(a1);
}

