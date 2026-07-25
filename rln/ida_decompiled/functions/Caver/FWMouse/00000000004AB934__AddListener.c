/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB934
 * Mangled: _ZN5Caver7FWMouse11AddListenerEPNS_16IFWMouseListenerE
 * Demangled: Caver::FWMouse::AddListener(Caver::IFWMouseListener *)
 *
 * Callers: 1
 *   0x00000000001F7280  Caver::FWMouse::AddListener(Caver::IFWMouseListener *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 3
 *   insn=0x00000000004AB948 string=0x00000000004AB94C "%'"
 *   insn=0x00000000004AB94C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004AB960 string=0x000000000052A9AC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWMouse::AddListener(__int64 a1, __int64 a2)
{
  __int64 v4; // x0

  v4 = operator new(0x18u);
  *(_QWORD *)(v4 + 16) = a2;
  return sub_52A9AC(v4, a1);
}

