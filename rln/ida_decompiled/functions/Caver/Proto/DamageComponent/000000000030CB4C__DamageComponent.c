/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030CB4C
 * Mangled: _ZN5Caver5Proto15DamageComponentC2ERKS1_
 * Demangled: Caver::Proto::DamageComponent::DamageComponent(Caver::Proto::DamageComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4A80  Caver::Proto::DamageComponent::MergeFrom(Caver::Proto::DamageComponent const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x000000000030CB58 string=0x000000000030CB5C "E"
 *   insn=0x000000000030CB68 string=0x000000000030CB6C "A"
 *   insn=0x000000000030CB74 string=0x000000000030CB78 "iR"
 *   insn=0x000000000030CB78 string=0x000000000030CB7C "h"
 *   insn=0x000000000030CB84 string=0x00000000001F4A80 "P'"
 *   insn=0x000000000030CB9C string=0x00000000001F7600 "0'"
 *   insn=0x000000000030CBA0 string=0x000000000030CBA4 "H"
 *   insn=0x000000000030CBBC string=0x000000000030CBC0 "U"
 *   insn=0x000000000030CBD8 string=0x000000000030CC18 "h.@"
 *   insn=0x000000000030CBDC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030CBF0 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030CBF4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000030CC00 string=0x00000000001FC210 "0'"
 *   insn=0x000000000030CC08 string=0x000000000030CC0C "="
 *   insn=0x000000000030CC0C string=0x00000000001FA500 "0'"
 *   insn=0x000000000030CC10 string=0x000000000030CC14 "w"
 *   insn=0x000000000030CC14 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030CC24 string=0x000000000030CC28 "h"
 *   insn=0x000000000030CC28 string=0x000000000030CC2C "("
 *   insn=0x000000000030CC34 string=0x000000000030CC38 "h(7(07"
 *   insn=0x000000000030CC38 string=0x000000000030CC3C "(07"
 *   insn=0x000000000030CC44 string=0x000000000030CC48 "i"
 *   insn=0x000000000030CC48 string=0x000000000030CC4C ""
 *   insn=0x000000000030CC54 string=0x000000000030CC58 "h.@"
 *   insn=0x000000000030CC60 string=0x000000000030CC64 "i"
 *   insn=0x000000000030CC64 string=0x000000000030CC68 ""
 *   insn=0x000000000030CC80 string=0x000000000030CD60 "\"
 *   insn=0x000000000030CC98 string=0x000000000030CC9C "i"
 *   insn=0x000000000030CC9C string=0x000000000030CCA0 ""
 *   insn=0x000000000030CCA8 string=0x000000000030CCAC "h.@"
 *   insn=0x000000000030CCB4 string=0x000000000030CCB8 "i"
 *   insn=0x000000000030CCB8 string=0x000000000030CCBC ""
 *   insn=0x000000000030CCC4 string=0x000000000030CCC8 "h.@"
 *   insn=0x000000000030CCC8 string=0x000000000030CCCC "("
 *   insn=0x000000000030CCD0 string=0x000000000030CCD4 "i"
 *   insn=0x000000000030CCD4 string=0x000000000030CCD8 ""
 *   insn=0x000000000030CCE0 string=0x000000000030CCE4 "h.@"
 *   insn=0x000000000030CCE4 string=0x000000000030CCE8 "h"
 *   insn=0x000000000030CCEC string=0x000000000030CCF0 "i"
 *   insn=0x000000000030CCF0 string=0x000000000030CCF4 ""
 *   insn=0x000000000030CCFC string=0x000000000030CD00 "h.@"
 *   insn=0x000000000030CD08 string=0x000000000030CD0C "ir@9"
 *   insn=0x000000000030CD0C string=0x000000000030CD10 ""
 *   insn=0x000000000030CD18 string=0x000000000030CD1C "h.@"
 *   insn=0x000000000030CD24 string=0x000000000030CD28 "i"@"
 *   insn=0x000000000030CD28 string=0x000000000030CD2C ""
 *   insn=0x000000000030CD34 string=0x000000000030CD38 "h.@"
 *   insn=0x000000000030CD38 string=0x000000000030CD3C "("
 *   insn=0x000000000030CD40 string=0x000000000030CD44 "i&@"
 *   insn=0x000000000030CD44 string=0x000000000030CD48 ""
 *   insn=0x000000000030CD50 string=0x000000000030CD54 "h.@"
 *   insn=0x000000000030CD54 string=0x000000000030CD58 "h"
 *   insn=0x000000000030CD60 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030CD68 string=0x000000000030CD6C "!"
 *   insn=0x000000000030CD74 string=0x000000000030CD78 "u"
 *   insn=0x000000000030CD7C string=0x000000000030CD80 "E"
 *   insn=0x000000000030CD80 string=0x000000000030CD84 "A"
 *   insn=0x000000000030CD84 string=0x000000000030CD88 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DamageComponent::DamageComponent(
        Caver::Proto::DamageComponent *this,
        const Caver::Proto::DamageComponent *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 21) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_WORD *)this + 20) = 256;
  *(_QWORD *)this = off_6C7B00;
  *((_DWORD *)this + 11) = 0;
  Caver::Proto::DamageComponent::MergeFrom();
}

