/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000372804
 * Mangled: _ZN5boost10shared_ptrIN5Caver15SkillPickerViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *
 * Callers: 2
 *   0x00000000001F8F70  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *   0x00000000003724C4  Caver::SkillPickerViewController::LoadView(void)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7E60  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203E70  Caver::SkillPickerViewController::SkillPickerViewDidSelectSkill(Caver::SkillPickerView *,boost::shared_ptr<Caver::Skill> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 93
 *   insn=0x000000000037281C string=0x0000000000372820 "p"
 *   insn=0x0000000000372820 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000372824 string=0x0000000000372828 ")qD"
 *   insn=0x0000000000372834 string=0x0000000000372838 "(A"
 *   insn=0x000000000037283C string=0x0000000000372840 ""
 *   insn=0x0000000000372848 string=0x000000000037284C "`""
 *   insn=0x0000000000372858 string=0x00000000001F7E60 "0'"
 *   insn=0x000000000037286C string=0x0000000000372870 "4"
 *   insn=0x0000000000372874 string=0x0000000000372878 ""
 *   insn=0x0000000000372884 string=0x0000000000372888 "\t@"
 *   insn=0x0000000000372894 string=0x0000000000372898 ""
 *   insn=0x00000000003728A4 string=0x00000000003728A8 "@"
 *   insn=0x00000000003728BC string=0x00000000003728C0 "H"
 *   insn=0x00000000003728C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003728C4 string=0x00000000003728C8 "h"
 *   insn=0x00000000003728C8 string=0x00000000003728CC "!@"
 *   insn=0x00000000003728DC string=0x00000000003728E0 ",+"
 *   insn=0x00000000003728E0 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000372908 string=0x000000000037290C "MH"
 *   insn=0x0000000000372910 string=0x0000000000372914 "i"
 *   insn=0x0000000000372910 string=0x0000000000372920 ""
 *   insn=0x0000000000372914 string=0x0000000000372918 ")"
 *   insn=0x0000000000372918 string=0x000000000037291C "i"
 *   insn=0x0000000000372920 string=0x0000000000372924 "v"
 *   insn=0x000000000037292C string=0x0000000000372930 "?"
 *   insn=0x0000000000372934 string=0x0000000000372938 "*"
 *   insn=0x000000000037293C string=0x0000000000372940 "\t@"
 *   insn=0x000000000037294C string=0x0000000000372950 ""
 *   insn=0x0000000000372954 string=0x0000000000372958 "!"
 *   insn=0x000000000037295C string=0x0000000000372960 "@"
 *   insn=0x0000000000372970 string=0x0000000000372974 "?"
 *   insn=0x000000000037297C string=0x0000000000372980 "h"
 *   insn=0x0000000000372980 string=0x0000000000372984 ""
 *   insn=0x0000000000372984 string=0x0000000000372988 "h"
 *   insn=0x0000000000372988 string=0x000000000037298C "!"
 *   insn=0x000000000037298C string=0x0000000000372990 "h"
 *   insn=0x0000000000372994 string=0x0000000000372998 "\t@"
 *   insn=0x000000000037299C string=0x00000000003729A0 "h\n@"
 *   insn=0x00000000003729A0 string=0x00000000003729A4 ""
 *   insn=0x00000000003729A4 string=0x00000000003729A8 "h\n"
 *   insn=0x00000000003729A8 string=0x00000000003729AC "@"
 *   insn=0x00000000003729AC string=0x0000000000372AB4 "h"
 *   insn=0x00000000003729B4 string=0x00000000003729B8 "MH"
 *   insn=0x00000000003729BC string=0x00000000003729C0 "i"
 *   insn=0x00000000003729C0 string=0x00000000003729C4 ")"
 *   insn=0x00000000003729C4 string=0x00000000003729C8 "i"
 *   insn=0x00000000003729D0 string=0x00000000003729D4 "+"
 *   insn=0x00000000003729D4 string=0x00000000003729D8 "k"
 *   insn=0x00000000003729D8 string=0x00000000003729DC "+"
 *   insn=0x00000000003729E0 string=0x00000000003729E4 "\n"
 *   insn=0x00000000003729E4 string=0x00000000003729E8 "4"
 *   insn=0x00000000003729E8 string=0x0000000000372A2C "3"
 *   insn=0x00000000003729EC string=0x00000000003729F0 ""
 *   insn=0x00000000003729FC string=0x0000000000372A00 "\t@"
 *   insn=0x0000000000372A0C string=0x0000000000372A10 ""
 *   insn=0x0000000000372A1C string=0x0000000000372A20 "@"
 *   insn=0x0000000000372A2C string=0x0000000000372A30 "h"
 *   insn=0x0000000000372A30 string=0x0000000000372A34 ""
 *   insn=0x0000000000372A34 string=0x0000000000372A38 "h"
 *   insn=0x0000000000372A3C string=0x0000000000372A40 "h"
 *   insn=0x0000000000372A44 string=0x0000000000372A48 "\t@"
 *   insn=0x0000000000372A4C string=0x0000000000372A50 "h\n@"
 *   insn=0x0000000000372A50 string=0x0000000000372A54 ""
 *   insn=0x0000000000372A54 string=0x0000000000372A58 "h\n"
 *   insn=0x0000000000372A5C string=0x0000000000372A60 "h"
 *   insn=0x0000000000372A64 string=0x0000000000372A68 "@"
 *   insn=0x0000000000372A78 string=0x0000000000372A7C ""
 *   insn=0x0000000000372A88 string=0x0000000000372A8C ""
 *   insn=0x0000000000372A98 string=0x0000000000372A9C ""
 *   insn=0x0000000000372AAC string=0x0000000000372AB0 "@/"
 *   insn=0x0000000000372AB8 string=0x0000000000372ABC "@"
 *   insn=0x0000000000372AE0 string=0x0000000000372AE4 "h"
 *   insn=0x0000000000372AE4 string=0x0000000000372AE8 ""
 *   insn=0x0000000000372AE8 string=0x0000000000372AEC "h"
 *   insn=0x0000000000372AF0 string=0x0000000000372AF4 "h"
 *   insn=0x0000000000372AF4 string=0x0000000000372AF8 "\t@"
 *   insn=0x0000000000372B00 string=0x0000000000372B04 "h\n@"
 *   insn=0x0000000000372B04 string=0x0000000000372B08 ""
 *   insn=0x0000000000372B08 string=0x0000000000372B0C "h\n"
 *   insn=0x0000000000372B10 string=0x0000000000372B14 "h"
 *   insn=0x0000000000372B14 string=0x0000000000372B18 "@"
 *   insn=0x0000000000372B28 string=0x0000000000372B2C "3"
 *   insn=0x0000000000372B2C string=0x0000000000372B30 "h"
 *   insn=0x0000000000372B30 string=0x0000000000372B34 ""
 *   insn=0x0000000000372B34 string=0x0000000000372B38 "h"
 *   insn=0x0000000000372B3C string=0x0000000000372B40 "h"
 *   insn=0x0000000000372B40 string=0x0000000000372B44 "\t@"
 *   insn=0x0000000000372B4C string=0x0000000000372B50 "h\n@"
 *   insn=0x0000000000372B50 string=0x0000000000372B54 ""
 *   insn=0x0000000000372B54 string=0x0000000000372B58 "h\n"
 *   insn=0x0000000000372B5C string=0x0000000000372B60 "h"
 *   insn=0x0000000000372B60 string=0x0000000000372B64 "@"
 *   insn=0x0000000000372B70 string=0x0000000000372B74 "T;"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CCE98;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>();
  return result;
}

