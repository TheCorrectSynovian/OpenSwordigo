/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4B08
 * Mangled: _ZThn72_N5Caver30ProfileSelectionViewController34ProfileSelectionViewPlayerDidStartEPNS_20ProfileSelectionViewERKN5boost10shared_ptrINS_13PlayerProfileEEE
 * Demangled: `non-virtual thunk to'Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3960  Caver::ProfileSelectionView::AnimateOut(void)
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000003A4B14 string=0x00000000003A4B18 "`"
 *   insn=0x00000000003A4B1C string=0x00000000003A4B20 ""
 *   insn=0x00000000003A4B1C string=0x00000000003A4B2C "`\n@"
 *   insn=0x00000000003A4B20 string=0x00000000003A4B24 ""
 *   insn=0x00000000003A4B30 string=0x00000000003A4B34 "`"
 *   insn=0x00000000003A4B30 string=0x00000000001F3960 "P'"
 *   insn=0x00000000003A4B3C string=0x00000000003A4B40 "4I"
 *   insn=0x00000000003A4B40 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(
        __int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // x0

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 8);
  if ( v2 )
    (**v2)(v2);
  Caver::ProfileSelectionView::AnimateOut(*(Caver::ProfileSelectionView **)(a1 + 16));
  return Caver::GUIViewController::DismissModalViewController(*(Caver::GUIViewController **)(a1 - 32));
}

