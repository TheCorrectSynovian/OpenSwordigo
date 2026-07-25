/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003158A8
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponentC2ERKS1_
 * Demangled: Caver::Proto::PressureTriggerComponent::PressureTriggerComponent(Caver::Proto::PressureTriggerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FF2C0  Caver::Proto::PressureTriggerComponent::MergeFrom(Caver::Proto::PressureTriggerComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x00000000003158B4 string=0x00000000003158B8 ""
 *   insn=0x00000000003158C4 string=0x00000000003158C8 "A"
 *   insn=0x00000000003158C8 string=0x00000000003158CC "h~"
 *   insn=0x00000000003158D0 string=0x00000000003158D4 "{"
 *   insn=0x00000000003158E8 string=0x00000000003158EC "E"
 *   insn=0x00000000003158EC string=0x00000000001F7600 "0'"
 *   insn=0x000000000031590C string=0x0000000000315910 "V"
 *   insn=0x0000000000315928 string=0x000000000031592C "h"
 *   insn=0x0000000000315938 string=0x000000000031593C "h"
 *   insn=0x0000000000315940 string=0x0000000000315944 "I"
 *   insn=0x0000000000315948 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000315954 string=0x0000000000315958 "ct"
 *   insn=0x000000000031595C string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000315960 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000315968 string=0x000000000031596C ")"
 *   insn=0x000000000031596C string=0x00000000001FC210 "0'"
 *   insn=0x0000000000315978 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000315980 string=0x0000000000315984 "h"
 *   insn=0x0000000000315980 string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000315984 string=0x0000000000315988 "h"
 *   insn=0x0000000000315988 string=0x000000000031598C "7"
 *   insn=0x0000000000315990 string=0x0000000000315994 "i"
 *   insn=0x0000000000315994 string=0x0000000000315998 ""
 *   insn=0x00000000003159A0 string=0x00000000003159A4 "h*@"
 *   insn=0x00000000003159AC string=0x00000000003159B0 "iB@9"
 *   insn=0x00000000003159B0 string=0x00000000003159B4 ""
 *   insn=0x00000000003159BC string=0x00000000003159C0 "h*@"
 *   insn=0x00000000003159CC string=0x00000000003159D0 ""
 *   insn=0x00000000003159D8 string=0x00000000003159F0 "i"
 *   insn=0x00000000003159E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003159E8 string=0x00000000001F5000 "P'"
 *   insn=0x00000000003159F0 string=0x00000000003159F4 "h"
 *   insn=0x00000000003159F4 string=0x00000000003159F8 ")"
 *   insn=0x0000000000315A00 string=0x0000000000315A04 ")"
 *   insn=0x0000000000315A04 string=0x0000000000315A08 "("
 *   insn=0x0000000000315A0C string=0x0000000000315A10 "dw"
 *   insn=0x0000000000315A10 string=0x0000000000315A14 "h*@"
 *   insn=0x0000000000315A10 string=0x00000000001F37A0 "P'"
 *   insn=0x0000000000315A20 string=0x0000000000315A24 ""
 *   insn=0x0000000000315A2C string=0x0000000000315A44 "i"
 *   insn=0x0000000000315A38 string=0x0000000000315A3C "q}"
 *   insn=0x0000000000315A44 string=0x0000000000315A48 "h"
 *   insn=0x0000000000315A48 string=0x0000000000315A4C ")"
 *   insn=0x0000000000315A54 string=0x0000000000315A58 ")"
 *   insn=0x0000000000315A58 string=0x0000000000315A5C "("
 *   insn=0x0000000000315A60 string=0x0000000000315A64 "Ow"
 *   insn=0x0000000000315A8C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000315A9C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000315AB8 string=0x0000000000315ABC "$"
 *   insn=0x0000000000315ACC string=0x0000000000315AD0 ""
 *   insn=0x0000000000315AD4 string=0x0000000000315AD8 "A"
 *   insn=0x0000000000315AD8 string=0x0000000000315ADC "h"
 *   insn=0x0000000000315ADC string=0x0000000000315AE0 "h"
 *   insn=0x0000000000315AE0 string=0x0000000000315AE4 ""
 *   insn=0x0000000000315AE4 string=0x0000000000315AE8 ""
 *   insn=0x0000000000315AEC string=0x0000000000315AF0 "`"
 *   insn=0x0000000000315AF0 string=0x0000000000315AF4 "`"
 *   insn=0x0000000000315AF8 string=0x0000000000315AFC ""
 *   insn=0x0000000000315AF8 string=0x0000000000315B08 "`"
 *   insn=0x0000000000315AFC string=0x0000000000315B00 ""
 *   insn=0x0000000000315B0C string=0x0000000000315B10 ""
 *   insn=0x0000000000315B10 string=0x0000000000315B14 ""
 *   insn=0x0000000000315B38 string=0x0000000000315B3C "b"
 *   insn=0x0000000000315B4C string=0x0000000000315B50 "h"
 *   insn=0x0000000000315B50 string=0x0000000000315B54 ""
 *   insn=0x0000000000315B58 string=0x0000000000315B5C ""
 *   insn=0x0000000000315B64 string=0x0000000000315B68 "`"
 *   insn=0x0000000000315B6C string=0x0000000000315B70 ""
 *   insn=0x0000000000315B6C string=0x0000000000315B7C "`"
 *   insn=0x0000000000315B70 string=0x0000000000315B74 ""
 *   insn=0x0000000000315B80 string=0x0000000000315B84 ""
 *   insn=0x0000000000315B90 string=0x0000000000315B94 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PressureTriggerComponent::PressureTriggerComponent(
        Caver::Proto::PressureTriggerComponent *this,
        const Caver::Proto::PressureTriggerComponent *a2)
{
  *((_BYTE *)this + 16) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C8118;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::PressureTriggerComponent::MergeFrom();
}

