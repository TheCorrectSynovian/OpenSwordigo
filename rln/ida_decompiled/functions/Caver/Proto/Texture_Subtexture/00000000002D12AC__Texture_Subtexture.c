/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D12AC
 * Mangled: _ZN5Caver5Proto18Texture_SubtextureC2ERKS1_
 * Demangled: Caver::Proto::Texture_Subtexture::Texture_Subtexture(Caver::Proto::Texture_Subtexture const&)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F77D0  Caver::Proto::Texture_Subtexture::MergeFrom(Caver::Proto::Texture_Subtexture const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000002021D0  Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 104
 *   insn=0x00000000002D12BC string=0x00000000002D12C0 "1D"
 *   insn=0x00000000002D12C8 string=0x00000000002D12CC ")"
 *   insn=0x00000000002D12D0 string=0x00000000002D12D4 "A"
 *   insn=0x00000000002D12D4 string=0x00000000002D12D8 "h"
 *   insn=0x00000000002D12D8 string=0x00000000002D12DC "i~"
 *   insn=0x00000000002D12DC string=0x00000000002D12E0 "j"
 *   insn=0x00000000002D12E0 string=0x00000000002D12E4 ";"
 *   insn=0x00000000002D12E4 string=0x00000000001F77D0 "0'"
 *   insn=0x00000000002D12FC string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D1300 string=0x00000000002D1304 "p"
 *   insn=0x00000000002D131C string=0x00000000002D1320 "V"
 *   insn=0x00000000002D1338 string=0x00000000002D1378 "h"
 *   insn=0x00000000002D133C string=0x000000000058A3BC "./../../../../Source/Caver/Content/Proto/Common.pb.cc"
 *   insn=0x00000000002D134C string=0x00000000002D1350 "("
 *   insn=0x00000000002D1350 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002D1354 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002D1360 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002D1368 string=0x00000000002D136C "e"
 *   insn=0x00000000002D136C string=0x00000000001FA500 "0'"
 *   insn=0x00000000002D1374 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002D1378 string=0x00000000002D137C ""
 *   insn=0x00000000002D137C string=0x00000000002D1380 ""
 *   insn=0x00000000002D1380 string=0x00000000002D1384 "h"
 *   insn=0x00000000002D138C string=0x00000000002D1390 "i"@"
 *   insn=0x00000000002D1390 string=0x00000000002D1394 ""
 *   insn=0x00000000002D13A4 string=0x00000000002D13A8 "A"
 *   insn=0x00000000002D13C8 string=0x00000000002D13CC "u\n@"
 *   insn=0x00000000002D13CC string=0x00000000002D13D0 ")"
 *   insn=0x00000000002D13D0 string=0x00000000002D13D4 ""
 *   insn=0x00000000002D13E4 string=0x00000000002D13E8 "~"
 *   insn=0x00000000002D13E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D13EC string=0x00000000002D13F0 ""
 *   insn=0x00000000002D13F0 string=0x00000000002D13F4 "a"
 *   insn=0x00000000002D13F4 string=0x00000000002D13F8 ""
 *   insn=0x00000000002D1404 string=0x00000000002D1408 "h&@"
 *   insn=0x00000000002D1414 string=0x00000000002D1418 ""
 *   insn=0x00000000002D141C string=0x00000000002D1420 " "
 *   insn=0x00000000002D1424 string=0x00000000002D1428 "n"
 *   insn=0x00000000002D142C string=0x00000000002D1430 ""
 *   insn=0x00000000002D1434 string=0x00000000002D1438 "A"
 *   insn=0x00000000002D1438 string=0x00000000002D143C "|"
 *   insn=0x00000000002D1444 string=0x00000000002D1448 "h"
 *   insn=0x00000000002D1448 string=0x00000000002D144C ")-D"
 *   insn=0x00000000002D1450 string=0x00000000002D1454 ")"
 *   insn=0x00000000002D1454 string=0x00000000002D1458 "("
 *   insn=0x00000000002D145C string=0x00000000002D1460 "\"
 *   insn=0x00000000002D1460 string=0x00000000002D1464 "h&@"
 *   insn=0x00000000002D1464 string=0x00000000002D1468 "("
 *   insn=0x00000000002D1470 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D1478 string=0x00000000002D147C "]"
 *   insn=0x00000000002D1498 string=0x00000000002D149C "T"
 *   insn=0x00000000002D14B0 string=0x00000000002D14B4 "`\n@"
 *   insn=0x00000000002D14B4 string=0x00000000002D14B8 "1D"
 *   insn=0x00000000002D14B8 string=0x00000000002D14BC ")"
 *   insn=0x00000000002D14BC string=0x00000000002D14C0 "A"
 *   insn=0x00000000002D14C4 string=0x00000000002D14C8 "h"
 *   insn=0x00000000002D14C8 string=0x00000000002D14CC " "
 *   insn=0x00000000002D14D0 string=0x00000000002D14D4 "\t"
 *   insn=0x00000000002D14D8 string=0x00000000002D14DC "J"
 *   insn=0x00000000002D14DC string=0x00000000002D14E0 "(a"
 *   insn=0x00000000002D14E8 string=0x00000000002D14EC "q"
 *   insn=0x00000000002D14EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D14F0 string=0x00000000002D14F4 "-D"
 *   insn=0x00000000002D14F4 string=0x00000000002D14F8 ""
 *   insn=0x00000000002D1500 string=0x00000000002D1504 "`"
 *   insn=0x00000000002D1508 string=0x00000000002D150C ""
 *   insn=0x00000000002D150C string=0x00000000002D1510 ""
 *   insn=0x00000000002D1518 string=0x00000000002D151C "9"
 *   insn=0x00000000002D1528 string=0x00000000002D152C "!"
 *   insn=0x00000000002D152C string=0x00000000002D1590 "P"
 *   insn=0x00000000002D1540 string=0x00000000002D1544 "J=G"
 *   insn=0x00000000002D1544 string=0x00000000002D1548 ")!"
 *   insn=0x00000000002D154C string=0x00000000002D1550 "*"
 *   insn=0x00000000002D154C string=0x00000000002D1564 "*"
 *   insn=0x00000000002D1550 string=0x00000000002D1554 "K"
 *   insn=0x00000000002D1554 string=0x00000000002D1558 "+"
 *   insn=0x00000000002D1560 string=0x00000000002D1570 "_"
 *   insn=0x00000000002D1564 string=0x00000000002D1568 "K"
 *   insn=0x00000000002D1568 string=0x00000000002D156C "+"
 *   insn=0x00000000002D15A4 string=0x00000000002D15A8 "i"
 *   insn=0x00000000002D15B8 string=0x00000000002D15BC "T"
 *   insn=0x00000000002D15CC string=0x00000000002D15D0 "`\n@"
 *   insn=0x00000000002D15D0 string=0x00000000002D15D4 ""
 *   insn=0x00000000002D15D8 string=0x00000000002D15DC " "
 *   insn=0x00000000002D15E0 string=0x00000000002D15E4 "\t"
 *   insn=0x00000000002D15E8 string=0x00000000002D15EC "J"
 *   insn=0x00000000002D15EC string=0x00000000002D15F0 "(a"
 *   insn=0x00000000002D15F8 string=0x00000000002D15FC "-"
 *   insn=0x00000000002D1600 string=0x00000000002D1604 "-D"
 *   insn=0x00000000002D1604 string=0x00000000002D1608 ""
 *   insn=0x00000000002D1610 string=0x00000000002D1614 "`"
 *   insn=0x00000000002D1618 string=0x00000000002D161C ""
 *   insn=0x00000000002D161C string=0x00000000002D1620 ""
 *   insn=0x00000000002D1630 string=0x00000000002D1634 "!"
 *   insn=0x00000000002D1648 string=0x00000000002D164C "J=G"
 *   insn=0x00000000002D164C string=0x00000000002D1650 ")!"
 *   insn=0x00000000002D1654 string=0x00000000002D1658 "*"
 *   insn=0x00000000002D1654 string=0x00000000002D166C "*"
 *   insn=0x00000000002D1658 string=0x00000000002D165C "K"
 *   insn=0x00000000002D165C string=0x00000000002D1660 "+"
 *   insn=0x00000000002D1668 string=0x00000000002D1678 "_"
 *   insn=0x00000000002D166C string=0x00000000002D1670 "K"
 *   insn=0x00000000002D1670 string=0x00000000002D1674 "+"
 *   insn=0x00000000002D1688 string=0x00000000002D168C "Fc\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Texture_Subtexture::Texture_Subtexture(
        Caver::Proto::Texture_Subtexture *this,
        const Caver::Proto::Texture_Subtexture *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = off_6C5D50;
  *((_QWORD *)this + 2) = &Caver::Proto::Texture_Subtexture::_default_name_;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 1065353216;
  Caver::Proto::Texture_Subtexture::MergeFrom(this, a2);
}

