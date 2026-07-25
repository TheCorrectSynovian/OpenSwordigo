/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FDFC8
 * Mangled: sub_4FDFC8
 * Demangled: sub_4FDFC8
 *
 * Callers: 1
 *   0x00000000004FDEDC  sub_4FDEDC
 *
 * Callees: 1
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 9
 *   insn=0x00000000004FDFD4 string=0x00000000004FDFD8 ""
 *   insn=0x00000000004FDFDC string=0x00000000004FDFE0 "4"
 *   insn=0x00000000004FDFE0 string=0x00000000004FDFE4 "5|@"
 *   insn=0x00000000004FDFFC string=0x00000000004FE004 "Y\n"
 *   insn=0x00000000004FDFFC string=0x000000000059B07B "control structure too long"
 *   insn=0x00000000004FE008 string=0x00000000004FE00C "ijh"
 *   insn=0x00000000004FE010 string=0x00000000004FE014 "J9"
 *   insn=0x00000000004FE014 string=0x00000000004FE018 "*5"
 *   insn=0x00000000004FE018 string=0x00000000004FE01C "jj("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_4FDFC8(_QWORD *result, int a2, int a3)
{
  int v3; // w20
  int v4; // w8

  v3 = ~a2 + a3;
  if ( v3 >= 0 )
    v4 = ~a2 + a3;
  else
    v4 = -v3;
  if ( v4 >= 0x20000 )
    sub_500968(result[3], "control structure too long");
  *(_DWORD *)(*(_QWORD *)(*result + 24LL) + 4LL * a2) = ((v3 << 14) + 2147467264) & 0xFFFFC000
                                                      | *(_DWORD *)(*(_QWORD *)(*result + 24LL) + 4LL * a2) & 0x3FFF;
  return result;
}

