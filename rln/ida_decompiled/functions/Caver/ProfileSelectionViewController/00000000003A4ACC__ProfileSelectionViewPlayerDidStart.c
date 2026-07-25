/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4ACC
 * Mangled: _ZN5Caver30ProfileSelectionViewController34ProfileSelectionViewPlayerDidStartEPNS_20ProfileSelectionViewERKN5boost10shared_ptrINS_13PlayerProfileEEE
 * Demangled: Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3960  Caver::ProfileSelectionView::AnimateOut(void)
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000003A4AD8 string=0x00000000003A4ADC "`*@"
 *   insn=0x00000000003A4AE0 string=0x00000000003A4AE4 ""
 *   insn=0x00000000003A4AE0 string=0x00000000003A4AF0 "`.@"
 *   insn=0x00000000003A4AE4 string=0x00000000003A4AE8 ""
 *   insn=0x00000000003A4AF4 string=0x00000000003A4AF8 "`"
 *   insn=0x00000000003A4AF4 string=0x00000000001F3960 "P'"
 *   insn=0x00000000003A4B00 string=0x00000000003A4B04 "CI"
 *   insn=0x00000000003A4B04 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // x0

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 80);
  if ( v2 )
    (**v2)(v2);
  Caver::ProfileSelectionView::AnimateOut(*(Caver::ProfileSelectionView **)(a1 + 88));
  return Caver::GUIViewController::DismissModalViewController(*(Caver::GUIViewController **)(a1 + 40));
}

