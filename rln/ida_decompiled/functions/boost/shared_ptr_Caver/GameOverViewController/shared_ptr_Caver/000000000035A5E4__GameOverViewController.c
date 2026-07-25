/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035A5E4
 * Mangled: _ZN5boost10shared_ptrIN5Caver22GameOverViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>(Caver::GameOverViewController *)
 *
 * Callers: 2
 *   0x00000000001FB240  boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>(Caver::GameOverViewController *)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F8B50  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameOverViewController,Caver::GameOverViewController>(boost::shared_ptr<Caver::GameOverViewController> const*,Caver::GameOverViewController *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE7C0  Caver::GameViewController::HandleGameEvent(Caver::GameEvent const&)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000035A600 string=0x000000000035A604 "i"
 *   insn=0x000000000035A600 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000035A604 string=0x000000000035A608 ")uC"
 *   insn=0x000000000035A614 string=0x000000000035A618 "(A"
 *   insn=0x000000000035A61C string=0x000000000035A620 ""
 *   insn=0x000000000035A628 string=0x000000000035A62C "`""
 *   insn=0x000000000035A634 string=0x000000000035A638 "Fy"
 *   insn=0x000000000035A638 string=0x00000000001F8B50 "0'"
 *   insn=0x000000000035A64C string=0x000000000035A650 "4"
 *   insn=0x000000000035A654 string=0x000000000035A658 ""
 *   insn=0x000000000035A664 string=0x000000000035A668 "\t@"
 *   insn=0x000000000035A674 string=0x000000000035A678 ""
 *   insn=0x000000000035A684 string=0x000000000035A688 "@"
 *   insn=0x000000000035A698 string=0x000000000035A69C ","
 *   insn=0x000000000035A6A0 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000035A6A4 string=0x000000000035A6A8 "h"
 *   insn=0x000000000035A6A4 string=0x000000000035A6B8 "."
 *   insn=0x000000000035A6A8 string=0x000000000035A6AC ""
 *   insn=0x000000000035A6C0 string=0x00000000001FD590 "0'"
 *   insn=0x000000000035A6CC string=0x000000000035A6D0 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CC0E8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameOverViewController,Caver::GameOverViewController>();
  return result;
}

