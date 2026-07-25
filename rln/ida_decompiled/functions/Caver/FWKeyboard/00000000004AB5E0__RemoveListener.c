/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB5E0
 * Mangled: _ZN5Caver10FWKeyboard14RemoveListenerEPNS_19IFWKeyboardListenerE
 * Demangled: Caver::FWKeyboard::RemoveListener(Caver::IFWKeyboardListener *)
 *
 * Callers: 1
 *   0x00000000001F4C00  Caver::FWKeyboard::RemoveListener(Caver::IFWKeyboardListener *)
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000052A9C8  sub_52A9C8
 *
 * Referenced strings: 3
 *   insn=0x00000000004AB5F0 string=0x00000000004AB5F4 "u"
 *   insn=0x00000000004AB61C string=0x00000000004AB620 "$/"
 *   insn=0x00000000004AB620 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWKeyboard::RemoveListener(_QWORD **a1, __int64 a2)
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

