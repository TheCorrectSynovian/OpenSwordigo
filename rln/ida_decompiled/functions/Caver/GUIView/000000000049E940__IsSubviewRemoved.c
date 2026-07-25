/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049E940
 * Mangled: _ZN5Caver7GUIView16IsSubviewRemovedERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::GUIView::IsSubviewRemoved(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 1
 *   0x00000000001FABA0  Caver::GUIView::IsSubviewRemoved(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000049E940 string=0x000000000049E944 "-@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::GUIView::IsSubviewRemoved(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)a2 + 88LL) != a1;
}

