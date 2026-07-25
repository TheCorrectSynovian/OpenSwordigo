/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0548
 * Mangled: _ZN5Caver7GUIView25DraggableItemDidLeaveViewEPNS_16GUIDraggableItemE
 * Demangled: Caver::GUIView::DraggableItemDidLeaveView(Caver::GUIDraggableItem *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A054C string=0x00000000004A0550 ""
 *   insn=0x00000000004A0554 string=0x00000000004A0558 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::DraggableItemDidLeaveView(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 88);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 168LL))(result);
  return result;
}

