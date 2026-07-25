/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337498
 * Mangled: _ZN5Caver5Proto24DimensionObjectComponentC2ERKS1_
 * Demangled: Caver::Proto::DimensionObjectComponent::DimensionObjectComponent(Caver::Proto::DimensionObjectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000203E40  Caver::Proto::DimensionObjectComponent::MergeFrom(Caver::Proto::DimensionObjectComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x00000000003374A0 string=0x00000000003374A4 "h"
 *   insn=0x00000000003374A4 string=0x00000000003374A8 "iC"
 *   insn=0x00000000003374AC string=0x00000000003374B0 "A"
 *   insn=0x00000000003374B0 string=0x00000000003374B4 "h~"
 *   insn=0x00000000003374B4 string=0x00000000003374B8 "b2"
 *   insn=0x00000000003374CC string=0x00000000003374D0 "L"
 *   insn=0x00000000003374D0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003374EC string=0x00000000003374F0 "S"
 *   insn=0x00000000003374F0 string=0x00000000003374F4 "h"
 *   insn=0x00000000003374F4 string=0x00000000003374F8 "?"
 *   insn=0x0000000000337500 string=0x0000000000337540 "h"
 *   insn=0x0000000000337504 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000337518 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000033751C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000337524 string=0x0000000000337528 ":"
 *   insn=0x0000000000337528 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000337534 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000337538 string=0x000000000033753C "-"
 *   insn=0x000000000033753C string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000033754C string=0x0000000000337560 "\"
 *   insn=0x0000000000337560 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000337568 string=0x000000000033756C "!"
 *   insn=0x0000000000337574 string=0x0000000000337578 "u["
 *   insn=0x0000000000337578 string=0x000000000033757C "h"
 *   insn=0x000000000033757C string=0x0000000000337580 "iC"
 *   insn=0x0000000000337580 string=0x0000000000337584 "A"
 *   insn=0x0000000000337584 string=0x0000000000337588 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DimensionObjectComponent::DimensionObjectComponent(
        Caver::Proto::DimensionObjectComponent *this,
        const Caver::Proto::DimensionObjectComponent *a2)
{
  *(_QWORD *)this = off_6C9B58;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::DimensionObjectComponent::MergeFrom();
}

