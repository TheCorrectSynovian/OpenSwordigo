/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004200C0
 * Mangled: _ZN5boost10shared_ptrIN5Caver7MapViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(Caver::MapView *)
 *
 * Callers: 2
 *   0x00000000001F94C0  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(Caver::MapView *)
 *   0x0000000000420088  Caver::MapMenuPage::~MapMenuPage()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200BB0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000004200D8 string=0x00000000004200DC "AU"
 *   insn=0x00000000004200DC string=0x00000000004200E0 ")"
 *   insn=0x00000000004200DC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004200E0 string=0x00000000004200E4 ")"
 *   insn=0x00000000004200F0 string=0x00000000004200F4 "(A"
 *   insn=0x00000000004200F8 string=0x00000000004200FC ""
 *   insn=0x0000000000420104 string=0x0000000000420108 "`""
 *   insn=0x0000000000420128 string=0x000000000042012C "4"
 *   insn=0x0000000000420130 string=0x0000000000420134 ""
 *   insn=0x0000000000420140 string=0x0000000000420144 "\t@"
 *   insn=0x0000000000420150 string=0x0000000000420154 ""
 *   insn=0x0000000000420160 string=0x0000000000420164 "@"
 *   insn=0x0000000000420174 string=0x0000000000420178 "u"
 *   insn=0x000000000042017C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000420180 string=0x0000000000420184 "h"
 *   insn=0x0000000000420180 string=0x0000000000420194 "w"
 *   insn=0x0000000000420184 string=0x0000000000420188 "!@"
 *   insn=0x000000000042019C string=0x00000000001FD590 "0'"
 *   insn=0x00000000004201A4 string=0x00000000004201A8 "B\"
 *   insn=0x00000000004201A8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6D2BA8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>();
  return result;
}

