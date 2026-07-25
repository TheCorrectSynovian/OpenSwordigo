/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A04F4
 * Mangled: _ZN5Caver7GUIView24DragAndDropItemWithTouchERKNS_7FWTouchERKN5boost10shared_ptrINS_16GUIDraggableItemEEE
 * Demangled: Caver::GUIView::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004A04FC string=0x00000000004A0500 ""
 *   insn=0x00000000004A0508 string=0x00000000004A050C "y@"
 *   insn=0x00000000004A0510 string=0x00000000004A0514 ""
 *   insn=0x00000000004A0528 string=0x00000000004A052C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::DragAndDropItemWithTouch(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 152LL))(v5, a2, a3);
}

