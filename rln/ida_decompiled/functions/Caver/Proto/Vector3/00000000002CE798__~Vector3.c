/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE798
 * Mangled: _ZN5Caver5Proto7Vector3D0Ev
 * Demangled: Caver::Proto::Vector3::~Vector3()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002CE7E0  Caver::Proto::Vector3::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002CE7A4 string=0x00000000002CE7A8 ""
 *   insn=0x00000000002CE7AC string=0x00000000002CE7B0 "A"
 *   insn=0x00000000002CE7B0 string=0x00000000002CE7B4 "h"
 *   insn=0x00000000002CE7B8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CE7C8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CE7D8 string=0x00000000002CE7DC ":"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Vector3::~Vector3(Caver::Proto::Vector3 *this)
{
  *(_QWORD *)this = off_6C5A80;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

