/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E51E8
 * Mangled: _ZN5Caver5Proto11GameOptionsC2ERKS1_
 * Demangled: Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F4E40  Caver::Proto::GUIViewLayout::GUIViewLayout(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5B90  Caver::Proto::GameOptions::MergeFrom(Caver::Proto::GameOptions const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F9410  Caver::Proto::MusicPlaylist::MusicPlaylist(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FA6C0  Caver::Proto::GUIViewLayout::MergeFrom(Caver::Proto::GUIViewLayout const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000203A50  Caver::Proto::MusicPlaylist::MergeFrom(Caver::Proto::MusicPlaylist const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002E55EC  Caver::Proto::GameOptions::~GameOptions()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 111
 *   insn=0x00000000002E51F4 string=0x00000000002E51F8 " "
 *   insn=0x00000000002E51F8 string=0x00000000002E51FC ""
 *   insn=0x00000000002E5204 string=0x00000000002E5208 "i""
 *   insn=0x00000000002E5208 string=0x00000000002E520C ") "
 *   insn=0x00000000002E520C string=0x00000000002E5210 "t"
 *   insn=0x00000000002E5214 string=0x00000000002E5218 "A"
 *   insn=0x00000000002E5218 string=0x00000000002E521C "i"
 *   insn=0x00000000002E521C string=0x00000000002E5220 "t~"
 *   insn=0x00000000002E5230 string=0x00000000002E5234 "`"
 *   insn=0x00000000002E5234 string=0x00000000002E5238 "h"
 *   insn=0x00000000002E523C string=0x00000000002E5240 "TB"
 *   insn=0x00000000002E5240 string=0x00000000001F5B90 "P'"
 *   insn=0x00000000002E5254 string=0x00000000002E5258 "h\n@"
 *   insn=0x00000000002E525C string=0x00000000002E5260 "?"
 *   insn=0x00000000002E5270 string=0x00000000002E5274 ""
 *   insn=0x00000000002E5274 string=0x00000000002E5278 ""
 *   insn=0x00000000002E527C string=0x00000000002E5280 "i"
 *   insn=0x00000000002E5280 string=0x00000000002E5284 "h\n@"
 *   insn=0x00000000002E5298 string=0x00000000002E529C "h"
 *   insn=0x00000000002E52A0 string=0x00000000002E52A4 "/?"
 *   insn=0x00000000002E52A4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002E52AC string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E52B4 string=0x00000000002E52B8 "%"
 *   insn=0x00000000002E52B8 string=0x00000000002E52BC "$"
 *   insn=0x00000000002E52D8 string=0x00000000002E52DC "X"
 *   insn=0x00000000002E52DC string=0x00000000002E52E0 ""
 *   insn=0x00000000002E52F4 string=0x00000000002E52F8 """
 *   insn=0x00000000002E52F8 string=0x000000000058AB7C "./../../../../Source/Caver/Content/Proto/GameData.pb.cc"
 *   insn=0x00000000002E5304 string=0x00000000002E5308 "c"
 *   insn=0x00000000002E5308 string=0x00000000002E530C "9D"
 *   insn=0x00000000002E530C string=0x00000000002E5310 "!"
 *   insn=0x00000000002E530C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002E5310 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002E531C string=0x00000000001FC210 "0'"
 *   insn=0x00000000002E5324 string=0x00000000002E5328 "vT"
 *   insn=0x00000000002E5328 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002E5330 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002E5334 string=0x00000000002E5338 "i"
 *   insn=0x00000000002E5340 string=0x00000000002E5344 "!"
 *   insn=0x00000000002E5344 string=0x00000000002E5348 "vV"
 *   insn=0x00000000002E5348 string=0x00000000002E534C "h"
 *   insn=0x00000000002E5348 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E5354 string=0x00000000002E53EC "hn@"
 *   insn=0x00000000002E5358 string=0x00000000002E535C "j\n@"
 *   insn=0x00000000002E5360 string=0x00000000002E5364 "Vyy"
 *   insn=0x00000000002E5364 string=0x00000000002E5368 ")}@"
 *   insn=0x00000000002E5368 string=0x00000000002E536C "?"
 *   insn=0x00000000002E5374 string=0x00000000002E5378 "*"
 *   insn=0x00000000002E5390 string=0x00000000002E53A4 ""
 *   insn=0x00000000002E5398 string=0x00000000002E539C "aV"
 *   insn=0x00000000002E53B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E53B8 string=0x00000000001F9410 "0'"
 *   insn=0x00000000002E53C0 string=0x00000000002E53C4 "\n"
 *   insn=0x00000000002E53C8 string=0x00000000002E53CC "7y("
 *   insn=0x00000000002E53D8 string=0x00000000002E53DC "h"
 *   insn=0x00000000002E53DC string=0x00000000002E53E0 "9"
 *   insn=0x00000000002E53E0 string=0x00000000002E53E4 "?"
 *   insn=0x00000000002E53FC string=0x00000000002E5400 "h"
 *   insn=0x00000000002E5400 string=0x00000000002E5404 "( 7"
 *   insn=0x00000000002E5408 string=0x00000000002E540C "h\n07"
 *   insn=0x00000000002E5414 string=0x00000000002E5418 "i"
 *   insn=0x00000000002E5418 string=0x00000000002E541C ""
 *   insn=0x00000000002E5424 string=0x00000000002E5428 "hn@"
 *   insn=0x00000000002E5430 string=0x00000000002E5468 ""
 *   insn=0x00000000002E5438 string=0x00000000002E543C "i"
 *   insn=0x00000000002E543C string=0x00000000002E5440 ""
 *   insn=0x00000000002E5448 string=0x00000000002E544C "hn@"
 *   insn=0x00000000002E5454 string=0x00000000002E5458 "i"
 *   insn=0x00000000002E5458 string=0x00000000002E545C ""
 *   insn=0x00000000002E5474 string=0x00000000002E55B0 "HC"
 *   insn=0x00000000002E5494 string=0x00000000002E5498 "i"A9"
 *   insn=0x00000000002E5498 string=0x00000000002E549C ""
 *   insn=0x00000000002E54A4 string=0x00000000002E54A8 "hn@"
 *   insn=0x00000000002E54B0 string=0x00000000002E54B4 "i&A9"
 *   insn=0x00000000002E54B4 string=0x00000000002E54B8 ""
 *   insn=0x00000000002E54C0 string=0x00000000002E54C4 "hn@"
 *   insn=0x00000000002E54CC string=0x00000000002E54D0 "iN@"
 *   insn=0x00000000002E54D0 string=0x00000000002E54D4 ""
 *   insn=0x00000000002E54DC string=0x00000000002E54E0 "hn@"
 *   insn=0x00000000002E54E0 string=0x00000000002E54E4 "("
 *   insn=0x00000000002E54E8 string=0x00000000002E54EC "iR@"
 *   insn=0x00000000002E54EC string=0x00000000002E54F0 ""
 *   insn=0x00000000002E54F8 string=0x00000000002E54FC "hn@"
 *   insn=0x00000000002E54FC string=0x00000000002E5500 "h"
 *   insn=0x00000000002E5508 string=0x00000000002E550C ""
 *   insn=0x00000000002E5514 string=0x00000000002E552C "\t "
 *   insn=0x00000000002E5518 string=0x00000000002E551C "1@"
 *   insn=0x00000000002E5520 string=0x00000000002E5524 "G>"
 *   insn=0x00000000002E5524 string=0x00000000001F4E40 "P'"
 *   insn=0x00000000002E552C string=0x00000000002E5530 "h.@"
 *   insn=0x00000000002E5530 string=0x00000000002E5534 ")"
 *   insn=0x00000000002E553C string=0x00000000002E5540 ")"
 *   insn=0x00000000002E5540 string=0x00000000002E5544 "("
 *   insn=0x00000000002E5548 string=0x00000000002E554C "]T"
 *   insn=0x00000000002E554C string=0x00000000002E5550 "hn@"
 *   insn=0x00000000002E554C string=0x00000000001FA6C0 "0'"
 *   insn=0x00000000002E555C string=0x00000000002E5560 ""
 *   insn=0x00000000002E5568 string=0x00000000002E5580 "\t "
 *   insn=0x00000000002E5574 string=0x00000000002E5578 "2>"
 *   insn=0x00000000002E5580 string=0x00000000002E5584 "h2@"
 *   insn=0x00000000002E5584 string=0x00000000002E5588 ")"
 *   insn=0x00000000002E5590 string=0x00000000002E5594 ")"
 *   insn=0x00000000002E5594 string=0x00000000002E5598 "("
 *   insn=0x00000000002E559C string=0x00000000002E55A0 "HT"
 *   insn=0x00000000002E55A0 string=0x00000000002E55A4 "hn@"
 *   insn=0x00000000002E55A4 string=0x00000000002E55A8 "h"
 *   insn=0x00000000002E55B0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E55BC string=0x00000000002E55C0 ""
 *   insn=0x00000000002E55C0 string=0x00000000002E55E0 "4G"
 *   insn=0x00000000002E55C8 string=0x00000000002E55CC "\tS"
 *   insn=0x00000000002E55E0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::GameOptions::GameOptions(
        Caver::Proto::GameOptions *this,
        const Caver::Proto::GameOptions *a2)
{
  double result; // d0

  *((_DWORD *)this + 8) = 4;
  __asm { FMOV            V0.2S, #1.0 }
  *((_WORD *)this + 36) = 257;
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_BYTE *)this + 106) = 0;
  *(_QWORD *)((char *)this + 76) = _D0;
  *(_QWORD *)this = off_6C6AC0;
  *((_WORD *)this + 52) = 0;
  Caver::Proto::GameOptions::MergeFrom();
  return result;
}

