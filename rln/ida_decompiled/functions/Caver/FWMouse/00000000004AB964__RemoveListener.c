/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB964
 * Mangled: _ZN5Caver7FWMouse14RemoveListenerEPNS_16IFWMouseListenerE
 * Demangled: Caver::FWMouse::RemoveListener(Caver::IFWMouseListener *)
 *
 * Callers: 1
 *   0x00000000001F4F00  Caver::FWMouse::RemoveListener(Caver::IFWMouseListener *)
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000052A9C8  sub_52A9C8
 *
 * Referenced strings: 4
 *   insn=0x00000000004AB974 string=0x00000000004AB978 "u"
 *   insn=0x00000000004AB998 string=0x00000000004AB99C ""
 *   insn=0x00000000004AB9A0 string=0x00000000004AB9A4 "C."
 *   insn=0x00000000004AB9A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWMouse::RemoveListener(_QWORD **a1, __int64 a2)
{
  _QWORD *v3; // x21
  _QWORD *v5; // x22

  v3 = *a1;
  if ( a1 != *a1 )
  {
    do
    {
      v5 = (_QWORD *)*v3;
      if ( v3[2] == a2 )
      {
        sub_52A9C8(v3);
        operator delete(v3);
      }
      v3 = v5;
    }
    while ( a1 != v5 );
  }
}

