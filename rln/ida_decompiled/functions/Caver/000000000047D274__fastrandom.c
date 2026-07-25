/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D274
 * Mangled: _ZN5Caver10fastrandomEv
 * Demangled: Caver::fastrandom(void)
 *
 * Callers: 1
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000047D274 string=0x000000000047D278 "\t"
 *   insn=0x000000000047D27C string=0x000000000047D288 ")}\n"
 *   insn=0x000000000047D288 string=0x000000000047D28C ")-"
 *   insn=0x000000000047D28C string=0x000000000047D290 "*"
 *   insn=0x000000000047D290 string=0x000000000047D294 " "
 *   insn=0x000000000047D294 string=0x000000000047D298 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall Caver::fastrandom(Caver *this)
{
  unsigned __int64 v1; // x9
  unsigned __int64 result; // x0

  v1 = 0x5DEECE66DLL * qword_6E9D20 + 11;
  result = (v1 >> 17) & 0x7FFFFFFF;
  qword_6E9D20 = v1 & 0xFFFFFFFFFFFFLL;
  return result;
}

