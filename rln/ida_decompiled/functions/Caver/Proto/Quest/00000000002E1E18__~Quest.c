/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1E18
 * Mangled: _ZN5Caver5Proto5QuestD0Ev
 * Demangled: Caver::Proto::Quest::~Quest()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000200D10  Caver::Proto::Quest::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002E1E20 string=0x00000000002E1E24 "( "
 *   insn=0x00000000002E1E24 string=0x00000000002E1E28 ""
 *   insn=0x00000000002E1E2C string=0x00000000002E1E30 "A"
 *   insn=0x00000000002E1E30 string=0x00000000002E1E34 "h"
 *   insn=0x00000000002E1E40 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E1E50 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E1E74 string=0x00000000002E1E78 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Quest::~Quest(Caver::Proto::Quest *this)
{
  *(_QWORD *)this = off_6C68E0;
  Caver::Proto::Quest::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

