/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051FA44
 * Mangled: sub_51FA44
 * Demangled: sub_51FA44
 *
 * Callers: 2
 *   0x000000000051F9EC  sub_51F9EC
 *   0x000000000052010C  sub_52010C
 *
 * Callees: 4
 *   0x0000000000201760  .memcpy
 *   0x000000000053B7BC  nullsub_2
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000051FA50 string=0x000000000051FA54 "!"
 *   insn=0x000000000051FA5C string=0x000000000051FA60 "9C"
 *   insn=0x000000000051FA60 string=0x000000000051FA64 "!"
 *   insn=0x000000000051FA68 string=0x000000000051FA6C "!`C"
 *   insn=0x000000000051FA6C string=0x000000000051FA70 "!@"
 *   insn=0x000000000051FA70 string=0x000000000051FA74 "a"
 *   insn=0x000000000051FA7C string=0x000000000051FA80 "Oo"
 *   insn=0x000000000051FA8C string=0x000000000051FA90 "!`C"
 *   insn=0x000000000051FA90 string=0x000000000051FA94 "!@"
 *   insn=0x000000000051FA94 string=0x000000000051FA98 "a"
 *   insn=0x000000000051FA98 string=0x000000000051FA9C "Ho"
 *   insn=0x000000000051FAB8 string=0x000000000051FABC "B"
 *   insn=0x000000000051FABC string=0x000000000051FAC0 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51FA44(_QWORD *a1)
{
  *a1 = off_6D9BB0;
  sub_570744(a1 + 2);
  *a1 = &unk_6DB060;
  return nullsub_2(a1);
}

