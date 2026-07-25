/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBB24
 * Mangled: _ZN5Caver5Proto14MapNode_Portal10SharedCtorEv
 * Demangled: Caver::Proto::MapNode_Portal::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002DBB2C string=0x00000000002DBB30 "H "
 *   insn=0x00000000002DBB30 string=0x00000000002DBB34 ""
 *   insn=0x00000000002DBB40 string=0x00000000002DBB44 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::MapNode_Portal::SharedCtor(Caver::Proto::MapNode_Portal *this)
{
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)&result = 1;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 3) = 1;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::MapNode_Portal::_default_destination_name_;
  return result;
}

