/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF464
 * Mangled: _ZN5Caver5Proto3BoxD0Ev
 * Demangled: Caver::Proto::Box::~Box()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002CF4AC  Caver::Proto::Box::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002CF470 string=0x00000000002CF474 ""
 *   insn=0x00000000002CF478 string=0x00000000002CF47C "A"
 *   insn=0x00000000002CF47C string=0x00000000002CF480 "h"
 *   insn=0x00000000002CF480 string=0x00000000002CF484 "_"
 *   insn=0x00000000002CF484 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CF494 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CF4A4 string=0x00000000002CF4A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Box::~Box(Caver::Proto::Box *this)
{
  *(_QWORD *)this = off_6C5B70;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

