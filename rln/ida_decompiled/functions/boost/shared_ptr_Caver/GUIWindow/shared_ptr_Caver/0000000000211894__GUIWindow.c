/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211894
 * Mangled: _ZN5boost10shared_ptrIN5Caver9GUIWindowEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>(Caver::GUIWindow *)
 *
 * Callers: 1
 *   0x00000000001FB060  boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>(Caver::GUIWindow *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA7E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIWindow,Caver::GUIWindow>(boost::shared_ptr<Caver::GUIWindow> const*,Caver::GUIWindow *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000002118AC string=0x00000000002118B0 "L"
 *   insn=0x00000000002118B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002118B4 string=0x00000000002118B8 ")"
 *   insn=0x00000000002118C4 string=0x00000000002118C8 "(A"
 *   insn=0x00000000002118CC string=0x00000000002118D0 ""
 *   insn=0x00000000002118D8 string=0x00000000002118DC "`""
 *   insn=0x00000000002118E8 string=0x00000000001FA7E0 "0'"
 *   insn=0x00000000002118FC string=0x0000000000211900 "4"
 *   insn=0x0000000000211904 string=0x0000000000211908 ""
 *   insn=0x0000000000211914 string=0x0000000000211918 "\t@"
 *   insn=0x0000000000211924 string=0x0000000000211928 ""
 *   insn=0x0000000000211934 string=0x0000000000211938 "@"
 *   insn=0x000000000021194C string=0x0000000000211950 "$"
 *   insn=0x0000000000211950 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000211954 string=0x0000000000211958 "h"
 *   insn=0x0000000000211958 string=0x000000000021195C "!@"
 *   insn=0x000000000021196C string=0x0000000000211970 ""
 *   insn=0x0000000000211970 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000211978 string=0x000000000021197C "M"
 *   insn=0x000000000021197C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6B8F78;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIWindow,Caver::GUIWindow>();
  return result;
}

