/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F85C0
 * Mangled: ._ZSt18uncaught_exceptionv
 * Demangled: std::uncaught_exception(void)
 *
 * Callers: 26
 *   0x000000000053FCF8  sub_53FCF8
 *   0x000000000053FD7C  sub_53FD7C
 *   0x000000000053FF24  sub_53FF24
 *   0x00000000005400E4  sub_5400E4
 *   0x0000000000540490  sub_540490
 *   0x0000000000540A88  sub_540A88
 *   0x0000000000540D40  sub_540D40
 *   0x0000000000540F84  sub_540F84
 *   0x00000000005411B8  sub_5411B8
 *   0x00000000005413EC  sub_5413EC
 *   0x0000000000541620  sub_541620
 *   0x0000000000541868  sub_541868
 *   0x0000000000541AB0  sub_541AB0
 *   0x000000000054241C  sub_54241C
 *   0x00000000005424A0  sub_5424A0
 *   0x0000000000542648  sub_542648
 *   0x0000000000542808  sub_542808
 *   0x0000000000542B74  sub_542B74
 *   0x000000000054307C  sub_54307C
 *   0x00000000005434B0  sub_5434B0
 *   0x00000000005436D8  sub_5436D8
 *   0x00000000005438F0  sub_5438F0
 *   0x0000000000543B08  sub_543B08
 *   0x0000000000543D20  sub_543D20
 *   0x0000000000543F40  sub_543F40
 *   0x0000000000544160  sub_544160
 *
 * Callees: 1
 *   0x000000000051D380  std::uncaught_exception(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F85C8 string=0x00000000001F85CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::uncaught_exception(void)
{
  return _ZSt18uncaught_exceptionv();
}

