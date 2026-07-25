/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303384
 * Mangled: _ZN5Caver5Proto14ModelComponentD0Ev
 * Demangled: Caver::Proto::ModelComponent::~ModelComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000203870  Caver::Proto::ModelComponent::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000030338C string=0x0000000000303390 ""
 *   insn=0x0000000000303390 string=0x0000000000303394 ""
 *   insn=0x0000000000303398 string=0x000000000030339C "A"
 *   insn=0x000000000030339C string=0x00000000003033A0 "h"
 *   insn=0x00000000003033A0 string=0x00000000003033A4 "3"
 *   insn=0x00000000003033AC string=0x00000000001F7600 "0'"
 *   insn=0x00000000003033BC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003033DC string=0x00000000003033E0 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ModelComponent::~ModelComponent(Caver::Proto::ModelComponent *this)
{
  *(_QWORD *)this = off_6C75D8;
  Caver::Proto::ModelComponent::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

