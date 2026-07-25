/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBFF4
 * Mangled: _ZNK5Caver5Proto14MapNode_Portal3NewEv
 * Demangled: Caver::Proto::MapNode_Portal::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 11
 *   insn=0x00000000002DBFFC string=0x00000000002DC000 "xe"
 *   insn=0x00000000002DC000 string=0x00000000002DC004 "H "
 *   insn=0x00000000002DC000 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DC004 string=0x00000000002DC008 "aD"
 *   insn=0x00000000002DC00C string=0x00000000002DC010 "I "
 *   insn=0x00000000002DC010 string=0x00000000002DC014 "j"
 *   insn=0x00000000002DC014 string=0x00000000002DC018 ")"
 *   insn=0x00000000002DC018 string=0x00000000002DC01C "@"
 *   insn=0x00000000002DC01C string=0x00000000002DC020 "A"
 *   insn=0x00000000002DC024 string=0x00000000002DC028 "\t"
 *   insn=0x00000000002DC028 string=0x00000000002DC02C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::MapNode_Portal::New(Caver::Proto::MapNode_Portal *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x28u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)&result = 1;
  *(_BYTE *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 16) = &Caver::Proto::MapNode_Portal::_default_destination_name_;
  *(_QWORD *)v1 = off_6C6610;
  *(_QWORD *)(v1 + 24) = 1;
  *(_DWORD *)(v1 + 36) = 0;
  return result;
}

