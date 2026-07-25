/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003197E0
 * Mangled: _ZN5Caver5Proto25EntityControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::EntityControllerComponent::EntityControllerComponent(Caver::Proto::EntityControllerComponent const&)
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
 *   0x0000000000203E60  Caver::Proto::EntityControllerComponent::MergeFrom(Caver::Proto::EntityControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000003197E8 string=0x00000000003197EC "h"
 *   insn=0x00000000003197EC string=0x00000000003197F0 "eG"
 *   insn=0x00000000003197F4 string=0x00000000003197F8 " "
 *   insn=0x00000000003197FC string=0x0000000000319800 "A"
 *   insn=0x0000000000319808 string=0x000000000031980C "h"
 *   insn=0x000000000031980C string=0x0000000000319810 "`"
 *   insn=0x0000000000319828 string=0x000000000031982C "uw"
 *   insn=0x000000000031982C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000319830 string=0x0000000000319834 "$"
 *   insn=0x000000000031984C string=0x0000000000319850 "U"
 *   insn=0x0000000000319868 string=0x00000000003198A8 "h"
 *   insn=0x000000000031986C string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000319880 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000319884 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031988C string=0x0000000000319890 "`"
 *   insn=0x0000000000319890 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031989C string=0x00000000001FA500 "0'"
 *   insn=0x00000000003198A0 string=0x00000000003198A4 "S"
 *   insn=0x00000000003198A4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003198B0 string=0x00000000003198B4 "h"
 *   insn=0x00000000003198B4 string=0x00000000003198B8 "("
 *   insn=0x00000000003198C0 string=0x00000000003198C4 "h"
 *   insn=0x00000000003198C4 string=0x00000000003198C8 "(07"
 *   insn=0x00000000003198D0 string=0x00000000003198D4 "i*@"
 *   insn=0x00000000003198D4 string=0x00000000003198D8 ""
 *   insn=0x00000000003198EC string=0x00000000003199CC "Ar"
 *   insn=0x0000000000319904 string=0x0000000000319908 "i"
 *   insn=0x0000000000319908 string=0x000000000031990C ""
 *   insn=0x0000000000319914 string=0x0000000000319918 "h.@"
 *   insn=0x0000000000319920 string=0x0000000000319924 "i"
 *   insn=0x0000000000319924 string=0x0000000000319928 ""
 *   insn=0x0000000000319930 string=0x0000000000319934 "h.@"
 *   insn=0x0000000000319934 string=0x0000000000319938 "("
 *   insn=0x000000000031993C string=0x0000000000319940 "i"
 *   insn=0x0000000000319940 string=0x0000000000319944 ""
 *   insn=0x000000000031994C string=0x0000000000319950 "h.@"
 *   insn=0x0000000000319950 string=0x0000000000319954 "h"
 *   insn=0x0000000000319958 string=0x000000000031995C "i"
 *   insn=0x000000000031995C string=0x0000000000319960 ""
 *   insn=0x0000000000319968 string=0x000000000031996C "h.@"
 *   insn=0x0000000000319974 string=0x0000000000319978 "i"
 *   insn=0x0000000000319978 string=0x000000000031997C ""
 *   insn=0x0000000000319984 string=0x0000000000319988 "h.@"
 *   insn=0x0000000000319990 string=0x0000000000319994 "i"@"
 *   insn=0x0000000000319994 string=0x0000000000319998 ""
 *   insn=0x00000000003199A0 string=0x00000000003199A4 "h.@"
 *   insn=0x00000000003199A4 string=0x00000000003199A8 "("
 *   insn=0x00000000003199AC string=0x00000000003199B0 "i&@"
 *   insn=0x00000000003199B0 string=0x00000000003199B4 ""
 *   insn=0x00000000003199BC string=0x00000000003199C0 "h.@"
 *   insn=0x00000000003199C0 string=0x00000000003199C4 "h"
 *   insn=0x00000000003199CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003199E0 string=0x00000000003199E4 "Z"
 *   insn=0x00000000003199E4 string=0x00000000003199E8 "h"
 *   insn=0x00000000003199E8 string=0x00000000003199EC "eG"
 *   insn=0x00000000003199EC string=0x00000000003199F0 "A"
 *   insn=0x00000000003199F0 string=0x00000000003199F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityControllerComponent::EntityControllerComponent(
        Caver::Proto::EntityControllerComponent *this,
        const Caver::Proto::EntityControllerComponent *a2)
{
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C83E8;
  *((_QWORD *)this + 5) = 1;
  Caver::Proto::EntityControllerComponent::MergeFrom();
}

