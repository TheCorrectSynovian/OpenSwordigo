/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003087AC
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponentC2ERKS1_
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(Caver::Proto::GroundMeshGeneratorComponent const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FA930  Caver::Proto::GroundMeshGeneratorComponent::MergeFrom(Caver::Proto::GroundMeshGeneratorComponent const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 65
 *   insn=0x00000000003087B8 string=0x00000000003087BC ""
 *   insn=0x00000000003087C8 string=0x00000000003087CC "A"
 *   insn=0x00000000003087D0 string=0x00000000003087D4 "h"
 *   insn=0x00000000003087D8 string=0x00000000003087DC "U"
 *   insn=0x00000000003087DC string=0x00000000001FA930 "0'"
 *   insn=0x00000000003087F4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003087F8 string=0x00000000003087FC "2"
 *   insn=0x0000000000308814 string=0x0000000000308818 "U"
 *   insn=0x0000000000308830 string=0x0000000000308870 "h:@"
 *   insn=0x0000000000308834 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000308848 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000030884C string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000308854 string=0x0000000000308858 "n"
 *   insn=0x0000000000308858 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000308860 string=0x0000000000308864 "'"
 *   insn=0x0000000000308864 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000308868 string=0x000000000030886C "a"
 *   insn=0x000000000030886C string=0x00000000001FA1F0 "0'"
 *   insn=0x0000000000308878 string=0x000000000030887C ""
 *   insn=0x0000000000308884 string=0x0000000000308888 "H"
 *   insn=0x0000000000308888 string=0x000000000030888C " 7"
 *   insn=0x000000000030889C string=0x00000000003088A0 "i*@"
 *   insn=0x00000000003088A0 string=0x00000000003088A4 ""
 *   insn=0x00000000003088AC string=0x00000000003088B0 "h:@"
 *   insn=0x00000000003088B8 string=0x00000000003088BC "H@7\tH7"
 *   insn=0x00000000003088BC string=0x00000000003088C0 "\tH7"
 *   insn=0x00000000003088C8 string=0x00000000003088CC "i6@"
 *   insn=0x00000000003088CC string=0x00000000003088D0 ""
 *   insn=0x00000000003088E4 string=0x0000000000308A00 "4"
 *   insn=0x00000000003088FC string=0x0000000000308900 "i"
 *   insn=0x0000000000308900 string=0x0000000000308904 ""
 *   insn=0x000000000030890C string=0x0000000000308910 "h:@"
 *   insn=0x0000000000308918 string=0x000000000030891C "i"
 *   insn=0x000000000030891C string=0x0000000000308920 ""
 *   insn=0x0000000000308928 string=0x000000000030892C "h:@"
 *   insn=0x0000000000308934 string=0x0000000000308938 "i"
 *   insn=0x0000000000308938 string=0x000000000030893C ""
 *   insn=0x0000000000308944 string=0x0000000000308948 "h:@"
 *   insn=0x0000000000308948 string=0x000000000030894C ""
 *   insn=0x0000000000308950 string=0x0000000000308954 "i"
 *   insn=0x0000000000308954 string=0x0000000000308958 ""
 *   insn=0x0000000000308960 string=0x0000000000308964 "h:@"
 *   insn=0x0000000000308964 string=0x0000000000308968 "H"
 *   insn=0x000000000030896C string=0x0000000000308970 "i"
 *   insn=0x0000000000308970 string=0x0000000000308974 ""
 *   insn=0x000000000030897C string=0x0000000000308980 "h:@"
 *   insn=0x0000000000308988 string=0x000000000030898C "i"@"
 *   insn=0x000000000030898C string=0x0000000000308990 ""
 *   insn=0x0000000000308998 string=0x000000000030899C "h:@"
 *   insn=0x00000000003089A4 string=0x00000000003089A8 "i&@"
 *   insn=0x00000000003089A8 string=0x00000000003089AC ""
 *   insn=0x00000000003089B4 string=0x00000000003089B8 "h:@"
 *   insn=0x00000000003089B8 string=0x00000000003089BC ""
 *   insn=0x00000000003089C4 string=0x00000000003089C8 "i.@"
 *   insn=0x00000000003089C8 string=0x00000000003089CC ""
 *   insn=0x00000000003089D4 string=0x00000000003089D8 "h:@"
 *   insn=0x00000000003089D8 string=0x00000000003089DC "H"
 *   insn=0x00000000003089E0 string=0x00000000003089E4 "i2@"
 *   insn=0x00000000003089E4 string=0x00000000003089E8 ""
 *   insn=0x00000000003089F0 string=0x00000000003089F4 "h:@"
 *   insn=0x0000000000308A00 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000308A14 string=0x0000000000308A18 "M"
 *   insn=0x0000000000308A1C string=0x0000000000308A20 ""
 *   insn=0x0000000000308A20 string=0x0000000000308A24 "A"
 *   insn=0x0000000000308A24 string=0x0000000000308A28 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(
        Caver::Proto::GroundMeshGeneratorComponent *this,
        const Caver::Proto::GroundMeshGeneratorComponent *a2)
{
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C78A8;
  *((_DWORD *)this + 14) = 0;
  Caver::Proto::GroundMeshGeneratorComponent::MergeFrom();
}

