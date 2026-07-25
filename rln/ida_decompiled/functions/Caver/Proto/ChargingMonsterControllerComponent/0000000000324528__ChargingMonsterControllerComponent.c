/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324528
 * Mangled: _ZN5Caver5Proto34ChargingMonsterControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(Caver::Proto::ChargingMonsterControllerComponent const&)
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
 *   0x00000000001FE7E0  Caver::Proto::ChargingMonsterControllerComponent::MergeFrom(Caver::Proto::ChargingMonsterControllerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 44
 *   insn=0x0000000000324530 string=0x0000000000324534 ""
 *   insn=0x0000000000324534 string=0x0000000000324538 ""
 *   insn=0x0000000000324544 string=0x0000000000324548 "A"
 *   insn=0x0000000000324548 string=0x000000000032454C "h~"
 *   insn=0x0000000000324564 string=0x0000000000324568 "&L"
 *   insn=0x0000000000324568 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000324570 string=0x0000000000324574 "v"
 *   insn=0x0000000000324588 string=0x000000000032458C "U"
 *   insn=0x00000000003245A4 string=0x00000000003245A8 """
 *   insn=0x00000000003245A4 string=0x00000000003245E4 "h"
 *   insn=0x00000000003245A8 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000003245BC string=0x00000000003245C0 "!"
 *   insn=0x00000000003245BC string=0x00000000001F63F0 "0'"
 *   insn=0x00000000003245C0 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000003245CC string=0x00000000001FC210 "0'"
 *   insn=0x00000000003245D8 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003245E0 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003245E4 string=0x00000000003245E8 "H"
 *   insn=0x00000000003245E8 string=0x00000000003245EC "H"
 *   insn=0x00000000003245EC string=0x00000000003245F0 ""
 *   insn=0x0000000000324600 string=0x0000000000324604 "i"
 *   insn=0x0000000000324604 string=0x0000000000324608 ""
 *   insn=0x0000000000324618 string=0x000000000032461C "a"
 *   insn=0x000000000032461C string=0x00000000003246A8 "\nG"
 *   insn=0x0000000000324634 string=0x0000000000324638 "i"
 *   insn=0x0000000000324638 string=0x000000000032463C ""
 *   insn=0x0000000000324644 string=0x0000000000324648 "h"@"
 *   insn=0x0000000000324648 string=0x000000000032464C "H"
 *   insn=0x0000000000324650 string=0x0000000000324654 "i"
 *   insn=0x0000000000324654 string=0x0000000000324658 ""
 *   insn=0x0000000000324660 string=0x0000000000324664 "h"@"
 *   insn=0x000000000032466C string=0x0000000000324670 "i"
 *   insn=0x0000000000324670 string=0x0000000000324674 ""
 *   insn=0x000000000032467C string=0x0000000000324680 "h"@"
 *   insn=0x0000000000324688 string=0x000000000032468C "i"
 *   insn=0x000000000032468C string=0x0000000000324690 ""
 *   insn=0x0000000000324698 string=0x000000000032469C "h"@"
 *   insn=0x000000000032469C string=0x00000000003246A0 ""
 *   insn=0x00000000003246A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003246BC string=0x00000000003246C0 "#"
 *   insn=0x00000000003246C0 string=0x00000000003246C4 ""
 *   insn=0x00000000003246C4 string=0x00000000003246C8 ""
 *   insn=0x00000000003246C8 string=0x00000000003246CC "A"
 *   insn=0x00000000003246CC string=0x00000000003246D0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(
        Caver::Proto::ChargingMonsterControllerComponent *this,
        const Caver::Proto::ChargingMonsterControllerComponent *a2)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = off_6C8BE0;
  *((_QWORD *)this + 1) = 0;
  Caver::Proto::ChargingMonsterControllerComponent::MergeFrom();
}

