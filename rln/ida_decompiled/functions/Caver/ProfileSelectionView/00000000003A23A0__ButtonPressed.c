/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A23A0
 * Mangled: _ZN5Caver20ProfileSelectionView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::ProfileSelectionView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000003A23A8 string=0x00000000003A23AC "\t"
 *   insn=0x00000000003A23B0 string=0x00000000003A23B4 """
 *   insn=0x00000000003A23B4 string=0x00000000003A23B8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionView::ButtonPressed(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 248);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 8LL))(result, a1);
  return result;
}

