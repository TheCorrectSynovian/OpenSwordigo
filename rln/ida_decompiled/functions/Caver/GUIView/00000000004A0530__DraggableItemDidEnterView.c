/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0530
 * Mangled: _ZN5Caver7GUIView25DraggableItemDidEnterViewEPNS_16GUIDraggableItemE
 * Demangled: Caver::GUIView::DraggableItemDidEnterView(Caver::GUIDraggableItem *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A0534 string=0x00000000004A0538 ""
 *   insn=0x00000000004A053C string=0x00000000004A0540 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::DraggableItemDidEnterView(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 88);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 160LL))(result);
  return result;
}

