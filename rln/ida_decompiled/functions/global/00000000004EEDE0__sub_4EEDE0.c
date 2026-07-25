/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEDE0
 * Mangled: sub_4EEDE0
 * Demangled: sub_4EEDE0
 *
 * Callers: 18
 *   0x00000000004EBA24  sub_4EBA24
 *   0x00000000004EBB2C  sub_4EBB2C
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EDD78  sub_4EDD78
 *   0x00000000004EF820  sub_4EF820
 *   0x00000000004F3464  sub_4F3464
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F3708  sub_4F3708
 *   0x00000000004F3A60  sub_4F3A60
 *   0x00000000004F3DB4  sub_4F3DB4
 *   0x00000000004F3EC8  sub_4F3EC8
 *   0x00000000004F5064  sub_4F5064
 *   0x00000000004F8824  sub_4F8824
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501D18  sub_501D18
 *   0x0000000000501F70  sub_501F70
 *   0x0000000000502624  sub_502624
 *
 * Callees: 1
 *   0x00000000004EB320  sub_4EB320
 *
 * Referenced strings: 3
 *   insn=0x00000000004EEDE4 string=0x00000000004EEDE8 "A"
 *   insn=0x00000000004EEDE8 string=0x00000000004EEDF0 "L"
 *   insn=0x00000000004EEDE8 string=0x0000000000599B4C "memory allocation error: block too big"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_4EEDE0(__int64 a1)
{
  sub_4EB320(a1, "memory allocation error: block too big");
}

