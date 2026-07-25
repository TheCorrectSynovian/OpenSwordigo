/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330140
 * Mangled: _ZN5Caver5Proto17ItemDropComponentC2ERKS1_
 * Demangled: Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F8D60  google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC5F0  Caver::Proto::ItemDropComponent::MergeFrom(Caver::Proto::ItemDropComponent const&)
 *   0x00000000001FDC20  Caver::Proto::ItemDropComponent::SharedDtor(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 126
 *   insn=0x0000000000330158 string=0x000000000033015C ")mF"
 *   insn=0x000000000033015C string=0x0000000000330160 "h2"
 *   insn=0x0000000000330164 string=0x0000000000330168 "aE"
 *   insn=0x0000000000330170 string=0x0000000000330174 " "
 *   insn=0x0000000000330174 string=0x0000000000330178 "A"
 *   insn=0x0000000000330178 string=0x000000000033017C "h"
 *   insn=0x0000000000330180 string=0x0000000000330184 ""
 *   insn=0x0000000000330184 string=0x0000000000330188 "t"
 *   insn=0x000000000033018C string=0x0000000000330190 "t"
 *   insn=0x0000000000330194 string=0x0000000000330198 "`"
 *   insn=0x00000000003301A0 string=0x00000000001FC5F0 "0'"
 *   insn=0x00000000003301B4 string=0x00000000003301B8 "h"
 *   insn=0x00000000003301BC string=0x00000000003301C0 "?"
 *   insn=0x00000000003301D0 string=0x00000000003301D4 ""
 *   insn=0x00000000003301D4 string=0x00000000003301D8 ""
 *   insn=0x00000000003301DC string=0x00000000003301E0 "i.@"
 *   insn=0x00000000003301E0 string=0x00000000003301E4 "h"
 *   insn=0x00000000003301F8 string=0x00000000003301FC "h"
 *   insn=0x0000000000330200 string=0x0000000000330204 "W"
 *   insn=0x0000000000330204 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000033020C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000330214 string=0x0000000000330218 "Mx"
 *   insn=0x0000000000330218 string=0x000000000033021C "Lx"
 *   insn=0x0000000000330230 string=0x0000000000330234 "V"
 *   insn=0x0000000000330250 string=0x000000000058BAA0 "./../../../../Source/Caver/Content/Proto/Scene.pb.cc"
 *   insn=0x0000000000330260 string=0x0000000000330264 "c"
 *   insn=0x0000000000330264 string=0x00000000001F63F0 "0'"
 *   insn=0x0000000000330268 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x0000000000330274 string=0x00000000001FC210 "0'"
 *   insn=0x0000000000330280 string=0x00000000001FA500 "0'"
 *   insn=0x0000000000330288 string=0x00000000001FA1F0 "0'"
 *   insn=0x000000000033028C string=0x0000000000330290 "a"
 *   insn=0x0000000000330294 string=0x0000000000330298 "hrA9H"
 *   insn=0x0000000000330294 string=0x00000000001F8D60 "0'"
 *   insn=0x0000000000330298 string=0x000000000033029C "H"
 *   insn=0x000000000033029C string=0x00000000003302A0 "H"
 *   insn=0x00000000003302A4 string=0x00000000003302A8 ""
 *   insn=0x00000000003302B0 string=0x00000000003302B4 "ifA9"
 *   insn=0x00000000003302B4 string=0x00000000003302B8 ""
 *   insn=0x00000000003302F0 string=0x00000000003302F4 "u\n@"
 *   insn=0x00000000003302F4 string=0x00000000003302F8 ")mF"
 *   insn=0x00000000003302F8 string=0x00000000003302FC ""
 *   insn=0x0000000000330310 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000330314 string=0x0000000000330318 ""
 *   insn=0x0000000000330318 string=0x000000000033031C "a"
 *   insn=0x000000000033031C string=0x0000000000330320 ""
 *   insn=0x000000000033032C string=0x0000000000330330 "h^@"
 *   insn=0x0000000000330340 string=0x0000000000330344 "u"
 *   insn=0x0000000000330344 string=0x0000000000330348 ")"
 *   insn=0x0000000000330348 string=0x000000000033034C ""
 *   insn=0x0000000000330364 string=0x0000000000330368 ""
 *   insn=0x0000000000330368 string=0x000000000033036C "a"
 *   insn=0x000000000033036C string=0x0000000000330370 ""
 *   insn=0x000000000033037C string=0x0000000000330380 "h^@"
 *   insn=0x0000000000330380 string=0x0000000000330384 "H"
 *   insn=0x0000000000330388 string=0x000000000033038C "ibA9"
 *   insn=0x000000000033038C string=0x0000000000330390 ""
 *   insn=0x0000000000330398 string=0x000000000033039C "h^@"
 *   insn=0x00000000003303A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003303B8 string=0x00000000003303BC "BE\t"
 *   insn=0x00000000003303D4 string=0x00000000003303D8 "aE"
 *   insn=0x00000000003303DC string=0x00000000003303E0 "A"
 *   insn=0x00000000003303E0 string=0x00000000003303E4 "h"
 *   insn=0x00000000003303E8 string=0x00000000003303EC "i.@"
 *   insn=0x00000000003303E8 string=0x00000000001FDC20 "0'"
 *   insn=0x00000000003303EC string=0x00000000003303F0 "`"
 *   insn=0x00000000003303F0 string=0x00000000003303F4 "?"
 *   insn=0x00000000003303F8 string=0x000000000033042C "h"
 *   insn=0x00000000003303FC string=0x0000000000330400 "xt"
 *   insn=0x0000000000330404 string=0x0000000000330408 "\t"
 *   insn=0x0000000000330408 string=0x000000000033040C ")"
 *   insn=0x0000000000330410 string=0x0000000000330414 " "
 *   insn=0x0000000000330414 string=0x0000000000330418 "i.@"
 *   insn=0x0000000000330418 string=0x000000000033041C "`"
 *   insn=0x0000000000330430 string=0x0000000000330434 "`"
 *   insn=0x0000000000330434 string=0x0000000000330438 "@"
 *   insn=0x000000000033044C string=0x0000000000330450 "l"
 *   insn=0x0000000000330454 string=0x0000000000330458 "h"
 *   insn=0x000000000033045C string=0x0000000000330460 "?"
 *   insn=0x0000000000330464 string=0x0000000000330494 "i"
 *   insn=0x0000000000330470 string=0x0000000000330474 ""
 *   insn=0x0000000000330474 string=0x0000000000330478 ""
 *   insn=0x000000000033047C string=0x0000000000330480 "i.@"
 *   insn=0x0000000000330480 string=0x0000000000330484 "h"
 *   insn=0x00000000003304B8 string=0x00000000003304BC "Q"
 *   insn=0x00000000003304D8 string=0x00000000003304DC "T"
 *   insn=0x00000000003304EC string=0x00000000003304F0 "`\n@"
 *   insn=0x00000000003304F0 string=0x00000000003304F4 "mF"
 *   insn=0x00000000003304F8 string=0x00000000003304FC " "
 *   insn=0x0000000000330500 string=0x0000000000330504 "\t"
 *   insn=0x0000000000330508 string=0x000000000033050C "J"
 *   insn=0x000000000033050C string=0x0000000000330510 "(a"
 *   insn=0x0000000000330518 string=0x000000000033051C "e"
 *   insn=0x000000000033051C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000330520 string=0x0000000000330524 "s"
 *   insn=0x0000000000330524 string=0x0000000000330528 ""
 *   insn=0x000000000033052C string=0x0000000000330530 "@"
 *   insn=0x0000000000330530 string=0x0000000000330534 "3"
 *   insn=0x0000000000330534 string=0x0000000000330538 "h"
 *   insn=0x000000000033053C string=0x0000000000330540 ")"
 *   insn=0x0000000000330550 string=0x0000000000330554 "W"
 *   insn=0x0000000000330560 string=0x0000000000330564 "A"
 *   insn=0x0000000000330564 string=0x000000000033060C "1"
 *   insn=0x0000000000330578 string=0x000000000033057C "J=G"
 *   insn=0x000000000033057C string=0x0000000000330580 ")!"
 *   insn=0x0000000000330584 string=0x0000000000330588 "*"
 *   insn=0x0000000000330584 string=0x00000000003305C0 "*"
 *   insn=0x0000000000330588 string=0x000000000033058C "K"
 *   insn=0x000000000033058C string=0x0000000000330590 "+"
 *   insn=0x0000000000330594 string=0x0000000000330598 ""
 *   insn=0x0000000000330598 string=0x00000000003305CC "_"
 *   insn=0x000000000033059C string=0x00000000003305A0 ")=G"
 *   insn=0x00000000003305A0 string=0x00000000003305A4 "!"
 *   insn=0x00000000003305A4 string=0x00000000003305A8 ")"
 *   insn=0x00000000003305A8 string=0x00000000003305AC "\t"
 *   insn=0x00000000003305A8 string=0x00000000003305EC "\t"
 *   insn=0x00000000003305AC string=0x00000000003305B0 "*"
 *   insn=0x00000000003305B0 string=0x00000000003305B4 "\n"
 *   insn=0x00000000003305BC string=0x00000000003305F8 "?"
 *   insn=0x00000000003305C0 string=0x00000000003305C4 "K"
 *   insn=0x00000000003305C4 string=0x00000000003305C8 "+"
 *   insn=0x00000000003305CC string=0x00000000003305D0 "l"
 *   insn=0x00000000003305DC string=0x00000000003305E0 "q"
 *   insn=0x00000000003305EC string=0x00000000003305F0 "*"
 *   insn=0x00000000003305F0 string=0x00000000003305F4 "\n"
 *   insn=0x0000000000330600 string=0x0000000000330604 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::ItemDropComponent::ItemDropComponent(
        Caver::Proto::ItemDropComponent *this,
        const Caver::Proto::ItemDropComponent *a2)
{
  __int128 v2; // q0
  long double result; // q0

  *((_DWORD *)this + 12) = 4;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::ItemDropComponent::_default_item_name_;
  *(_QWORD *)this = off_6C95B8;
  *((_WORD *)this + 44) = 0;
  *((_QWORD *)this + 4) = (char *)this + 56;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::ItemDropComponent::_default_item_identifier_;
  *((_OWORD *)this + 1) = v2;
  *((_DWORD *)this + 23) = 0;
  Caver::Proto::ItemDropComponent::MergeFrom();
  return result;
}

