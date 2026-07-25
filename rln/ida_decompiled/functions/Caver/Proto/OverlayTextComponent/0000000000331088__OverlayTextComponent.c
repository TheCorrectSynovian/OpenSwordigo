/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331088
 * Mangled: _ZN5Caver5Proto20OverlayTextComponentC2ERKS1_
 * Demangled: Caver::Proto::OverlayTextComponent::OverlayTextComponent(Caver::Proto::OverlayTextComponent const&)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F3E60  Caver::Proto::OverlayTextComponent::SharedDtor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FEA50  Caver::Proto::OverlayTextComponent::MergeFrom(Caver::Proto::OverlayTextComponent const&)
 *   0x00000000002035C0  Caver::Proto::Vector2::MergeFrom(Caver::Proto::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 104
 *   insn=0x0000000000331098 string=0x000000000033109C ""
 *   insn=0x00000000003310A8 string=0x00000000003310AC ")\tG"
 *   insn=0x00000000003310AC string=0x00000000003310B0 "J"
 *   insn=0x00000000003310B0 string=0x00000000003310B4 "A"
 *   insn=0x00000000003310B4 string=0x00000000003310B8 "h"
 *   insn=0x00000000003310B8 string=0x00000000003310BC "i~"
 *   insn=0x00000000003310BC string=0x00000000003310C0 "j~"
 *   insn=0x00000000003310C4 string=0x00000000003310C8 "b6"
 *   insn=0x00000000003310DC string=0x00000000003310E0 "H"
 *   insn=0x00000000003310E0 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000331100 string=0x0000000000331104 "V"
 *   insn=0x000000000033111C string=0x0000000000331120 "h"
 *   insn=0x0000000000331134 string=0x0000000000331138 "u\n@"
 *   insn=0x0000000000331138 string=0x000000000033113C ")\tG"
 *   insn=0x000000000033113C string=0x0000000000331140 ""
 *   insn=0x0000000000331150 string=0x0000000000331154 "#"
 *   insn=0x0000000000331154 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000331158 string=0x000000000033115C ""
 *   insn=0x000000000033115C string=0x0000000000331160 "a"
 *   insn=0x0000000000331160 string=0x0000000000331164 ""
 *   insn=0x000000000033116C string=0x0000000000331170 "N"
 *   insn=0x0000000000331170 string=0x0000000000331174 "h2@"
 *   insn=0x0000000000331180 string=0x0000000000331184 ""
 *   insn=0x000000000033119C string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000003311A4 string=0x00000000003311A8 "h"
 *   insn=0x00000000003311A8 string=0x00000000003311AC ")"
 *   insn=0x00000000003311B4 string=0x00000000003311B8 ")"
 *   insn=0x00000000003311B8 string=0x00000000003311BC "("
 *   insn=0x00000000003311C4 string=0x00000000003311C8 "h2@"
 *   insn=0x00000000003311D8 string=0x00000000003311DC "u"
 *   insn=0x00000000003311DC string=0x00000000003311E0 ")"
 *   insn=0x00000000003311E0 string=0x00000000003311E4 ""
 *   insn=0x00000000003311FC string=0x0000000000331200 ""
 *   insn=0x0000000000331200 string=0x0000000000331204 "a"
 *   insn=0x0000000000331204 string=0x0000000000331208 ""
 *   insn=0x0000000000331210 string=0x0000000000331214 "%"
 *   insn=0x0000000000331214 string=0x0000000000331218 "h2@"
 *   insn=0x0000000000331224 string=0x0000000000331228 ""
 *   insn=0x0000000000331248 string=0x000000000033124C "h"
 *   insn=0x000000000033124C string=0x0000000000331250 ")"
 *   insn=0x0000000000331258 string=0x000000000033125C ")"
 *   insn=0x000000000033125C string=0x0000000000331260 "("
 *   insn=0x0000000000331270 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x000000000033127C string=0x0000000000331280 "#i"
 *   insn=0x0000000000331280 string=0x0000000000331284 "["
 *   insn=0x0000000000331284 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000331288 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000331294 string=0x00000000001FC210 "0'"
 *   insn=0x00000000003312A0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000003312A8 string=0x00000000003312AC "h"
 *   insn=0x00000000003312A8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000003312D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003312E8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003312EC string=0x00000000003312F0 "uA\t"
 *   insn=0x0000000000331300 string=0x0000000000331304 "pA\t"
 *   insn=0x0000000000331318 string=0x000000000033131C ""
 *   insn=0x0000000000331320 string=0x0000000000331324 "A"
 *   insn=0x0000000000331324 string=0x0000000000331328 "h"
 *   insn=0x000000000033132C string=0x00000000001F3E60 "P'"
 *   insn=0x000000000033134C string=0x0000000000331350 "]A\t"
 *   insn=0x0000000000331364 string=0x0000000000331368 "T"
 *   insn=0x0000000000331378 string=0x000000000033137C "`\n@"
 *   insn=0x000000000033137C string=0x0000000000331380 "\tG"
 *   insn=0x0000000000331384 string=0x0000000000331388 " "
 *   insn=0x000000000033138C string=0x0000000000331390 "\t"
 *   insn=0x0000000000331394 string=0x0000000000331398 "J"
 *   insn=0x0000000000331398 string=0x000000000033139C "(a"
 *   insn=0x00000000003313AC string=0x00000000003313B0 "`"
 *   insn=0x00000000003313B0 string=0x00000000003313B4 ""
 *   insn=0x00000000003313B8 string=0x00000000003313BC " "
 *   insn=0x00000000003313C0 string=0x00000000003313C4 "\t"
 *   insn=0x00000000003313C8 string=0x00000000003313CC "J"
 *   insn=0x00000000003313CC string=0x00000000003313D0 "(a"
 *   insn=0x00000000003313D4 string=0x00000000003313D8 "A"
 *   insn=0x00000000003313E0 string=0x00000000003313E4 ""
 *   insn=0x00000000003313E4 string=0x00000000003313E8 ""
 *   insn=0x00000000003313EC string=0x00000000003313F0 "`"
 *   insn=0x00000000003313F0 string=0x00000000003313F4 "`"
 *   insn=0x00000000003313F8 string=0x00000000003313FC ""
 *   insn=0x00000000003313F8 string=0x0000000000331408 "`"
 *   insn=0x00000000003313FC string=0x0000000000331400 ""
 *   insn=0x000000000033140C string=0x0000000000331410 ""
 *   insn=0x0000000000331410 string=0x0000000000331414 ""
 *   insn=0x0000000000331428 string=0x00000000003314DC "}"
 *   insn=0x000000000033143C string=0x0000000000331440 "J=G"
 *   insn=0x0000000000331440 string=0x0000000000331444 ")!"
 *   insn=0x0000000000331448 string=0x000000000033144C "*"
 *   insn=0x0000000000331448 string=0x0000000000331484 "*"
 *   insn=0x000000000033144C string=0x0000000000331450 "K"
 *   insn=0x0000000000331450 string=0x0000000000331454 "+"
 *   insn=0x0000000000331458 string=0x000000000033145C ""
 *   insn=0x000000000033145C string=0x0000000000331490 "_"
 *   insn=0x0000000000331460 string=0x0000000000331464 "J=G"
 *   insn=0x0000000000331464 string=0x0000000000331468 ")!"
 *   insn=0x0000000000331468 string=0x000000000033146C "*"
 *   insn=0x000000000033146C string=0x0000000000331470 "*"
 *   insn=0x000000000033146C string=0x00000000003314B0 "*"
 *   insn=0x0000000000331470 string=0x0000000000331474 "K"
 *   insn=0x0000000000331474 string=0x0000000000331478 "+"
 *   insn=0x0000000000331480 string=0x00000000003314BC "_"
 *   insn=0x0000000000331484 string=0x0000000000331488 "K"
 *   insn=0x0000000000331488 string=0x000000000033148C "+"
 *   insn=0x00000000003314B0 string=0x00000000003314B4 "K"
 *   insn=0x00000000003314B4 string=0x00000000003314B8 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::OverlayTextComponent::OverlayTextComponent(
        Caver::Proto::OverlayTextComponent *this,
        const Caver::Proto::OverlayTextComponent *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C9630;
  *((_QWORD *)this + 2) = &Caver::Proto::OverlayTextComponent::_default_text_;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = &Caver::Proto::OverlayTextComponent::_default_sprite_name_;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  Caver::Proto::OverlayTextComponent::MergeFrom(this, a2);
}

