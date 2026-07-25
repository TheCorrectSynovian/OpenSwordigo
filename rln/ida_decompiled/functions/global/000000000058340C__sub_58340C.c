/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000058340C
 * Mangled: sub_58340C
 * Demangled: sub_58340C
 *
 * Callers: 2
 *   0x000000000057F9E8  sub_57F9E8
 *   0x000000000057FB24  sub_57FB24
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x0000000000583410 string=0x0000000000583414 " "
 *   insn=0x0000000000583414 string=0x0000000000583418 "!D;"
 *   insn=0x0000000000583424 string=0x0000000000583428 " "
 *   insn=0x0000000000583428 string=0x000000000058342C "!D;"
 *   insn=0x0000000000583438 string=0x000000000058343C " (""
 *   insn=0x000000000058343C string=0x0000000000583440 "!D;"
 *   insn=0x0000000000583444 string=0x0000000000583448 "a"
 *   insn=0x0000000000583448 string=0x000000000058344C " !"
 *   insn=0x000000000058344C string=0x0000000000583450 "!D;"
 *   insn=0x000000000058345C string=0x0000000000583460 " 8""
 *   insn=0x0000000000583460 string=0x0000000000583464 " D;"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_58340C(unsigned __int64 result)
{
  if ( (result & 1) != 0 )
    _ReadStatusReg(FPSR);
  if ( (result & 2) != 0 )
    _ReadStatusReg(FPSR);
  if ( (result & 4) != 0 )
    _ReadStatusReg(FPSR);
  if ( (result & 8) != 0 )
    _ReadStatusReg(FPSR);
  if ( (result & 0x10) != 0 )
    return _ReadStatusReg(FPSR);
  return result;
}

