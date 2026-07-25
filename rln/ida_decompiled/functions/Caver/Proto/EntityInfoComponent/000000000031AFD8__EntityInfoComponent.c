/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AFD8
 * Mangled: _ZN5Caver5Proto19EntityInfoComponentC2ERKS1_
 * Demangled: Caver::Proto::EntityInfoComponent::EntityInfoComponent(Caver::Proto::EntityInfoComponent const&)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FFD60  Caver::Proto::EntityInfoComponent::MergeFrom(Caver::Proto::EntityInfoComponent const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 69
 *   insn=0x000000000031AFE4 string=0x000000000031AFE8 "H"
 *   insn=0x000000000031AFE8 string=0x000000000031AFEC ""
 *   insn=0x000000000031AFF0 string=0x000000000031AFF4 "i"
 *   insn=0x000000000031AFF4 string=0x000000000031AFF8 ")"
 *   insn=0x000000000031AFF8 string=0x000000000031AFFC "A"
 *   insn=0x000000000031AFFC string=0x000000000031B000 "h"
 *   insn=0x000000000031B004 string=0x000000000031B008 "i\n"
 *   insn=0x000000000031B008 string=0x000000000031B00C "U"
 *   insn=0x000000000031B020 string=0x000000000031B024 "wq"
 *   insn=0x000000000031B024 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031B028 string=0x000000000031B02C "&"
 *   insn=0x000000000031B044 string=0x000000000031B048 "U"
 *   insn=0x000000000031B064 string=0x000000000031B068 "h"
 *   insn=0x000000000031B068 string=0x000000000031B06C "$"
 *   insn=0x000000000031B068 string=0x000000000031B0B4 "I"
 *   insn=0x000000000031B070 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000031B084 string=0x000000000031B088 "a"
 *   insn=0x000000000031B084 string=0x00000000001F63F0 "0'"
 *   insn=0x000000000031B088 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x000000000031B090 string=0x000000000031B094 "_"
 *   insn=0x000000000031B094 string=0x00000000001FC210 "0'"
 *   insn=0x000000000031B0A0 string=0x00000000001FA500 "0'"
 *   insn=0x000000000031B0A4 string=0x000000000031B0A8 "R|"
 *   insn=0x000000000031B0A8 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000031B0AC string=0x000000000031B0B0 "h"
 *   insn=0x000000000031B0B4 string=0x000000000031B0B8 "h"
 *   insn=0x000000000031B0B8 string=0x000000000031B0BC "`\n@"
 *   insn=0x000000000031B0C0 string=0x000000000031B0C4 ")"
 *   insn=0x000000000031B0C4 string=0x000000000031B0C8 ""
 *   insn=0x000000000031B0C8 string=0x000000000031B0CC "h"
 *   insn=0x000000000031B0D8 string=0x000000000031B0DC "Ai"
 *   insn=0x000000000031B0DC string=0x000000000031B0E0 "H"
 *   insn=0x000000000031B0DC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031B0E0 string=0x000000000031B0E4 ""
 *   insn=0x000000000031B0E4 string=0x000000000031B0E8 "a"
 *   insn=0x000000000031B0E8 string=0x000000000031B0EC ""
 *   insn=0x000000000031B0EC string=0x000000000031B0F0 "`\n"
 *   insn=0x000000000031B0F4 string=0x000000000031B0F8 "l=\t"
 *   insn=0x000000000031B108 string=0x000000000031B120 "ll"
 *   insn=0x000000000031B120 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031B128 string=0x000000000031B12C "1|"
 *   insn=0x000000000031B148 string=0x000000000031B14C "T"
 *   insn=0x000000000031B154 string=0x000000000031B158 "I"
 *   insn=0x000000000031B15C string=0x000000000031B160 "H"
 *   insn=0x000000000031B160 string=0x000000000031B164 "`\n@"
 *   insn=0x000000000031B164 string=0x000000000031B168 ""
 *   insn=0x000000000031B168 string=0x000000000031B16C ")"
 *   insn=0x000000000031B16C string=0x000000000031B170 "A"
 *   insn=0x000000000031B174 string=0x000000000031B178 "h"
 *   insn=0x000000000031B178 string=0x000000000031B17C " "
 *   insn=0x000000000031B180 string=0x000000000031B184 "\t"
 *   insn=0x000000000031B184 string=0x000000000031B188 "J"
 *   insn=0x000000000031B188 string=0x000000000031B18C "J"
 *   insn=0x000000000031B18C string=0x000000000031B190 "(a"
 *   insn=0x000000000031B198 string=0x000000000031B19C "Ep"
 *   insn=0x000000000031B198 string=0x000000000031B1C8 "J"
 *   insn=0x000000000031B19C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031B1B0 string=0x000000000031B1B4 "!"
 *   insn=0x000000000031B1B4 string=0x000000000031B218 ".l"
 *   insn=0x000000000031B1C8 string=0x000000000031B1CC "J=G"
 *   insn=0x000000000031B1CC string=0x000000000031B1D0 ")!"
 *   insn=0x000000000031B1D4 string=0x000000000031B1D8 "*"
 *   insn=0x000000000031B1D4 string=0x000000000031B1EC "*"
 *   insn=0x000000000031B1D8 string=0x000000000031B1DC "K"
 *   insn=0x000000000031B1DC string=0x000000000031B1E0 "+"
 *   insn=0x000000000031B1E8 string=0x000000000031B1F8 "_"
 *   insn=0x000000000031B1EC string=0x000000000031B1F0 "K"
 *   insn=0x000000000031B1F0 string=0x000000000031B1F4 "+"
 *   insn=0x000000000031B208 string=0x000000000031B20C "f<\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityInfoComponent::EntityInfoComponent(
        Caver::Proto::EntityInfoComponent *this,
        const Caver::Proto::EntityInfoComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C8550;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::EntityInfoComponent::_default_entity_class_;
  Caver::Proto::EntityInfoComponent::MergeFrom();
}

