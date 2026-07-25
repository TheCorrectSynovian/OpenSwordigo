/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000365580
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_25SkillPickerViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>(boost::shared_ptr<Caver::SkillPickerViewController> const*,Caver::SkillPickerViewController *)
 *
 * Callers: 1
 *   0x0000000000203910  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>(boost::shared_ptr<Caver::SkillPickerViewController> const*,Caver::SkillPickerViewController *)
 *
 * Callees: 3
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x0000000000365590 string=0x0000000000365594 "`"
 *   insn=0x0000000000365594 string=0x0000000000365598 ""
 *   insn=0x0000000000365594 string=0x00000000003655A0 "3"
 *   insn=0x0000000000365598 string=0x000000000036559C "h"
 *   insn=0x00000000003655A4 string=0x00000000003655A8 "h"
 *   insn=0x00000000003655A8 string=0x00000000003655AC ""
 *   insn=0x00000000003655AC string=0x00000000003655B0 "h"
 *   insn=0x00000000003655C0 string=0x00000000003655C4 "h\n@"
 *   insn=0x00000000003655C4 string=0x00000000003655C8 ""
 *   insn=0x00000000003655C8 string=0x00000000003655CC "h\n"
 *   insn=0x00000000003655D0 string=0x00000000003655D4 "@"
 *   insn=0x00000000003655D4 string=0x00000000003655D8 ""
 *   insn=0x00000000003655D8 string=0x00000000003655DC ""
 *   insn=0x00000000003655E0 string=0x00000000003655E4 ""
 *   insn=0x00000000003655E4 string=0x00000000003655E8 "@"
 *   insn=0x00000000003655F4 string=0x00000000003655F8 "h"
 *   insn=0x00000000003655F8 string=0x00000000003655FC ""
 *   insn=0x00000000003655FC string=0x0000000000365600 "h"
 *   insn=0x0000000000365600 string=0x0000000000365604 "!"
 *   insn=0x0000000000365604 string=0x0000000000365608 "h"
 *   insn=0x000000000036560C string=0x0000000000365610 "\t@"
 *   insn=0x0000000000365614 string=0x0000000000365618 "h\n@"
 *   insn=0x0000000000365618 string=0x000000000036561C ""
 *   insn=0x000000000036561C string=0x0000000000365620 "h\n"
 *   insn=0x0000000000365624 string=0x0000000000365634 "h"
 *   insn=0x0000000000365644 string=0x0000000000365648 " "
 *   insn=0x000000000036564C string=0x0000000000365650 "3"
 *   insn=0x0000000000365650 string=0x0000000000365654 "h"
 *   insn=0x0000000000365654 string=0x0000000000365658 ""
 *   insn=0x0000000000365658 string=0x000000000036565C "h"
 *   insn=0x0000000000365660 string=0x0000000000365664 "h"
 *   insn=0x0000000000365664 string=0x0000000000365668 "\t@"
 *   insn=0x0000000000365670 string=0x0000000000365674 "h\n@"
 *   insn=0x0000000000365674 string=0x0000000000365678 ""
 *   insn=0x0000000000365678 string=0x000000000036567C "h\n"
 *   insn=0x0000000000365680 string=0x0000000000365684 "h"
 *   insn=0x0000000000365684 string=0x0000000000365688 "@"
 *   insn=0x0000000000365698 string=0x000000000036569C ","
 *   insn=0x00000000003656B0 string=0x00000000003656B4 ""
 *   insn=0x00000000003656B0 string=0x00000000001F40B0 "P'"
 *   insn=0x00000000003656B4 string=0x00000000003656B8 ""
 *   insn=0x00000000003656C4 string=0x00000000003656C8 "\n"
 *   insn=0x00000000003656C8 string=0x00000000003656CC "\tA"
 *   insn=0x00000000003656CC string=0x00000000003656D0 "!"
 *   insn=0x00000000003656D0 string=0x00000000003656D4 "@"
 *   insn=0x00000000003656D8 string=0x00000000003656DC "i"
 *   insn=0x00000000003656DC string=0x00000000003656E0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

