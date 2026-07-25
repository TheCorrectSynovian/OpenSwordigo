/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBAEC
 * Mangled: _ZN5Caver5Proto14MapNode_PortalC2Ev
 * Demangled: Caver::Proto::MapNode_Portal::MapNode_Portal(void)
 *
 * Callers: 1
 *   0x00000000001FB750  Caver::Proto::MapNode_Portal::MapNode_Portal(void)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000002DBAEC string=0x00000000002DBAF0 "aD"
 *   insn=0x00000000002DBAF4 string=0x00000000002DBAF8 "I "
 *   insn=0x00000000002DBAF8 string=0x00000000002DBAFC "j"
 *   insn=0x00000000002DBAFC string=0x00000000002DBB00 ")"
 *   insn=0x00000000002DBB00 string=0x00000000002DBB04 "@"
 *   insn=0x00000000002DBB04 string=0x00000000002DBB08 "A"
 *   insn=0x00000000002DBB0C string=0x00000000002DBB10 "\t"
 *   insn=0x00000000002DBB10 string=0x00000000002DBB14 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::MapNode_Portal::MapNode_Portal(Caver::Proto::MapNode_Portal *this)
{
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)&result = 1;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::MapNode_Portal::_default_destination_name_;
  *(_QWORD *)this = off_6C6610;
  *((_QWORD *)this + 3) = 1;
  *((_DWORD *)this + 9) = 0;
  return result;
}

