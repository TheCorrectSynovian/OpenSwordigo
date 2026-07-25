/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035AB64
 * Mangled: _ZN5boost10shared_ptrIN5Caver25SkillPickerViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *
 * Callers: 2
 *   0x0000000000202B90  boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FB230  Caver::GameViewController::GameControlButtonDown(Caver::GameControlButton)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203910  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>(boost::shared_ptr<Caver::SkillPickerViewController> const*,Caver::SkillPickerViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x000000000035AB80 string=0x000000000035AB84 "I"
 *   insn=0x000000000035AB80 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000035AB84 string=0x000000000035AB88 ")Y@"
 *   insn=0x000000000035AB94 string=0x000000000035AB98 "(A"
 *   insn=0x000000000035AB9C string=0x000000000035ABA0 ""
 *   insn=0x000000000035ABA8 string=0x000000000035ABAC "`""
 *   insn=0x000000000035ABB4 string=0x000000000035ABB8 "V"
 *   insn=0x000000000035ABCC string=0x000000000035ABD0 "4"
 *   insn=0x000000000035ABD4 string=0x000000000035ABD8 ""
 *   insn=0x000000000035ABE4 string=0x000000000035ABE8 "\t@"
 *   insn=0x000000000035ABF4 string=0x000000000035ABF8 ""
 *   insn=0x000000000035AC04 string=0x000000000035AC08 "@"
 *   insn=0x000000000035AC14 string=0x000000000035AC18 "+"
 *   insn=0x000000000035AC1C string=0x000000000035AC20 "pf"
 *   insn=0x000000000035AC20 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000035AC24 string=0x000000000035AC28 "h"
 *   insn=0x000000000035AC28 string=0x000000000035AC2C ""
 *   insn=0x000000000035AC3C string=0x000000000035AC40 "T"
 *   insn=0x000000000035AC40 string=0x00000000001FD590 "0'"
 *   insn=0x000000000035AC4C string=0x000000000035AC50 "x"
 *   insn=0x000000000035AC50 string=0x00000000001FB230 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CC188;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>();
  return result;
}

