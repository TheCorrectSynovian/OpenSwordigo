/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211B1C
 * Mangled: _ZN5boost10shared_ptrIN5Caver23GUINavigationControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>(Caver::GUINavigationController *)
 *
 * Callers: 1
 *   0x00000000001F9C70  boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>(Caver::GUINavigationController *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GUINavigationController,Caver::GUINavigationController>(boost::shared_ptr<Caver::GUINavigationController> const*,Caver::GUINavigationController *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000211B38 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000211B3C string=0x0000000000211B40 ")mG"
 *   insn=0x0000000000211B4C string=0x0000000000211B50 "(A"
 *   insn=0x0000000000211B54 string=0x0000000000211B58 ""
 *   insn=0x0000000000211B60 string=0x0000000000211B64 "`""
 *   insn=0x0000000000211B6C string=0x0000000000211B70 " "
 *   insn=0x0000000000211B84 string=0x0000000000211B88 "4"
 *   insn=0x0000000000211B8C string=0x0000000000211B90 ""
 *   insn=0x0000000000211B9C string=0x0000000000211BA0 "\t@"
 *   insn=0x0000000000211BAC string=0x0000000000211BB0 ""
 *   insn=0x0000000000211BBC string=0x0000000000211BC0 "@"
 *   insn=0x0000000000211BCC string=0x0000000000211BD0 "="
 *   insn=0x0000000000211BD8 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000211BDC string=0x0000000000211BE0 "h"
 *   insn=0x0000000000211BE0 string=0x0000000000211BE4 ""
 *   insn=0x0000000000211BF4 string=0x0000000000211BF8 "f"
 *   insn=0x0000000000211BF8 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000211C04 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6B9028;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GUINavigationController,Caver::GUINavigationController>();
  return result;
}

