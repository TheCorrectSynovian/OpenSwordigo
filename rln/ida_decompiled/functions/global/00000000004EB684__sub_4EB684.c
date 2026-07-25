/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB684
 * Mangled: sub_4EB684
 * Demangled: sub_4EB684
 *
 * Callers: 2
 *   0x00000000004F63FC  sub_4F63FC
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 1
 *   0x00000000004EB320  sub_4EB320
 *
 * Referenced strings: 11
 *   insn=0x00000000004EB688 string=0x00000000004EB68C "("
 *   insn=0x00000000004EB68C string=0x00000000004EB690 "I"
 *   insn=0x00000000004EB690 string=0x00000000004EB694 "j"
 *   insn=0x00000000004EB694 string=0x00000000004EB69C "Byh"
 *   insn=0x00000000004EB69C string=0x00000000004EB6A0 "Cyi"
 *   insn=0x00000000004EB6A0 string=0x00000000004EB6A4 "H@9i@9"
 *   insn=0x00000000004EB6A4 string=0x00000000004EB6A8 "i@9"
 *   insn=0x00000000004EB6B0 string=0x00000000004EB6B4 "a"
 *   insn=0x00000000004EB6B0 string=0x00000000004EB6C4 "a"
 *   insn=0x00000000004EB6B4 string=0x00000000005999A2 "attempt to compare two %s values"
 *   insn=0x00000000004EB6C4 string=0x00000000005999C3 "attempt to compare %s with %s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_4EB684(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x9
  __int64 v4; // x2
  __int64 v5; // x3

  v3 = *(int *)(a3 + 8);
  v4 = (__int64)*(&off_6D8858 + *(int *)(a2 + 8));
  v5 = (__int64)*(&off_6D8858 + v3);
  if ( *(unsigned __int8 *)(v4 + 2) == *(unsigned __int8 *)(v5 + 2) )
    sub_4EB320(a1, "attempt to compare two %s values", (const char *)v4);
  sub_4EB320(a1, "attempt to compare %s with %s", (const char *)v4, (const char *)v5);
}

