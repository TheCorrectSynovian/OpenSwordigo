/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000442868
 * Mangled: _ZN5boost10shared_ptrIN5Caver7TabViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::TabView>::shared_ptr<Caver::TabView>(Caver::TabView *)
 *
 * Callers: 1
 *   0x00000000001FFF50  boost::shared_ptr<Caver::TabView>::shared_ptr<Caver::TabView>(Caver::TabView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA1B0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,Caver::TabView>(boost::shared_ptr<Caver::TabView> const*,Caver::TabView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x0000000000442880 string=0x0000000000442884 "W"
 *   insn=0x0000000000442884 string=0x0000000000442888 ")"
 *   insn=0x0000000000442884 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000442888 string=0x000000000044288C ")}G"
 *   insn=0x0000000000442898 string=0x000000000044289C "(A"
 *   insn=0x00000000004428A0 string=0x00000000004428A4 ""
 *   insn=0x00000000004428AC string=0x00000000004428B0 "`""
 *   insn=0x00000000004428B8 string=0x00000000004428BC "="
 *   insn=0x00000000004428BC string=0x00000000001FA1B0 "0'"
 *   insn=0x00000000004428D0 string=0x00000000004428D4 "4"
 *   insn=0x00000000004428D8 string=0x00000000004428DC ""
 *   insn=0x00000000004428E8 string=0x00000000004428EC "\t@"
 *   insn=0x00000000004428F8 string=0x00000000004428FC ""
 *   insn=0x0000000000442908 string=0x000000000044290C "@"
 *   insn=0x0000000000442920 string=0x0000000000442924 "/"
 *   insn=0x0000000000442924 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000442928 string=0x000000000044292C "h"
 *   insn=0x000000000044292C string=0x0000000000442930 "!@"
 *   insn=0x0000000000442944 string=0x00000000001FD590 "0'"
 *   insn=0x000000000044294C string=0x0000000000442950 "X"
 *   insn=0x0000000000442950 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::TabView>::shared_ptr<Caver::TabView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D3F18;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,Caver::TabView>();
  return result;
}

