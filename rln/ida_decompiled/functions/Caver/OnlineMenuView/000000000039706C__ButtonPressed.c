/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000039706C
 * Mangled: _ZN5Caver14OnlineMenuView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::OnlineMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *
 * Callees: 1
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000397070 string=0x0000000000397074 ""
 *   insn=0x000000000039707C string=0x0000000000397080 ""
 *   insn=0x0000000000397094 string=0x0000000000397098 ""
 *   insn=0x0000000000397094 string=0x00000000001F93B0 "0'"
 *   insn=0x00000000003970A0 string=0x00000000003970A4 " "
 *   insn=0x00000000003970A8 string=0x00000000003970AC ""
 *   insn=0x00000000003970B4 string=0x00000000003970B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::OnlineController *__fastcall Caver::OnlineMenuView::ButtonPressed(Caver::OnlineController *result, __int64 a2)
{
  __int64 v2; // x0
  __int64 v3; // x0

  if ( *((_QWORD *)result + 33) == a2 )
  {
    v2 = Caver::OnlineController::SharedController(result);
    return (Caver::OnlineController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  }
  else if ( *((_QWORD *)result + 35) == a2 )
  {
    v3 = Caver::OnlineController::SharedController(result);
    return (Caver::OnlineController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  }
  return result;
}

