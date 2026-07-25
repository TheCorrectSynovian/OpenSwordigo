/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6248
 * Mangled: _ZN5Caver5Proto10GUIMarginsD0Ev
 * Demangled: Caver::Proto::GUIMargins::~GUIMargins()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002D6290  Caver::Proto::GUIMargins::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002D6250 string=0x00000000002D6254 "h "
 *   insn=0x00000000002D6254 string=0x00000000002D6258 ""
 *   insn=0x00000000002D625C string=0x00000000002D6260 "A"
 *   insn=0x00000000002D6260 string=0x00000000002D6264 "h"
 *   insn=0x00000000002D6268 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D6278 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D6280 string=0x00000000002D6284 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GUIMargins::~GUIMargins(Caver::Proto::GUIMargins *this)
{
  *(_QWORD *)this = off_6C6020;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

