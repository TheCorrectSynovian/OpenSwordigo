/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0578
 * Mangled: _ZN5Caver7GUIView11UndoManagerEv
 * Demangled: Caver::GUIView::UndoManager(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A057C string=0x00000000004A0580 ""
 *   insn=0x00000000004A0584 string=0x00000000004A0588 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::UndoManager(Caver::GUIView *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 11);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 184LL))(result);
  return result;
}

