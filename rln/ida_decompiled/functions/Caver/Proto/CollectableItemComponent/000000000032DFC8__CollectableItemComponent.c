/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DFC8
 * Mangled: _ZN5Caver5Proto24CollectableItemComponentC2ERKS1_
 * Demangled: Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent const&)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6E20  Caver::Proto::CollectableItemComponent::SharedDtor(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F87D0  Caver::Proto::CollectableItemComponent::MergeFrom(Caver::Proto::CollectableItemComponent const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 117
 *   insn=0x000000000032DFD4 string=0x000000000032DFD8 "5G"
 *   insn=0x000000000032DFE4 string=0x000000000032DFE8 ""
 *   insn=0x000000000032DFEC string=0x000000000032DFF0 "A"
 *   insn=0x000000000032DFF0 string=0x000000000032DFF4 "h~"
 *   insn=0x000000000032DFF8 string=0x000000000032DFFC ""
 *   insn=0x000000000032E00C string=0x000000000032E010 "`"
 *   insn=0x000000000032E014 string=0x00000000001F87D0 "0'"
 *   insn=0x000000000032E028 string=0x000000000032E02C "u%"
 *   insn=0x000000000032E02C string=0x00000000001F7600 "0'"
 *   insn=0x000000000032E030 string=0x000000000032E034 "$N\t"
 *   insn=0x000000000032E04C string=0x000000000032E050 "V"
 *   insn=0x000000000032E064 string=0x000000000032E068 "@"
 *   insn=0x000000000032E068 string=0x000000000032E06C "h"
 *   insn=0x000000000032E06C string=0x000000000032E070 "H"
 *   insn=0x000000000032E070 string=0x000000000032E074 "("
 *   insn=0x000000000032E07C string=0x000000000032E080 ""
 *   insn=0x000000000032E080 string=0x000000000032E084 "h\t 7(\n(7c"
 *   insn=0x000000000032E084 string=0x000000000032E088 "(\n(7c"
 *   insn=0x000000000032E088 string=0x000000000032E08C "c"
 *   insn=0x000000000032E090 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000032E09C string=0x000000000032E0A0 "C"
 *   insn=0x000000000032E0A4 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000032E0A8 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000032E0B0 string=0x000000000032E0B4 "W8"
 *   insn=0x000000000032E0B4 string=0x00000000001FC210 "0'"
 *   insn=0x000000000032E0C0 string=0x00000000001FA500 "0'"
 *   insn=0x000000000032E0C4 string=0x000000000032E0C8 "J0"
 *   insn=0x000000000032E0C8 string=0x000000000032E0CC "h"
 *   insn=0x000000000032E0C8 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000032E0CC string=0x000000000032E0D0 "("
 *   insn=0x000000000032E0D0 string=0x000000000032E0D4 "Q"
 *   insn=0x000000000032E0D8 string=0x000000000032E0DC "i"
 *   insn=0x000000000032E0DC string=0x000000000032E0E0 ""
 *   insn=0x000000000032E0E8 string=0x000000000032E0EC "h:@"
 *   insn=0x000000000032E0EC string=0x000000000032E0F0 "h"
 *   insn=0x000000000032E0F4 string=0x000000000032E0F8 "i"
 *   insn=0x000000000032E0F8 string=0x000000000032E0FC ""
 *   insn=0x000000000032E104 string=0x000000000032E108 "h:@"
 *   insn=0x000000000032E118 string=0x000000000032E11C "u"
 *   insn=0x000000000032E11C string=0x000000000032E120 ")5G"
 *   insn=0x000000000032E120 string=0x000000000032E124 ""
 *   insn=0x000000000032E134 string=0x000000000032E138 "*"
 *   insn=0x000000000032E138 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032E13C string=0x000000000032E140 ""
 *   insn=0x000000000032E140 string=0x000000000032E144 "a"
 *   insn=0x000000000032E144 string=0x000000000032E148 ""
 *   insn=0x000000000032E150 string=0x000000000032E154 "U"
 *   insn=0x000000000032E154 string=0x000000000032E158 "h:@"
 *   insn=0x000000000032E158 string=0x000000000032E15C "H"
 *   insn=0x000000000032E168 string=0x000000000032E16C "u"
 *   insn=0x000000000032E16C string=0x000000000032E170 ")"
 *   insn=0x000000000032E170 string=0x000000000032E174 ""
 *   insn=0x000000000032E18C string=0x000000000032E190 ""
 *   insn=0x000000000032E190 string=0x000000000032E194 "a"
 *   insn=0x000000000032E194 string=0x000000000032E198 ""
 *   insn=0x000000000032E1A0 string=0x000000000032E1A4 "A"
 *   insn=0x000000000032E1A4 string=0x000000000032E1A8 "h:@"
 *   insn=0x000000000032E1B0 string=0x000000000032E1B4 "i"
 *   insn=0x000000000032E1B4 string=0x000000000032E1B8 ""
 *   insn=0x000000000032E1C0 string=0x000000000032E1C4 "h:@"
 *   insn=0x000000000032E1D0 string=0x000000000032E1D4 ""
 *   insn=0x000000000032E1EC string=0x00000000001F5000 "P'"
 *   insn=0x000000000032E1F4 string=0x000000000032E1F8 "h"
 *   insn=0x000000000032E1F8 string=0x000000000032E1FC ")"
 *   insn=0x000000000032E204 string=0x000000000032E208 ")"
 *   insn=0x000000000032E208 string=0x000000000032E20C "("
 *   insn=0x000000000032E210 string=0x000000000032E214 "c"
 *   insn=0x000000000032E214 string=0x00000000001F37A0 "P'"
 *   insn=0x000000000032E224 string=0x000000000032E23C "% "
 *   insn=0x000000000032E23C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032E248 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032E264 string=0x000000000032E268 "9"
 *   insn=0x000000000032E278 string=0x000000000032E27C ""
 *   insn=0x000000000032E280 string=0x000000000032E284 "A"
 *   insn=0x000000000032E284 string=0x000000000032E288 "h"
 *   insn=0x000000000032E28C string=0x00000000001F6E20 "0'"
 *   insn=0x000000000032E2B0 string=0x000000000032E2B4 "&"
 *   insn=0x000000000032E2C4 string=0x000000000032E2C8 "T"
 *   insn=0x000000000032E2D8 string=0x000000000032E2DC "`"
 *   insn=0x000000000032E2DC string=0x000000000032E2E0 "5G"
 *   insn=0x000000000032E2E4 string=0x000000000032E2E8 " "
 *   insn=0x000000000032E2EC string=0x000000000032E2F0 "\t"
 *   insn=0x000000000032E2F4 string=0x000000000032E2F8 "J"
 *   insn=0x000000000032E2F8 string=0x000000000032E2FC "(a"
 *   insn=0x000000000032E300 string=0x000000000032E304 "!"
 *   insn=0x000000000032E30C string=0x000000000032E310 "`"
 *   insn=0x000000000032E310 string=0x000000000032E314 ""
 *   insn=0x000000000032E318 string=0x000000000032E31C " "
 *   insn=0x000000000032E320 string=0x000000000032E324 "\t"
 *   insn=0x000000000032E328 string=0x000000000032E32C "J"
 *   insn=0x000000000032E32C string=0x000000000032E330 "(a"
 *   insn=0x000000000032E340 string=0x000000000032E344 ""
 *   insn=0x000000000032E344 string=0x000000000032E348 ""
 *   insn=0x000000000032E350 string=0x000000000032E354 "`"
 *   insn=0x000000000032E358 string=0x000000000032E35C ""
 *   insn=0x000000000032E35C string=0x000000000032E360 ""
 *   insn=0x000000000032E388 string=0x000000000032E38C "J=G"
 *   insn=0x000000000032E38C string=0x000000000032E390 ")!"
 *   insn=0x000000000032E394 string=0x000000000032E398 "*"
 *   insn=0x000000000032E394 string=0x000000000032E3D0 "*"
 *   insn=0x000000000032E398 string=0x000000000032E39C "K"
 *   insn=0x000000000032E39C string=0x000000000032E3A0 "+"
 *   insn=0x000000000032E3A4 string=0x000000000032E3A8 ""
 *   insn=0x000000000032E3A8 string=0x000000000032E3DC "_"
 *   insn=0x000000000032E3AC string=0x000000000032E3B0 "J=G"
 *   insn=0x000000000032E3B0 string=0x000000000032E3B4 ")!"
 *   insn=0x000000000032E3B4 string=0x000000000032E3B8 "*"
 *   insn=0x000000000032E3B8 string=0x000000000032E3BC "*"
 *   insn=0x000000000032E3B8 string=0x000000000032E3FC "*"
 *   insn=0x000000000032E3BC string=0x000000000032E3C0 "K"
 *   insn=0x000000000032E3C0 string=0x000000000032E3C4 "+"
 *   insn=0x000000000032E3CC string=0x000000000032E408 "_"
 *   insn=0x000000000032E3D0 string=0x000000000032E3D4 "K"
 *   insn=0x000000000032E3D4 string=0x000000000032E3D8 "+"
 *   insn=0x000000000032E3DC string=0x000000000032E3E0 "L"
 *   insn=0x000000000032E3FC string=0x000000000032E400 "K"
 *   insn=0x000000000032E400 string=0x000000000032E404 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::CollectableItemComponent::CollectableItemComponent(
        Caver::Proto::CollectableItemComponent *this,
        const Caver::Proto::CollectableItemComponent *a2)
{
  __int128 v2; // q0
  long double result; // q0

  *(_QWORD *)&v2 = &Caver::Proto::CollectableItemComponent::_default_item_name_;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = off_6C9450;
  *((_QWORD *)this + 1) = 0;
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::CollectableItemComponent::_default_identifier_;
  *(_OWORD *)((char *)this + 24) = v2;
  Caver::Proto::CollectableItemComponent::MergeFrom(this, a2);
  return result;
}

