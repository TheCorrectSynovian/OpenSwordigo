/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000491E6C
 * Mangled: _ZThn272_N5Caver12GUIAlertView22TextFieldDidEndEditingEPNS_12GUITextFieldE
 * Demangled: `non-virtual thunk to'Caver::GUIAlertView::TextFieldDidEndEditing(Caver::GUITextField *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200880  Caver::GUIAlertView::Dismiss(void)
 *
 * Referenced strings: 17
 *   insn=0x0000000000491E6C string=0x0000000000491E70 "*"
 *   insn=0x0000000000491E70 string=0x0000000000491E74 "I"
 *   insn=0x0000000000491E74 string=0x0000000000491E78 "?"
 *   insn=0x0000000000491E78 string=0x0000000000491E7C ""
 *   insn=0x0000000000491E7C string=0x0000000000491E80 "I"
 *   insn=0x0000000000491E80 string=0x0000000000491E84 "?"
 *   insn=0x0000000000491E84 string=0x0000000000491E88 ","
 *   insn=0x0000000000491E8C string=0x0000000000491E90 "J"
 *   insn=0x0000000000491E90 string=0x0000000000491E94 "b"
 *   insn=0x0000000000491EA0 string=0x0000000000491EA4 "A"
 *   insn=0x0000000000491EBC string=0x0000000000491EC0 "a"
 *   insn=0x0000000000491ED0 string=0x0000000000491ED4 "k"
 *   insn=0x0000000000491EE4 string=0x0000000000491EE8 "I"
 *   insn=0x0000000000491EE8 string=0x0000000000491EEC ")"
 *   insn=0x0000000000491EEC string=0x0000000000491EF0 "ii"
 *   insn=0x0000000000491EF4 string=0x0000000000491EF8 "@"
 *   insn=0x0000000000491F00 string=0x0000000000491F04 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GUIAlertView::TextFieldDidEndEditing(
        __int64 this,
        Caver::GUITextField *a2)
{
  __int64 v2; // x8
  __int64 v3; // x10
  __int64 v4; // x9
  unsigned __int64 v5; // x12
  __int64 v6; // x10
  __int64 v7; // x11
  __int64 *v8; // x13
  __int64 v9; // x14
  __int64 v10; // x15
  __int64 v11; // t1
  __int64 *v12; // x12
  __int64 v13; // t1

  v2 = *(_QWORD *)(this + 48);
  v3 = *(_QWORD *)(this + 56) - v2;
  if ( (int)((unsigned __int64)v3 >> 4) >= 1 )
  {
    v4 = (int)(v3 >> 4);
    if ( v4 <= 1 )
      v5 = 1;
    else
      v5 = (int)(v3 >> 4);
    v6 = v3 << 28;
    if ( v5 >= 3 )
    {
      v7 = v5 & 0x7FFFFFFFFFFFFFFELL;
      v8 = (__int64 *)(v2 + 16);
      v9 = v5 & 0x7FFFFFFFFFFFFFFELL;
      do
      {
        v10 = *(v8 - 2);
        v11 = *v8;
        v8 += 4;
        v9 -= 2;
        *(_BYTE *)(v10 + 229) = 0;
        *(_BYTE *)(v11 + 229) = 0;
      }
      while ( v9 );
      if ( v5 == v7 )
        goto LABEL_12;
    }
    else
    {
      v7 = 0;
    }
    v12 = (__int64 *)(v2 + 16 * v7);
    do
    {
      v13 = *v12;
      v12 += 2;
      ++v7;
      *(_BYTE *)(v13 + 229) = 0;
    }
    while ( v7 < v4 );
LABEL_12:
    if ( *(Caver::GUITextField **)(v2 + ((v6 - 0x100000000LL) >> 28)) == a2 )
      return Caver::GUIAlertView::Dismiss((Caver::GUIAlertView *)(this - 272));
  }
  return this;
}

