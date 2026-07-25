/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D090
 * Mangled: _ZN5Caver5Proto15PortalComponentD0Ev
 * Demangled: Caver::Proto::PortalComponent::~PortalComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F7190  Caver::Proto::PortalComponent::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x000000000032D09C string=0x000000000032D0A0 ""
 *   insn=0x000000000032D0A4 string=0x000000000032D0A8 "A"
 *   insn=0x000000000032D0A8 string=0x000000000032D0AC "h"
 *   insn=0x000000000032D0AC string=0x000000000032D0B0 "8("
 *   insn=0x000000000032D0B0 string=0x00000000001F7190 "0'"
 *   insn=0x000000000032D0B4 string=0x000000000032D0B8 "R)"
 *   insn=0x000000000032D0B8 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032D0C4 string=0x000000000032D0C8 "z("
 *   insn=0x000000000032D0C8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032D0D8 string=0x000000000032D0DC "I)"
 *   insn=0x000000000032D0E0 string=0x000000000032D0E4 "s("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PortalComponent::~PortalComponent(Caver::Proto::PortalComponent *this)
{
  *(_QWORD *)this = off_6C9360;
  Caver::Proto::PortalComponent::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

