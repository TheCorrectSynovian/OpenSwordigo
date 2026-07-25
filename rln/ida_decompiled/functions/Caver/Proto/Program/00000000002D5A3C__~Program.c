/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5A3C
 * Mangled: _ZN5Caver5Proto7ProgramD0Ev
 * Demangled: Caver::Proto::Program::~Program()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3CF0  Caver::Proto::Program::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000002D5A48 string=0x00000000002D5A4C ""
 *   insn=0x00000000002D5A50 string=0x00000000002D5A54 "A"
 *   insn=0x00000000002D5A54 string=0x00000000002D5A58 "h"
 *   insn=0x00000000002D5A5C string=0x00000000001F3CF0 "P'"
 *   insn=0x00000000002D5A64 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D5A74 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D5A8C string=0x00000000002D5A90 ""
 *   insn=0x00000000002D5A98 string=0x00000000002D5A9C ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Program::~Program(Caver::Proto::Program *this)
{
  *(_QWORD *)this = off_6C5FA8;
  Caver::Proto::Program::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

