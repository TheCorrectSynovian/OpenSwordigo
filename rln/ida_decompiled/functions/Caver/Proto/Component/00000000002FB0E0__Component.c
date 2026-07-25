/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FB0E0
 * Mangled: _ZN5Caver5Proto9ComponentC2ERKS1_
 * Demangled: Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAB70  Caver::Proto::Component::MergeFrom(Caver::Proto::Component const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FDF90  google::protobuf::internal::ExtensionSet::ExtensionSet(void)
 *   0x0000000000202450  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x0000000000203370  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *   0x00000000002035D0  Caver::Proto::Component::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 107
 *   insn=0x00000000002FB0EC string=0x00000000002FB0F0 "H"
 *   insn=0x00000000002FB0F0 string=0x00000000002FB0F4 ""
 *   insn=0x00000000002FB100 string=0x00000000002FB104 "A"
 *   insn=0x00000000002FB110 string=0x00000000001FDF90 "0'"
 *   insn=0x00000000002FB114 string=0x00000000002FB118 "H"
 *   insn=0x00000000002FB118 string=0x00000000002FB11C ""
 *   insn=0x00000000002FB120 string=0x00000000002FB124 "I"
 *   insn=0x00000000002FB124 string=0x00000000002FB128 ")"
 *   insn=0x00000000002FB128 string=0x00000000002FB12C "h""
 *   insn=0x00000000002FB130 string=0x00000000002FB134 "i*"
 *   insn=0x00000000002FB140 string=0x00000000001FAB70 "0'"
 *   insn=0x00000000002FB168 string=0x00000000002FB16C "%"
 *   insn=0x00000000002FB16C string=0x00000000001F7600 "0'"
 *   insn=0x00000000002FB174 string=0x00000000002FB178 "uL"
 *   insn=0x00000000002FB18C string=0x00000000002FB190 "V"
 *   insn=0x00000000002FB1A8 string=0x00000000002FB1E8 "hbA9H"
 *   insn=0x00000000002FB1AC string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x00000000002FB1B8 string=0x00000000002FB1BC "#q"
 *   insn=0x00000000002FB1C0 string=0x00000000002FB1C4 "a"
 *   insn=0x00000000002FB1C0 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002FB1C4 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002FB1D0 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002FB1DC string=0x00000000001FA500 "0'"
 *   insn=0x00000000002FB1E4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002FB1E8 string=0x00000000002FB1EC "H"
 *   insn=0x00000000002FB1F0 string=0x00000000002FB1F4 ""
 *   insn=0x00000000002FB1F0 string=0x00000000002FB204 "I"
 *   insn=0x00000000002FB1FC string=0x00000000002FB200 "5"
 *   insn=0x00000000002FB1FC string=0x00000000002FB28C "I"
 *   insn=0x00000000002FB20C string=0x00000000002FB210 "u"@"
 *   insn=0x00000000002FB210 string=0x00000000002FB214 ")"
 *   insn=0x00000000002FB214 string=0x00000000002FB218 ""
 *   insn=0x00000000002FB22C string=0x00000000002FB230 "H"
 *   insn=0x00000000002FB22C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FB230 string=0x00000000002FB234 ""
 *   insn=0x00000000002FB234 string=0x00000000002FB238 "a"
 *   insn=0x00000000002FB238 string=0x00000000002FB23C ""
 *   insn=0x00000000002FB248 string=0x00000000002FB24C "hZ@"
 *   insn=0x00000000002FB24C string=0x00000000002FB250 "H"
 *   insn=0x00000000002FB254 string=0x00000000002FB258 "iJ@"
 *   insn=0x00000000002FB258 string=0x00000000002FB25C ""
 *   insn=0x00000000002FB264 string=0x00000000002FB268 "hZ@"
 *   insn=0x00000000002FB270 string=0x00000000002FB274 "iN@"
 *   insn=0x00000000002FB274 string=0x00000000002FB278 ""
 *   insn=0x00000000002FB280 string=0x00000000002FB284 "hZ@"
 *   insn=0x00000000002FB284 string=0x00000000002FB288 "h"
 *   insn=0x00000000002FB294 string=0x00000000002FB298 "u*@"
 *   insn=0x00000000002FB298 string=0x00000000002FB29C ")"
 *   insn=0x00000000002FB29C string=0x00000000002FB2A0 ""
 *   insn=0x00000000002FB2B4 string=0x00000000002FB2B8 "H"
 *   insn=0x00000000002FB2B8 string=0x00000000002FB2BC ""
 *   insn=0x00000000002FB2BC string=0x00000000002FB2C0 "a"
 *   insn=0x00000000002FB2C0 string=0x00000000002FB2C4 ""
 *   insn=0x00000000002FB2D4 string=0x00000000002FB2D8 "a""
 *   insn=0x00000000002FB2D8 string=0x00000000002FB2DC "]"
 *   insn=0x00000000002FB304 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FB314 string=0x00000000002FB318 "k"
 *   insn=0x00000000002FB328 string=0x00000000002FB32C "H"
 *   insn=0x00000000002FB32C string=0x00000000002FB330 ""
 *   insn=0x00000000002FB334 string=0x00000000002FB338 "A"
 *   insn=0x00000000002FB338 string=0x00000000002FB33C "h"
 *   insn=0x00000000002FB340 string=0x00000000002FB344 "`""
 *   insn=0x00000000002FB344 string=0x00000000002FB348 "\n "
 *   insn=0x00000000002FB364 string=0x00000000002FB368 "`""
 *   insn=0x00000000002FB378 string=0x00000000002FB37C "R"
 *   insn=0x00000000002FB390 string=0x00000000002FB394 "T"
 *   insn=0x00000000002FB3A0 string=0x00000000002FB3A4 "H"
 *   insn=0x00000000002FB3A4 string=0x00000000002FB3A8 "`"@"
 *   insn=0x00000000002FB3A8 string=0x00000000002FB3AC ""
 *   insn=0x00000000002FB3B0 string=0x00000000002FB3B4 " "
 *   insn=0x00000000002FB3B4 string=0x00000000002FB3D8 "H"
 *   insn=0x00000000002FB3B8 string=0x00000000002FB3BC "\t"
 *   insn=0x00000000002FB3BC string=0x00000000002FB3C0 "J"
 *   insn=0x00000000002FB3C0 string=0x00000000002FB3C4 "J"
 *   insn=0x00000000002FB3C4 string=0x00000000002FB3C8 "(a"
 *   insn=0x00000000002FB3D0 string=0x00000000002FB430 "J"
 *   insn=0x00000000002FB3D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002FB3D8 string=0x00000000002FB3DC "s*@"
 *   insn=0x00000000002FB3DC string=0x00000000002FB3E0 ""
 *   insn=0x00000000002FB3E4 string=0x00000000002FB3E8 "@"
 *   insn=0x00000000002FB3E8 string=0x00000000002FB3EC "3"
 *   insn=0x00000000002FB3EC string=0x00000000002FB3F0 "h"
 *   insn=0x00000000002FB3F0 string=0x00000000002FB3F4 "I"
 *   insn=0x00000000002FB3F4 string=0x00000000002FB3F8 ")"
 *   insn=0x00000000002FB404 string=0x00000000002FB454 "I"
 *   insn=0x00000000002FB418 string=0x00000000002FB41C "A"
 *   insn=0x00000000002FB430 string=0x00000000002FB434 "J=G"
 *   insn=0x00000000002FB434 string=0x00000000002FB438 ")!"
 *   insn=0x00000000002FB43C string=0x00000000002FB440 "*"
 *   insn=0x00000000002FB43C string=0x00000000002FB478 "*"
 *   insn=0x00000000002FB440 string=0x00000000002FB444 "K"
 *   insn=0x00000000002FB444 string=0x00000000002FB448 "+"
 *   insn=0x00000000002FB44C string=0x00000000002FB450 ""
 *   insn=0x00000000002FB450 string=0x00000000002FB484 "_"
 *   insn=0x00000000002FB454 string=0x00000000002FB458 ")=G"
 *   insn=0x00000000002FB458 string=0x00000000002FB45C "!"
 *   insn=0x00000000002FB45C string=0x00000000002FB460 ")"
 *   insn=0x00000000002FB460 string=0x00000000002FB464 "\t"
 *   insn=0x00000000002FB460 string=0x00000000002FB4A4 "\t"
 *   insn=0x00000000002FB464 string=0x00000000002FB468 "*"
 *   insn=0x00000000002FB468 string=0x00000000002FB46C "\n"
 *   insn=0x00000000002FB474 string=0x00000000002FB4B0 "?"
 *   insn=0x00000000002FB478 string=0x00000000002FB47C "K"
 *   insn=0x00000000002FB47C string=0x00000000002FB480 "+"
 *   insn=0x00000000002FB484 string=0x00000000002FB488 "l"
 *   insn=0x00000000002FB4A4 string=0x00000000002FB4A8 "*"
 *   insn=0x00000000002FB4A8 string=0x00000000002FB4AC "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Component::Component(Caver::Proto::Component *this, const Caver::Proto::Component *a2)
{
  *(_QWORD *)this = off_6C7290;
  google::protobuf::internal::ExtensionSet::ExtensionSet((Caver::Proto::Component *)((char *)this + 8));
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 8) = &Caver::Proto::Component::_default_class_name_;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 10) = &Caver::Proto::Component::_default_label_;
  Caver::Proto::Component::MergeFrom();
}

