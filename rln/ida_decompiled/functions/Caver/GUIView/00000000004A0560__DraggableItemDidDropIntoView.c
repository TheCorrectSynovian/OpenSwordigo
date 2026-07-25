/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0560
 * Mangled: _ZN5Caver7GUIView28DraggableItemDidDropIntoViewEPNS_16GUIDraggableItemE
 * Demangled: Caver::GUIView::DraggableItemDidDropIntoView(Caver::GUIDraggableItem *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A0564 string=0x00000000004A0568 ""
 *   insn=0x00000000004A056C string=0x00000000004A0570 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::DraggableItemDidDropIntoView(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 88);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 176LL))(result);
  return result;
}

