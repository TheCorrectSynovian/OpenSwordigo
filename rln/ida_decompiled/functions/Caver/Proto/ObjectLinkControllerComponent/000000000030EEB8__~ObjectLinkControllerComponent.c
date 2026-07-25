/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030EEB8
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponentD0Ev
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::~ObjectLinkControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000200B10  Caver::Proto::ObjectLinkControllerComponent::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000030EEC4 string=0x000000000030EEC8 "M@"
 *   insn=0x000000000030EECC string=0x000000000030EED0 "A"
 *   insn=0x000000000030EED0 string=0x000000000030EED4 "h"
 *   insn=0x000000000030EEE0 string=0x00000000001F7600 "0'"
 *   insn=0x000000000030EEF0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030EF10 string=0x000000000030EF14 "l"
 *   insn=0x000000000030EF14 string=0x000000000030EF18 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ObjectLinkControllerComponent::~ObjectLinkControllerComponent(
        Caver::Proto::ObjectLinkControllerComponent *this)
{
  *(_QWORD *)this = off_6C7C68;
  Caver::Proto::ObjectLinkControllerComponent::SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

