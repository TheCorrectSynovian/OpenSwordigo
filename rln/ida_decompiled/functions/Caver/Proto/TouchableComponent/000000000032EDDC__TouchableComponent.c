/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032EDDC
 * Mangled: _ZN5Caver5Proto18TouchableComponentC2ERKS1_
 * Demangled: Caver::Proto::TouchableComponent::TouchableComponent(Caver::Proto::TouchableComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F4BD0  Caver::Proto::TouchableComponent::MergeFrom(Caver::Proto::TouchableComponent const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x000000000032EDE8 string=0x000000000032EDEC ""
 *   insn=0x000000000032EDF8 string=0x000000000032EDFC "A"
 *   insn=0x000000000032EDFC string=0x000000000032EE00 "h"
 *   insn=0x000000000032EE00 string=0x000000000032EE04 "s"
 *   insn=0x000000000032EE04 string=0x00000000001F4BD0 "P'"
 *   insn=0x000000000032EE1C string=0x00000000001F7600 "0'"
 *   insn=0x000000000032EE24 string=0x000000000032EE28 "I}"
 *   insn=0x000000000032EE3C string=0x000000000032EE40 "V"
 *   insn=0x000000000032EE58 string=0x000000000032EE5C "hb@9"
 *   insn=0x000000000032EE68 string=0x000000000032EE6C "i"
 *   insn=0x000000000032EE6C string=0x000000000032EE70 ""
 *   insn=0x000000000032EE78 string=0x000000000032EE7C "h"
 *   insn=0x000000000032EE88 string=0x000000000032EE8C ""
 *   insn=0x000000000032EE9C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032EEA0 string=0x000000000032EEA4 "W"
 *   insn=0x000000000032EEA4 string=0x00000000001F5000 "P'"
 *   insn=0x000000000032EEAC string=0x000000000032EEB0 "h\n@"
 *   insn=0x000000000032EEB0 string=0x000000000032EEB4 ")"
 *   insn=0x000000000032EEBC string=0x000000000032EEC0 ")"
 *   insn=0x000000000032EEC0 string=0x000000000032EEC4 "("
 *   insn=0x000000000032EEC8 string=0x000000000032EECC "5"
 *   insn=0x000000000032EECC string=0x00000000001F37A0 "P'"
 *   insn=0x000000000032EED4 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032EEE0 string=0x000000000032EEE4 "C"
 *   insn=0x000000000032EEE4 string=0x000000000032EEE8 "B"
 *   insn=0x000000000032EEE8 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032EEEC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032EEF8 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032EF04 string=0x00000000001FA500 "0'"
 *   insn=0x000000000032EF0C string=0x000000000032EF10 "hb@9"
 *   insn=0x000000000032EF0C string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032EF3C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032EF48 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032EF4C string=0x000000000032EF50 "]J\t"
 *   insn=0x000000000032EF60 string=0x000000000032EF64 "XJ\t"
 *   insn=0x000000000032EF78 string=0x000000000032EF7C ""
 *   insn=0x000000000032EF80 string=0x000000000032EF84 "A"
 *   insn=0x000000000032EF84 string=0x000000000032EF88 "h"
 *   insn=0x000000000032EF8C string=0x000000000032EF90 ""
 *   insn=0x000000000032EF90 string=0x000000000032EF94 ""
 *   insn=0x000000000032EF9C string=0x000000000032EFA0 "`\n@"
 *   insn=0x000000000032EFA4 string=0x000000000032EFA8 ""
 *   insn=0x000000000032EFA8 string=0x000000000032EFAC ""
 *   insn=0x000000000032EFD0 string=0x000000000032EFD4 "<J\t"
 *   insn=0x000000000032EFDC string=0x000000000032EFE0 ""
 *   insn=0x000000000032EFE0 string=0x000000000032EFE4 ""
 *   insn=0x000000000032EFF4 string=0x000000000032EFF8 ""
 *   insn=0x000000000032EFFC string=0x000000000032F000 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::TouchableComponent::TouchableComponent(
        Caver::Proto::TouchableComponent *this,
        const Caver::Proto::TouchableComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = off_6C94C8;
  Caver::Proto::TouchableComponent::MergeFrom();
}

