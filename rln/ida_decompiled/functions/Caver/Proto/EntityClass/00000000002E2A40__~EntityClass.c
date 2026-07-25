/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E2A40
 * Mangled: _ZN5Caver5Proto11EntityClassD0Ev
 * Demangled: Caver::Proto::EntityClass::~EntityClass()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F7200  Caver::Proto::EntityClass::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002E2A48 string=0x00000000002E2A4C "( "
 *   insn=0x00000000002E2A4C string=0x00000000002E2A50 ""
 *   insn=0x00000000002E2A54 string=0x00000000002E2A58 "A"
 *   insn=0x00000000002E2A58 string=0x00000000002E2A5C "h"
 *   insn=0x00000000002E2A60 string=0x00000000001F7200 "0'"
 *   insn=0x00000000002E2A68 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E2A78 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E2A90 string=0x00000000002E2A94 "R"
 *   insn=0x00000000002E2A9C string=0x00000000002E2AA0 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityClass::~EntityClass(Caver::Proto::EntityClass *this)
{
  *(_QWORD *)this = off_6C6958;
  Caver::Proto::EntityClass::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

