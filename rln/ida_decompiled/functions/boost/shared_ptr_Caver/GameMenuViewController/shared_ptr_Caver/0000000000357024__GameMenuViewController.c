/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357024
 * Mangled: _ZN5boost10shared_ptrIN5Caver22GameMenuViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *
 * Callers: 2
 *   0x00000000001F93C0  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *   0x0000000000356DCC  Caver::GameViewController::ShowMenu(void)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAB10  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>(boost::shared_ptr<Caver::GameMenuViewController> const*,Caver::GameMenuViewController *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FDED0  Caver::GameEvent::SetEventsEnabled(bool)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x000000000035703C string=0x0000000000357040 "hy"
 *   insn=0x0000000000357040 string=0x0000000000357044 "i"
 *   insn=0x0000000000357040 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000357044 string=0x0000000000357048 ")"
 *   insn=0x0000000000357054 string=0x0000000000357058 "(A"
 *   insn=0x000000000035705C string=0x0000000000357060 ""
 *   insn=0x0000000000357068 string=0x000000000035706C "`""
 *   insn=0x0000000000357078 string=0x00000000001FAB10 "0'"
 *   insn=0x000000000035708C string=0x0000000000357090 "4"
 *   insn=0x0000000000357094 string=0x0000000000357098 ""
 *   insn=0x00000000003570A4 string=0x00000000003570A8 "\t@"
 *   insn=0x00000000003570B4 string=0x00000000003570B8 ""
 *   insn=0x00000000003570C4 string=0x00000000003570C8 "@"
 *   insn=0x00000000003570DC string=0x00000000003570E0 "@u"
 *   insn=0x00000000003570E0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003570E4 string=0x00000000003570E8 "h"
 *   insn=0x00000000003570E8 string=0x00000000003570EC ""
 *   insn=0x00000000003570FC string=0x0000000000357100 "$"
 *   insn=0x0000000000357100 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000357128 string=0x000000000035712C "("
 *   insn=0x000000000035712C string=0x0000000000357130 "\t"
 *   insn=0x0000000000357134 string=0x0000000000357138 "f"
 *   insn=0x0000000000357138 string=0x00000000001FDED0 "0'"
 *   insn=0x000000000035713C string=0x0000000000357140 "b"
 *   insn=0x0000000000357148 string=0x000000000035714C ""
 *   insn=0x0000000000357154 string=0x0000000000357158 " "
 *   insn=0x0000000000357164 string=0x0000000000357168 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CBFF8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>();
  return result;
}

