/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030517C
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponentC2ERKS1_
 * Demangled: Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent(Caver::Proto::ModelTransformControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F8EB0  Caver::Proto::ModelTransformControllerComponent::MergeFrom(Caver::Proto::ModelTransformControllerComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 83
 *   insn=0x0000000000305184 string=0x0000000000305188 ""
 *   insn=0x0000000000305188 string=0x000000000030518C "\tF"
 *   insn=0x0000000000305198 string=0x000000000030519C "A"
 *   insn=0x000000000030519C string=0x00000000003051A0 "h"
 *   insn=0x00000000003051A4 string=0x00000000003051A8 "B"
 *   insn=0x00000000003051A8 string=0x00000000001F8EB0 "0'"
 *   insn=0x00000000003051C0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003051C8 string=0x00000000003051CC "`$"
 *   insn=0x00000000003051E0 string=0x00000000003051E4 "V"
 *   insn=0x00000000003051F8 string=0x00000000003051FC " "
 *   insn=0x00000000003051FC string=0x0000000000305200 "h"
 *   insn=0x00000000003051FC string=0x0000000000305300 """
 *   insn=0x0000000000305200 string=0x0000000000305204 "\n"
 *   insn=0x000000000030520C string=0x0000000000305210 "i"
 *   insn=0x0000000000305210 string=0x0000000000305214 ""
 *   insn=0x000000000030521C string=0x0000000000305220 "h*@"
 *   insn=0x000000000030522C string=0x0000000000305230 ""
 *   insn=0x0000000000305238 string=0x0000000000305250 "\t"
 *   insn=0x0000000000305240 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000305244 string=0x0000000000305248 "B"
 *   insn=0x0000000000305248 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000305250 string=0x0000000000305254 "h\n@"
 *   insn=0x0000000000305254 string=0x0000000000305258 ")1A"
 *   insn=0x0000000000305260 string=0x0000000000305264 ")"
 *   insn=0x0000000000305264 string=0x0000000000305268 "("
 *   insn=0x000000000030526C string=0x0000000000305270 "d"
 *   insn=0x0000000000305270 string=0x0000000000305274 "h*@"
 *   insn=0x0000000000305270 string=0x00000000001F3800 "P'"
 *   insn=0x0000000000305280 string=0x0000000000305284 ""
 *   insn=0x000000000030528C string=0x00000000003052A4 "\t"
 *   insn=0x0000000000305298 string=0x000000000030529C "-"
 *   insn=0x00000000003052A4 string=0x00000000003052A8 "h"
 *   insn=0x00000000003052A8 string=0x00000000003052AC ")1A"
 *   insn=0x00000000003052B4 string=0x00000000003052B8 ")"
 *   insn=0x00000000003052B8 string=0x00000000003052BC "("
 *   insn=0x00000000003052C0 string=0x00000000003052C4 "O"
 *   insn=0x00000000003052C4 string=0x00000000003052C8 "h*@"
 *   insn=0x00000000003052D0 string=0x00000000003052D4 "i"@"
 *   insn=0x00000000003052D4 string=0x00000000003052D8 ""
 *   insn=0x00000000003052E0 string=0x00000000003052E4 "h*@"
 *   insn=0x00000000003052EC string=0x00000000003052F0 "i&@"
 *   insn=0x00000000003052F0 string=0x00000000003052F4 ""
 *   insn=0x0000000000305300 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000030530C string=0x0000000000305310 "c"
 *   insn=0x0000000000305310 string=0x0000000000305314 "7"
 *   insn=0x0000000000305314 string=0x0000000000305318 "!"
 *   insn=0x0000000000305314 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000305318 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000305324 string=0x00000000001FC210 "0'"
 *   insn=0x000000000030532C string=0x0000000000305330 "t"
 *   insn=0x0000000000305330 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000305338 string=0x000000000030533C "h"
 *   insn=0x0000000000305338 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000030533C string=0x0000000000305340 "H"
 *   insn=0x0000000000305368 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000305378 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030537C string=0x0000000000305380 "Q"
 *   insn=0x0000000000305390 string=0x0000000000305394 "L"
 *   insn=0x00000000003053A4 string=0x00000000003053A8 ""
 *   insn=0x00000000003053A8 string=0x00000000003053AC "\tF"
 *   insn=0x00000000003053B0 string=0x00000000003053B4 "A"
 *   insn=0x00000000003053B4 string=0x00000000003053B8 "h"
 *   insn=0x00000000003053B8 string=0x00000000003053BC ""
 *   insn=0x00000000003053BC string=0x00000000003053C0 "1A"
 *   insn=0x00000000003053C0 string=0x00000000003053C4 ""
 *   insn=0x00000000003053C8 string=0x00000000003053CC "`"
 *   insn=0x00000000003053CC string=0x00000000003053D0 "`\n@"
 *   insn=0x00000000003053D4 string=0x00000000003053D8 ""
 *   insn=0x00000000003053D4 string=0x00000000003053E4 "`"
 *   insn=0x00000000003053D8 string=0x00000000003053DC ""
 *   insn=0x00000000003053E8 string=0x00000000003053EC ""
 *   insn=0x00000000003053EC string=0x00000000003053F0 ""
 *   insn=0x000000000030540C string=0x0000000000305410 "|"
 *   insn=0x0000000000305414 string=0x0000000000305418 "+"
 *   insn=0x0000000000305428 string=0x000000000030542C ""
 *   insn=0x000000000030542C string=0x0000000000305430 "1A"
 *   insn=0x0000000000305434 string=0x0000000000305438 ""
 *   insn=0x0000000000305440 string=0x0000000000305444 "`\n@"
 *   insn=0x0000000000305448 string=0x000000000030544C ""
 *   insn=0x0000000000305448 string=0x0000000000305458 "`"
 *   insn=0x000000000030544C string=0x0000000000305450 ""
 *   insn=0x000000000030545C string=0x0000000000305460 ""
 *   insn=0x000000000030546C string=0x0000000000305470 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent(
        Caver::Proto::ModelTransformControllerComponent *this,
        const Caver::Proto::ModelTransformControllerComponent *a2)
{
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C7740;
  *((_DWORD *)this + 10) = 0;
  Caver::Proto::ModelTransformControllerComponent::MergeFrom();
}

