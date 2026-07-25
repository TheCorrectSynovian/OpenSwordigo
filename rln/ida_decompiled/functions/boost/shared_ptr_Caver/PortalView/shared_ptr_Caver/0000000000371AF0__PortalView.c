/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371AF0
 * Mangled: _ZN5boost10shared_ptrIN5Caver10PortalViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(Caver::PortalView *)
 *
 * Callers: 2
 *   0x0000000000202D80  boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(Caver::PortalView *)
 *   0x0000000000371960  Caver::PortalViewController::~PortalViewController()
 *
 * Callees: 8
 *   0x00000000001F39B0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PortalView,Caver::PortalView>(boost::shared_ptr<Caver::PortalView> const*,Caver::PortalView *)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000371B0C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000371B10 string=0x0000000000371B14 ")"
 *   insn=0x0000000000371B20 string=0x0000000000371B24 "(A"
 *   insn=0x0000000000371B28 string=0x0000000000371B2C ""
 *   insn=0x0000000000371B34 string=0x0000000000371B38 "`""
 *   insn=0x0000000000371B44 string=0x00000000001F39B0 "P'"
 *   insn=0x0000000000371B58 string=0x0000000000371B5C "4"
 *   insn=0x0000000000371B60 string=0x0000000000371B64 ""
 *   insn=0x0000000000371B70 string=0x0000000000371B74 "\t@"
 *   insn=0x0000000000371B80 string=0x0000000000371B84 ""
 *   insn=0x0000000000371B90 string=0x0000000000371B94 "@"
 *   insn=0x0000000000371BA0 string=0x0000000000371BA4 "H?"
 *   insn=0x0000000000371BAC string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000371BB0 string=0x0000000000371BB4 "h"
 *   insn=0x0000000000371BB4 string=0x0000000000371BB8 "!@"
 *   insn=0x0000000000371BC8 string=0x0000000000371BCC "q."
 *   insn=0x0000000000371BCC string=0x00000000001FD590 "0'"
 *   insn=0x0000000000371BD8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CCBE8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PortalView,Caver::PortalView>();
  return result;
}

