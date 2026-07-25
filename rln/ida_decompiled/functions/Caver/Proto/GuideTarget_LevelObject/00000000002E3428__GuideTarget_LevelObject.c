/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3428
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObjectC2ERKS1_
 * Demangled: Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Callers: 1
 *   0x00000000001F65F0  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Callees: 15
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001F9840  Caver::Proto::GuideTarget_LevelObject::MergeFrom(Caver::Proto::GuideTarget_LevelObject const&)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FAF60  Caver::Proto::GuideTarget_LevelObject::SharedDtor(void)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 107
 *   insn=0x00000000002E3434 string=0x00000000002E3438 " "
 *   insn=0x00000000002E3438 string=0x00000000002E343C ""
 *   insn=0x00000000002E3440 string=0x00000000002E3444 "\t "
 *   insn=0x00000000002E3444 string=0x00000000002E3448 ")"
 *   insn=0x00000000002E3448 string=0x00000000002E344C "* "
 *   insn=0x00000000002E344C string=0x00000000002E3450 "J"
 *   insn=0x00000000002E3450 string=0x00000000002E3454 "A"
 *   insn=0x00000000002E3454 string=0x00000000002E3458 " "
 *   insn=0x00000000002E3458 string=0x00000000002E345C "h"
 *   insn=0x00000000002E345C string=0x00000000002E3460 "@"
 *   insn=0x00000000002E3460 string=0x00000000002E3464 "`"
 *   insn=0x00000000002E346C string=0x00000000001F9840 "0'"
 *   insn=0x00000000002E3480 string=0x00000000002E3484 "_P"
 *   insn=0x00000000002E3484 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E34A4 string=0x00000000002E34A8 "V"
 *   insn=0x00000000002E34C0 string=0x00000000002E34C4 """
 *   insn=0x00000000002E34C4 string=0x000000000058AB7C "./../../../../Source/Caver/Content/Proto/GameData.pb.cc"
 *   insn=0x00000000002E34D0 string=0x00000000002E34D4 "C"
 *   insn=0x00000000002E34D8 string=0x00000000002E34DC "!"
 *   insn=0x00000000002E34D8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002E34DC string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002E34E4 string=0x00000000002E34E8 "Jc"
 *   insn=0x00000000002E34E8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000002E34F4 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002E34F8 string=0x00000000002E34FC "=["
 *   insn=0x00000000002E34FC string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002E3500 string=0x00000000002E3504 ""
 *   insn=0x00000000002E3508 string=0x00000000002E350C "\t "
 *   insn=0x00000000002E3508 string=0x00000000002E3558 "h"
 *   insn=0x00000000002E350C string=0x00000000002E3510 "h"@"
 *   insn=0x00000000002E3510 string=0x00000000002E3514 "`\n@"
 *   insn=0x00000000002E3518 string=0x00000000002E351C ")"
 *   insn=0x00000000002E351C string=0x00000000002E3520 ""
 *   insn=0x00000000002E3520 string=0x00000000002E3524 "h""
 *   insn=0x00000000002E3530 string=0x00000000002E3534 "+H"
 *   insn=0x00000000002E3534 string=0x00000000002E3538 " "
 *   insn=0x00000000002E3534 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E3538 string=0x00000000002E353C ""
 *   insn=0x00000000002E353C string=0x00000000002E3540 "a"
 *   insn=0x00000000002E3540 string=0x00000000002E3544 ""
 *   insn=0x00000000002E3544 string=0x00000000002E3548 "`\n"
 *   insn=0x00000000002E354C string=0x00000000002E3550 "V"
 *   insn=0x00000000002E3558 string=0x00000000002E355C ") "
 *   insn=0x00000000002E355C string=0x00000000002E3560 "h"@"
 *   insn=0x00000000002E3560 string=0x00000000002E3564 "`"
 *   insn=0x00000000002E3568 string=0x00000000002E356C ")"
 *   insn=0x00000000002E356C string=0x00000000002E3570 ""
 *   insn=0x00000000002E3570 string=0x00000000002E3574 "h""
 *   insn=0x00000000002E3584 string=0x00000000002E3588 " "
 *   insn=0x00000000002E3588 string=0x00000000002E358C ""
 *   insn=0x00000000002E358C string=0x00000000002E3590 "a"
 *   insn=0x00000000002E3590 string=0x00000000002E3594 ""
 *   insn=0x00000000002E3594 string=0x00000000002E3598 "`"
 *   insn=0x00000000002E359C string=0x00000000002E35A0 "B"
 *   insn=0x00000000002E35B0 string=0x00000000002E35C8 "BK"
 *   insn=0x00000000002E35C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E35D0 string=0x00000000002E35D4 "["
 *   insn=0x00000000002E35DC string=0x00000000002E35E0 "["
 *   insn=0x00000000002E35EC string=0x00000000002E35F0 " "
 *   insn=0x00000000002E35F0 string=0x00000000002E35F4 ""
 *   insn=0x00000000002E35F8 string=0x00000000002E35FC "A"
 *   insn=0x00000000002E35FC string=0x00000000002E3600 "h"
 *   insn=0x00000000002E3600 string=0x00000000002E3604 "W^"
 *   insn=0x00000000002E3604 string=0x00000000001FAF60 "0'"
 *   insn=0x00000000002E3628 string=0x00000000002E362C "H"
 *   insn=0x00000000002E363C string=0x00000000002E3640 "T"
 *   insn=0x00000000002E364C string=0x00000000002E3650 " "
 *   insn=0x00000000002E3650 string=0x00000000002E3654 "`\n@"
 *   insn=0x00000000002E3654 string=0x00000000002E3658 ""
 *   insn=0x00000000002E365C string=0x00000000002E3660 " "
 *   insn=0x00000000002E3660 string=0x00000000002E3684 "( "
 *   insn=0x00000000002E3664 string=0x00000000002E3668 "\t"
 *   insn=0x00000000002E3668 string=0x00000000002E366C "\n "
 *   insn=0x00000000002E366C string=0x00000000002E3670 "J"
 *   insn=0x00000000002E3670 string=0x00000000002E3674 "(a"
 *   insn=0x00000000002E367C string=0x00000000002E36DC "\n "
 *   insn=0x00000000002E3680 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E3684 string=0x00000000002E3688 "s"
 *   insn=0x00000000002E3688 string=0x00000000002E368C ""
 *   insn=0x00000000002E3690 string=0x00000000002E3694 "@"
 *   insn=0x00000000002E3694 string=0x00000000002E3698 "3"
 *   insn=0x00000000002E3698 string=0x00000000002E369C "h"
 *   insn=0x00000000002E369C string=0x00000000002E36A0 "\t "
 *   insn=0x00000000002E36A0 string=0x00000000002E36A4 ")"
 *   insn=0x00000000002E36B0 string=0x00000000002E3700 "\t "
 *   insn=0x00000000002E36C4 string=0x00000000002E36C8 "A"
 *   insn=0x00000000002E36DC string=0x00000000002E36E0 "J=G"
 *   insn=0x00000000002E36E0 string=0x00000000002E36E4 ")!"
 *   insn=0x00000000002E36E8 string=0x00000000002E36EC "*"
 *   insn=0x00000000002E36E8 string=0x00000000002E3724 "*"
 *   insn=0x00000000002E36EC string=0x00000000002E36F0 "K"
 *   insn=0x00000000002E36F0 string=0x00000000002E36F4 "+"
 *   insn=0x00000000002E36F8 string=0x00000000002E36FC ""
 *   insn=0x00000000002E36FC string=0x00000000002E3730 "_"
 *   insn=0x00000000002E3700 string=0x00000000002E3704 ")=G"
 *   insn=0x00000000002E3704 string=0x00000000002E3708 "!"
 *   insn=0x00000000002E3708 string=0x00000000002E370C ")"
 *   insn=0x00000000002E370C string=0x00000000002E3710 "\t"
 *   insn=0x00000000002E370C string=0x00000000002E3750 "\t"
 *   insn=0x00000000002E3710 string=0x00000000002E3714 "*"
 *   insn=0x00000000002E3714 string=0x00000000002E3718 "\n"
 *   insn=0x00000000002E3720 string=0x00000000002E375C "?"
 *   insn=0x00000000002E3724 string=0x00000000002E3728 "K"
 *   insn=0x00000000002E3728 string=0x00000000002E372C "+"
 *   insn=0x00000000002E3730 string=0x00000000002E3734 "l"
 *   insn=0x00000000002E3750 string=0x00000000002E3754 "*"
 *   insn=0x00000000002E3754 string=0x00000000002E3758 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(
        Caver::Proto::GuideTarget_LevelObject *this,
        const Caver::Proto::GuideTarget_LevelObject *a2)
{
  __int128 v2; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::GuideTarget_LevelObject::_default_level_name_;
  *(_QWORD *)this = off_6C69D0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_;
  *((_OWORD *)this + 1) = v2;
  *((_DWORD *)this + 8) = 0;
  Caver::Proto::GuideTarget_LevelObject::MergeFrom(this, a2);
  return result;
}

