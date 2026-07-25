/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513C9C
 * Mangled: _ZN17CPVRTResourceFileC2EPKcm
 * Demangled: CPVRTResourceFile::CPVRTResourceFile(char const*,ulong)
 *
 * Callers: 1
 *   0x00000000001F80A0  CPVRTResourceFile::CPVRTResourceFile(char const*,ulong)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x0000000000513C9C string=0x0000000000513CA0 "ID"
 *   insn=0x0000000000513CA0 string=0x0000000000513CA4 ") "
 *   insn=0x0000000000513CA4 string=0x0000000000513CA8 "\t"
 *   insn=0x0000000000513CAC string=0x0000000000513CB0 "A"
 *   insn=0x0000000000513CB0 string=0x0000000000513CB4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTResourceFile::CPVRTResourceFile(CPVRTResourceFile *this, const char *a2, __int64 a3)
{
  *((_WORD *)this + 4) = 257;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)this = off_6D8E08;
}

